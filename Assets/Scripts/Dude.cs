using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Dude : MonoBehaviour
{
	public Slider healthSlier;
	
	public int defence;
	int currentDefence;
	
	public int attack;
	int currentAttack;
	
	public float health;
	float currentHealth;
	
	public float speed;
	float currentSpeed;
	
	public float timeBetweenHits;
	public Enemy target;
	
	public Sprite helmet_iron;
	public Sprite helmet_gold;
	public Sprite helmet_diam;
	public Image armorImage;
	public Slider armorSlider;
	
	public Sprite weapon_iron;
	public Sprite weapon_gold;
	public Sprite weapon_diam;
	public Image weaponImage;
	public Slider weaponSlider;
	
	int weaponDuration;
	int currentWeaponDuration;
	
	int armorDuration;
	int currentArmorDuration;
	
	float remainingTimeToHit;
	bool closeToTarget = false;
	bool facingRight = true;
	Animator anim;
	Animator headAnim;
	Animator handsAnim;

	bool goToDoor;
	
	ACTIONS currentAction;
	 
	void SetAction (ACTIONS action)
	{
		if (currentAction != action)
		{
			anim.SetInteger("action", (int)action);
			currentAction = action;
		}
	}
	
	void Awake () 
	{
		anim = GetComponent<Animator> ();
		GameObject handsGO = GameObject.Find("hands") as GameObject;
		handsAnim = handsGO.GetComponent<Animator> ();
		headAnim = GameObject.Find("head").GetComponent<Animator> ();
	}
	
	public void Load ()
	{
		goToDoor = false;
	}
	
	public bool IsAlive ()
	{
		return currentHealth >= 0;
	}
	
	public void Clear ()
	{
		transform.position = new Vector2(0, -3.5f);
		currentHealth = health;
		healthSlier.value = 1;
		SetWeapon(null);
		SetArmor(null);
		currentAttack = attack;
		currentDefence = defence;
		currentSpeed = speed;
		currentHealth = health;
	}	
	
	public void GoToDoor ()
	{
		goToDoor = true;
	}

	void Update ()
	{
		if (!GameManager.instance.isPlaying) return;
		
	 	if (currentArmorDuration <= 0) {
			SetArmor(null);
		}
		if (currentWeaponDuration <= 0) {
			SetWeapon(null);
		}
		
		if (goToDoor) {
			MoveTo (GameManager.door.transform);
		}
		else if (target != null) {
			if (closeToTarget) {
				remainingTimeToHit -= Time.deltaTime;
				if (remainingTimeToHit <= 0) {
					if (weaponDuration > 0) {
						anim.SetTrigger("weapon_hit");
					} else {
						if (target.low) {
							anim.SetTrigger("low_hit");
						} else {
							anim.SetTrigger("high_hit");
						}
					}
					remainingTimeToHit = timeBetweenHits;
					target.GetHit (currentAttack);
					
					if (!target.isAlive) {
						GameManager.enemies.KillEnemy (target.gameObject);
						target = null;
						closeToTarget = false;
					}
					
					if (weaponDuration > 0) {
						currentWeaponDuration --;
						weaponSlider.value = (float)currentWeaponDuration / (float)weaponDuration;
					}
				}
			} else {
				MoveTo(target.gameObject.transform);
			}
		} else {
			SetAction(ACTIONS.Idle);
			target = GameManager.enemies.FindClosestEnemy ();
		}
	}
	
	void MoveTo(Transform trans)
	{
		Vector2 pos = transform.position;
		Vector2 newPos = Vector2.MoveTowards (pos, trans.position, currentSpeed * Time.deltaTime);
		if ((newPos.x < pos.x && facingRight) || (newPos.x > pos.x && !facingRight)) {
			Vector3 theScale = transform.localScale;
			theScale.x *= -1;
			transform.localScale = theScale;
			facingRight = !facingRight;
		}
		transform.position = newPos;
		SetAction(ACTIONS.Walking);
	}
	
	void OnTriggerStay2D (Collider2D coll)
	{
		if (target != null && !closeToTarget && coll.gameObject == target.gameObject) {
			closeToTarget = true;			
			SetAction(ACTIONS.Fighting);
		}
		else if (coll.name == Door.name && goToDoor)
		{
			GameManager.instance.NextLevel();
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
		damage -= currentDefence;
		if (damage > 0) {
			currentHealth -= damage;
		}
		if (armorDuration > 0) {
			currentArmorDuration --;
			float armorValue = (float)currentArmorDuration / (float)armorDuration;
			armorSlider.value = armorValue;
		}
		UpdateHealthBar ();
	}
	
	public void SetArmor (Box bonus)
	{
		if (armorDuration > 0) {
			currentDefence = defence;
		}
		if (bonus != null) {
			Bonus armor = bonus.GetComponent<Bonus> ();
			
			armorDuration = armor.durability;
			currentArmorDuration = armorDuration;
			currentDefence = defence + armor.defence;
			
			SetHelmetForElement (bonus.Element);
			float armorValue = armor.DurabilityInPer();
			armorSlider.value = armorValue;
			armorImage.color = Color.white;
			
			GameObject.Destroy(bonus.gameObject);
		} else {
			currentDefence = defence;
			armorDuration = 0;
			headAnim.SetTrigger("normal");
			armorImage.sprite = null;
			armorImage.color = Color.black;
			armorSlider.value = 0;
		}
	}
	
	void SetHelmetForElement (ItemsManager.Elements element) {
		switch (element) {
			case ItemsManager.Elements.DiamShield : {
				headAnim.SetTrigger("diam");
				armorImage.sprite = helmet_diam;
				break;
			}
			case ItemsManager.Elements.GoldShield : {
				headAnim.SetTrigger("gold");
				armorImage.sprite = helmet_gold;
				break;
			}
			case ItemsManager.Elements.IronShield : {
				headAnim.SetTrigger("iron");
				armorImage.sprite = helmet_iron;
				break;
			}
		}
	}
	
	public void SetWeapon (Box bonus)
	{
		if (weaponDuration > 0) {
			currentAttack = attack;
		}
		if (bonus != null) {
			Bonus weapon = bonus.GetComponent<Bonus> ();
			
			weaponDuration = weapon.durability;
			currentWeaponDuration = weaponDuration;
			currentAttack = attack + weapon.attack;
			
			SetWeaponForElement (bonus.Element);
			weaponImage.sprite = weapon.GetComponentInChildren<SpriteRenderer>().sprite;
			weaponSlider.value = weapon.DurabilityInPer();
			weaponImage.color = Color.white;
			
			GameObject.Destroy(weapon.gameObject);
		} else {
			currentAttack = attack;
			weaponDuration = 0;
			handsAnim.SetTrigger("normal");
			weaponImage.sprite = null;
			weaponImage.color = Color.black;
			weaponSlider.value = 0;
		}
	}
	
	void SetWeaponForElement (ItemsManager.Elements element) {
		switch (element) {
		case ItemsManager.Elements.DiamSword : {
			handsAnim.SetTrigger("diam");
			weaponImage.sprite = weapon_diam;
			break;
		}
		case ItemsManager.Elements.GoldSword : {
			handsAnim.SetTrigger("gold");
			weaponImage.sprite = weapon_gold;
			break;
		}
		case ItemsManager.Elements.IronSword : {
			handsAnim.SetTrigger("iron");
			weaponImage.sprite = weapon_iron;
			break;
		}
		}
	}
}
