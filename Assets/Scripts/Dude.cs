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
	public float hitSpeed;
	public DropEnemy target;
	
	public Image armorImage;
	public Slider armorSlider;
	public Image weaponImage;
	public Slider weaponSlider;
	
	float currentHealth;
	DropBonus weapon;
	DropBonus armor;
	float timeToHit;
	bool closeToTarget = false;
	
	public void Init ()
	{
		currentHealth = health;
		healthSlier.value = 1;
	}

	void Update ()
	{
		if (armor) 
	 	if (armor != null && armor.IsBroken()) {
			defence -= armor.defence;
			SetArmor(null);
			Destroy (armor.gameObject);
		}
		if (weapon != null && weapon.IsBroken()) {
			attack -= weapon.attack;
			SetWeapon(null);
			Destroy (weapon.gameObject);
		}
		
		if (target != null) {
			if (closeToTarget) {
				timeToHit -= Time.deltaTime;
				if (timeToHit <= 0) {
					timeToHit = hitSpeed;
					target.GetHit (attack);
					if (target.currentHealth <= 0) {
						GameManager.enemies.KillEnemy (target.gameObject);
						target = null;
						closeToTarget = false;
					}
					
					if (weapon != null) {
						weapon.Use ();
						weaponSlider.value = weapon.DurabilityInPer();
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
		healthSlier.value = currentHealth / health;
	}
	
	public void SetArmor (Box bonus)
	{
		if (armor != null) {
			defence -= armor.defence;
			Destroy (armor.gameObject);
		}
		
		if (bonus != null) {
			armor = bonus.GetComponent<DropBonus> ();
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
		}
	}
	
	public void SetWeapon (Box bonus)
	{
		if (weapon != null) {
			attack -= weapon.attack;
			Destroy (weapon.gameObject);
		}
		
		if (bonus != null) {
			weapon = bonus.GetComponent<DropBonus> ();
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
		}
	}
}
