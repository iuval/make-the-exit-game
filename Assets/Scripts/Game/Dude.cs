using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public enum LookingTo { Right, Left, Up, Down }

public class Dude : MonoBehaviour
{
	public Slider healthSlier;

	float currentDefence;
	public float currentAttack { private set; get; }
	float currentHealth;
	float currentSpeed;
	
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
	Weapon weapon;
	public Animator anim;
	LookingTo looking;
	
	public float pushTotalTime = 0.2f;
	float pushTime;
	public float pushDistance = 0.1f;
	Vector2 pushDirection;

	
	public float flashSpeed = 5f;
	public Color flashColour = new Color(1f, 0f, 0f, 0.1f);
	public SpriteRenderer rend;
	bool damaged;

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
		GameObject handsGO = GameObject.Find("hands") as GameObject;
		weapon = GetComponentInChildren<Weapon> ();
//		handsAnim = handsGO.GetComponent<Animator> ();
//		headAnim = GameObject.Find("head").GetComponent<Animator> ();
	}
	
	public void LoadLevel (int level)
	{
		transform.position = new Vector2(0, -3.5f);
		currentHealth = WorldManager.instance.health;
		healthSlier.value = 1;
		SetWeapon(null);
		SetArmor(null);
		currentAttack = WorldManager.instance.attack;
		currentDefence = WorldManager.instance.defence;
		currentSpeed = WorldManager.instance.walkSpeed;
		currentHealth = WorldManager.instance.health;
		goToDoor = false;	
		SetAction(ACTIONS.IdleDown);
		looking = LookingTo.Down;
		weapon.LookAt(looking);
	}
	
	public bool IsAlive ()
	{
		return currentHealth >= 0;
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
		
		if (damaged) {
			rend.color = flashColour;
			damaged = false;
			pushTime = pushTotalTime;
		} else {
			rend.color = Color.Lerp (rend.color, Color.white, flashSpeed * Time.deltaTime);
		}
		
		if (goToDoor)
		{
			MoveTo (GameManager.door.transform);
		}
		else if (pushTime > 0) {
			pushTime -= Time.deltaTime;
			Vector2 pos = transform.position;
			pos += pushDirection * Time.deltaTime;
			transform.position = pos;
		} else if (target != null) {
			if (closeToTarget) {
				remainingTimeToHit -= Time.deltaTime;
				LookAt(target.transform.position);
				if (remainingTimeToHit <= 0) {
					weapon.Hit();
					remainingTimeToHit = WorldManager.instance.timeBetweenHits;

					if (target == null || !target.isAlive) {
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
			SetAction(ACTIONS.IdleDown);
			target = GameManager.enemies.FindClosestEnemy ();
		}
	}
	
	void MoveTo(Transform trans)
	{
		Vector2 pos = transform.position;
		Vector2 newPos = Vector2.MoveTowards (pos, trans.position, currentSpeed * Time.deltaTime);
		newPos = new Vector2(Mathf.Clamp(newPos.x, -3.5f, 3.5f), Mathf.Clamp(newPos.y, GameManager.lowLimit, GameManager.topLimit));
		LookAt(newPos);
		transform.position = newPos;
	}
	
	void LookAt(Vector2 newPos)
	{
		Vector2 pos = transform.position;
		
		if (Mathf.Abs(newPos.x - pos.x) > Mathf.Abs(newPos.y - pos.y)) {
			Vector3 theScale = transform.localScale;
			if (looking != LookingTo.Left && newPos.x < pos.x) {
				theScale.x = -1;
				transform.localScale = theScale;
				looking = LookingTo.Left;
			} else if (looking != LookingTo.Right && newPos.x > pos.x) {
				theScale.x = 1;
				transform.localScale = theScale;
				looking = LookingTo.Right;
			}
			if (closeToTarget) {
				SetAction(ACTIONS.IdleSide);
			} else {
				SetAction(ACTIONS.WalkingSide);
			}
		} else {
			if (newPos.y < pos.y && looking != LookingTo.Down) {
				if (closeToTarget) {
					SetAction(ACTIONS.IdleDown);
				} else {
					SetAction(ACTIONS.WalkingDown);
				}
				looking = LookingTo.Down;
			} else if (newPos.y > pos.y && looking != LookingTo.Up) {
				if (closeToTarget) {
					SetAction(ACTIONS.IdleUp);
				} else {
					SetAction(ACTIONS.WalkingUp);
				}
				looking = LookingTo.Up;
			}
		}
		weapon.LookAt(looking);
	}
	
	void OnTriggerStay2D (Collider2D coll)
	{
		if (target != null && !closeToTarget && coll.gameObject == target.gameObject) {
			closeToTarget = true;
			if (looking == LookingTo.Right || looking == LookingTo.Left )			
				SetAction(ACTIONS.IdleSide);
			if (looking == LookingTo.Up)			
				SetAction(ACTIONS.IdleUp);
			if (looking == LookingTo.Down)			
				SetAction(ACTIONS.IdleDown);
		}
		else if (coll.name == Door.goName && goToDoor && GameManager.instance.isPlaying)
		{
			GameManager.instance.NextLevel();
		}
	}
	
	void OnTriggerExit2D (Collider2D coll)
	{
		if (target != null && closeToTarget && coll.gameObject == target.gameObject) {
			closeToTarget = false;
		}
	}
	
	void UpdateHealthBar () {
		healthSlier.value = currentHealth / WorldManager.instance.health;
	}
	
	public void AddLife (float percentage)
	{
		currentHealth +=  (percentage * WorldManager.instance.health) / 100;
		UpdateHealthBar ();
	}
	
	public void GetHit (float damage)
	{
		damaged = true;
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
			currentDefence = WorldManager.instance.defence;
		}
		if (bonus != null) {
			Bonus armor = bonus.GetComponent<Bonus> ();
			
			armorDuration = armor.durability;
			currentArmorDuration = armorDuration;
			currentDefence = WorldManager.instance.defence + armor.defence;
			
			SetHelmetForElement (bonus.Element);
			float armorValue = armor.DurabilityInPer();
			armorSlider.value = armorValue;
			armorImage.color = Color.white;
			
			GameObject.Destroy(bonus.gameObject);
		} else {
			currentDefence = WorldManager.instance.defence;
			armorDuration = 0;
			armorImage.sprite = null;
			armorImage.color = Color.clear;
			armorSlider.value = 0;
		}
	}
	
	void SetHelmetForElement (Elements element) {
		switch (element) {
			case Elements.DiamShield : {
				armorImage.sprite = helmet_diam;
				break;
			}
			case Elements.GoldShield : {
				armorImage.sprite = helmet_gold;
				break;
			}
			case Elements.IronShield : {
				armorImage.sprite = helmet_iron;
				break;
			}
		}
	}
	
	public void SetWeapon (Box box)
	{
		if (weaponDuration > 0) {
			currentAttack = WorldManager.instance.attack;
		}
		if (box != null) {
			Bonus bonus = box.GetComponent<Bonus> ();
			
			weapon.Change (box.Element);
			
			weaponDuration = bonus.durability;
			currentWeaponDuration = weaponDuration;
			currentAttack = WorldManager.instance.attack + bonus.attack;
			
			SetWeaponForElement (box.Element);
			weaponImage.sprite = box.GetComponentInChildren<SpriteRenderer>().sprite;
			weaponSlider.value = bonus.DurabilityInPer();
			weaponImage.color = Color.white;
		} else {
			weapon.Change (Elements.Wood);
			
			currentAttack = WorldManager.instance.attack;
			weaponDuration = 0;
			weaponImage.sprite = null;
			weaponImage.color = Color.clear;
			weaponSlider.value = 0;
		}
	}
	
	void SetWeaponForElement (Elements element) {
		switch (element) {
		case Elements.DiamSword : {
			weaponImage.sprite = weapon_diam;
			break;
		}
		case Elements.GoldSword : {
			weaponImage.sprite = weapon_gold;
			break;
		}
		case Elements.IronSword : {
			weaponImage.sprite = weapon_iron;
			break;
		}
		}
	}
}
