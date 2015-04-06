using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Dude : MonoBehaviour
{
 
	public Vector2 helmetPosition;
	public Slider healthSlier;
	public int defence;
	public int attack;
	public float health;
	public float speed;
	public float timeBetweenHits;
	public Enemy target;
	
	public Image armorImage;
	public Slider armorSlider;
	public Image weaponImage;
	public Slider weaponSlider;
	
	Transform hands;
	float currentHealth;
	Bonus weapon;
	Bonus armor;
	float remainingTimeToHit;
	bool closeToTarget = false;
	bool facingRight = true;
	Animator anim;
	
	void Awake () {
		anim = GetComponent<Animator> ();
		hands = GameObject.Find("hands").transform;
	}
	
	public void Load ()
	{
		transform.position = new Vector2(0, -3.5f);
		currentHealth = health;
		healthSlier.value = 1;
	}
	
	public bool IsAlive () {
		return currentHealth >= 0;
	}
	
	public void Clear() {
		SetWeapon(null);
		SetArmor(null);
	}	

	void Update ()
	{
		if (!GameManager.instance.isPlaying) return;
		
	 	if (armor != null && armor.IsBroken()) {
			SetArmor(null);
		}
		if (weapon != null && weapon.IsBroken()) {
			SetWeapon(null);
		}
		
		if (target != null) {
			if (closeToTarget) {
				remainingTimeToHit -= Time.deltaTime;
				if (remainingTimeToHit <= 0) {
					if (weapon != null) {
						anim.SetTrigger("weapon_hit");
					} else {
						if (target.low) {
							anim.SetTrigger("low_hit");
						} else {
							anim.SetTrigger("high_hit");
						}
					}
					remainingTimeToHit = timeBetweenHits;
					target.GetHit (attack);
					
					if (!target.isAlive) {
//						GameManager.enemies.KillEnemy (target.gameObject);
						target = null;
						closeToTarget = false;
					}
					
					if (weapon != null) {
						weapon.Use ();
						weaponSlider.value = weapon.DurabilityInPer ();
					}
				}
			} else {
				Vector2 pos = transform.position;
				Vector2 newPos = Vector2.MoveTowards (pos, target.gameObject.transform.position, speed * Time.deltaTime);
				if ((newPos.x < pos.x && facingRight) || (newPos.x > pos.x && !facingRight)) {
					Vector3 theScale = transform.localScale;
					theScale.x *= -1;
					transform.localScale = theScale;
					facingRight = !facingRight;
				}
				transform.position = newPos;
				anim.SetInteger("action", (int)ACTIONS.Walking);
			}
		} else {
			anim.SetInteger("action", (int)ACTIONS.Idle);
			target = GameManager.enemies.FindClosestEnemy ();
		}
	}
	
	void OnTriggerStay2D (Collider2D coll)
	{
		if (target != null && !closeToTarget && coll.gameObject == target.gameObject) {
			closeToTarget = true;			
			anim.SetInteger("action", (int)ACTIONS.Fighting);
		}
	}
	
	void OnTriggerLeave2D (Collider2D coll)
	{
		if (target != null && closeToTarget && coll.gameObject == target.gameObject) {
			closeToTarget = false;
		}
	}
	
	void UpdateHealthBar () {
		healthSlier.value = currentHealth / health;
	}
	
	public void AddLife (float percentage)
	{
		currentHealth +=  (percentage * health) / 100;
		UpdateHealthBar ();
	}
	
	public void GetHit (int damage)
	{
		damage -= defence;
		if (damage > 0) {
			currentHealth -= damage;
		}
		if (armor != null) {
			armor.Use ();	
			float armorValue = armor.DurabilityInPer();
			armorSlider.value = armorValue;
		}
		UpdateHealthBar ();
	}
	
	public void SetArmor (Box bonus)
	{
		if (armor != null) {
			defence -= armor.defence;
			Destroy (armor.gameObject);
		}
		if (bonus != null) {
			armor = bonus.GetComponent<Bonus> ();
			armor.gameObject.transform.parent = transform;
			armor.gameObject.transform.rotation = Quaternion.identity;
			Vector3 pos = transform.position + (Vector3)helmetPosition;
			pos.z = -3;
			armor.gameObject.transform.position = pos;
			
			defence += armor.defence;
			armorImage.sprite = armor.GetComponentInChildren<SpriteRenderer>().sprite;
			float armorValue = armor.DurabilityInPer();
			armorSlider.value = armorValue;
			armorImage.color = Color.white;
		} else {
			armorImage.sprite = null;
			armorImage.color = Color.black;
			armorSlider.value = 0;
		}
	}
	
	public void SetWeapon (Box bonus)
	{
		if (weapon != null) {
			attack -= weapon.attack;
			Destroy (weapon.gameObject);
		}
		if (bonus != null) {
			weapon = bonus.GetComponent<Bonus> ();
			weapon.gameObject.transform.parent = hands;
			weapon.gameObject.transform.position = hands.transform.position;
			
			attack += weapon.attack;
			weaponImage.sprite = weapon.GetComponentInChildren<SpriteRenderer>().sprite;
			weaponSlider.value = weapon.DurabilityInPer();
			weaponImage.color = Color.white;
		} else {
			weaponImage.sprite = null;
			weaponImage.color = Color.black;
			weaponSlider.value = 0;
		}
	}
}
