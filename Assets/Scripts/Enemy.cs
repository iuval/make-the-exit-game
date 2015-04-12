using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {
	Transform playerTransform;
	
	public Enemies type;
	public float dropSpeed = 5f;
	public float speed;
	public float hitSpeed;
	float timeToHit;

	bool closeToDude = false;
	
	public bool isAlive;
	public bool isFalling;
	public int attack;
	public int defence;
	public int maxHealth;
	public bool low;
	
	int currentHealth;
	float healthBarLength;
	
	Vector2 fallTo;
	bool facingRight;
	Animator anim;

	void Awake () {
		anim = GetComponent<Animator> ();
	}
	
	void Start() {
		playerTransform = GameManager.dude.transform;
		healthBarLength = Screen.width / 6;
		currentHealth = maxHealth;
		timeToHit = hitSpeed;
		isAlive = true;
		facingRight = true;
	}
	
	void OnTriggerEnter2D(Collider2D coll) {
		if (!isFalling && !closeToDude && coll.name == "Dude") {
			closeToDude = true;
			anim.SetBool("walking", false);
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
			if (currentHealth <= 0) {
				anim.SetTrigger("die");
				isAlive = false;
			}
		}
	}
	
	public void FallTo(float x, float y) {
		fallTo = new Vector2(x, y);
		isFalling = true;
		anim.SetBool("falling", true);
	}
	
	void Update() {
		if (!GameManager.instance.isPlaying || !isAlive) return;
		
		if (closeToDude) {
			timeToHit -= Time.deltaTime;
			if (timeToHit <= 0) {
				timeToHit = hitSpeed;
				GameManager.dude.GetHit(attack);
				anim.SetTrigger("attack");
			}
		} else if (isFalling) {
			transform.position = Vector2.MoveTowards(transform.position, fallTo, dropSpeed * Time.deltaTime);
			if(Vector2.Distance(transform.position, fallTo) <= 0.01f) {
				transform.position = fallTo;
				isFalling = false;
				anim.SetBool("falling", false);
			}
		} else {
			anim.SetBool("walking", true);
			float step = speed * Time.deltaTime;;
			Vector2 pos = transform.position;
			float newX = Vector3.MoveTowards(transform.position, playerTransform.position, step).x;
			if ((newX < pos.x && facingRight) || (newX > pos.x && !facingRight)) {
				Vector3 theScale = transform.localScale;
				theScale.x *= -1;
				transform.localScale = theScale;
				facingRight = !facingRight;
			}
			pos.x = newX;
			transform.position = pos;
		}
	}
}
