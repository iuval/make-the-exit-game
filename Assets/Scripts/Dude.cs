using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Dude : MonoBehaviour
{

	public Vector2 helmetPosition;
	public Vector2 weaponPosition;
	public Slider healthSlier;
	public int defence;
	public int attack;
	public float health;
	public float speed;
	public float timeBetweenHits;
	public DropEnemy target;
	
	public Image armorImage;
	public Slider armorSlider;
	public Image weaponImage;
	public Slider weaponSlider;
	
	float currentHealth;
	Bonus weapon;
	Bonus armor;
	float remainingTimeToHit;
	bool closeToTarget = false;
	
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
					remainingTimeToHit = timeBetweenHits;
					target.GetHit (attack);
					if (target.currentHealth <= 0) {
						GameManager.enemies.KillEnemy (target.gameObject);
						target = null;
						closeToTarget = false;
					}
					
					if (weapon != null) {
						weapon.Use ();
						weaponSlider.value = weapon.DurabilityInPer ();
					}
				}
			} else {
				transform.position = Vector2.MoveTowards (transform.position, target.gameObject.transform.position, speed * Time.deltaTime);
			}
		} else {
			target = GameManager.enemies.FindClosestEnemy ();
		}
	}
	
	void OnTriggerStay2D (Collider2D coll)
	{
		if (target != null && !closeToTarget && coll.gameObject == target.gameObject) {
			closeToTarget = true;
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
			armorSlider.value = armor.DurabilityInPer();
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
			armorSlider.value = armor.DurabilityInPer();
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
			weapon.gameObject.transform.parent = transform;
			weapon.gameObject.transform.rotation = Quaternion.identity;
			Vector3 pos = transform.position + (Vector3)weaponPosition;
			pos.z = -3;
			weapon.gameObject.transform.position = pos;
			
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
