using UnityEngine;
using System.Collections;

public class DropEnemy : DropAI {
	private Transform playerTransform;
	
	public float speed;
	public float hitSpeed;
	private float timeToHit;
	
	private bool doAction = false;
	private bool closeToDude = false;
	
	public int attack;
	public int defence;
	public int maxHealth;
	public int currentHealth;
	
	public float healthBarLength;
	
	void Start() {
		playerTransform = GameManager.dude.transform;
		healthBarLength = Screen.width / 6;
		currentHealth = maxHealth;
		timeToHit = hitSpeed;
	}
	
	public override void ActionOnLanding() {
		doAction = true;
	}
	
	void OnTriggerEnter2D(Collider2D coll) {
		if (!closeToDude && coll.name == "Dude") {
			closeToDude = true;
		}
	}
	
	void OnTriggerLeave2D(Collider2D coll) {
		if (closeToDude && coll.name == "Dude") {
			closeToDude = false;
		}
	}
	
	public void GetHit(int damage) {	
		damage -= defence;
		if (damage > 0) {
			currentHealth -= damage;
		}
		AddjustCurrentHealth(0);
	}

	void Update() {
		if (doAction) {
			if (closeToDude) {
				timeToHit -= Time.deltaTime;
				if (timeToHit <= 0) {
					timeToHit = hitSpeed;
					GameManager.dude.GetHit(attack);
				}
			} else {
				float step = speed * Time.deltaTime;;
				Vector2 pos = transform.position;
				pos.x = Vector3.MoveTowards(transform.position, playerTransform.position, step).x;
				transform.position = pos;
			}
		}
	}
	
	public void AddjustCurrentHealth(int adj) {
		currentHealth += adj;
		
		if (currentHealth < 0)
			currentHealth = 0;
		
		if (currentHealth > maxHealth)
			currentHealth = maxHealth;
		
		if(maxHealth < 1)
			maxHealth = 1;
		
		healthBarLength = (Screen.width / 6) * (currentHealth /(float)maxHealth);
	}
}
