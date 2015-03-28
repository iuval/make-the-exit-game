using UnityEngine;
using System.Collections;

public class Dude : MonoBehaviour {

	public Vector2 helmetPosition;
	public Vector2 weaponPosition;
	
	private DropBonus weapon;
	private DropBonus helmet;
	
	public int defence;
	public int attack;
	public int life;
	
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		
		if (helmet != null && helmet.durability <= 0) {
			defence -= helmet.defence;
			ItemsManager.instance.killBonus(helmet.GetComponent<Box>());
		}
		if (weapon != null && weapon.durability <= 0) {
			attack -= weapon.attack;
			ItemsManager.instance.killBonus(weapon.GetComponent<Box>());
		}
	}
	
	public void setHelmet(Box bonus) {
		if (helmet != null) {
			defence -= helmet.defence;
			Destroy(helmet.gameObject);
		}
		helmet = bonus.GetComponent<DropBonus>();
		helmet.gameObject.transform.parent = transform;
		helmet.gameObject.transform.rotation = Quaternion.identity;
		Vector3 pos = transform.position + (Vector3)helmetPosition;
		pos.z = -3;
		helmet.gameObject.transform.position = pos;
		defence += helmet.defence;
	}
	
	public void setWeapon(Box bonus) {
		if (weapon != null) {
			attack -= weapon.attack;
			Destroy(weapon.gameObject);
		}
		weapon = bonus.GetComponent<DropBonus>();
		weapon.gameObject.transform.parent = transform;
		weapon.gameObject.transform.rotation = Quaternion.identity;
		Vector3 pos = transform.position + (Vector3)weaponPosition;
		pos.z = -3;
		weapon.gameObject.transform.position = pos;
		attack += weapon.attack;
	}
}
