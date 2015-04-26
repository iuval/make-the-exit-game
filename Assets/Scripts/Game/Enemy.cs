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
	public float attack;
	public float defence;
	public float maxHealth;
	
	float currentHealth;
	float healthBarLength;
	
	Vector2 fallTo;
	bool facingRight;
	public GameObject body;
	Weapon weapon;
	
	public float pushTotalTime = 0.2f;
	float pushTime;
	public float pushDistance = 0.1f;
	Vector2 pushDirection;
	
	public float flashSpeed = 5f;
	public Color flashColour = new Color(1f, 0f, 0f, 0.1f);
	Animator anim;
	SpriteRenderer rend;
	bool damaged;
	
	void Awake () {
		weapon = GetComponentInChildren<Weapon> ();
		anim = body.GetComponent<Animator> ();
		rend = body.GetComponent<SpriteRenderer> ();
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
		if (coll.tag == "DudeWeapon") {
			GetHit(GameManager.dude.currentAttack);
			pushDirection = (transform.position - coll.gameObject.transform.position).normalized * pushDistance;	
		} else if (!isFalling && !closeToDude && coll.name == "Dude") {
			closeToDude = true;
		}
	}
	
	void OnTriggerExit2D(Collider2D coll) {
		if (closeToDude && coll.name == "Dude") {
			closeToDude = false;
		}
	}
	
	public void GetHit(float damage) {	
		damage -= defence;
		if (damage > 0) {
			currentHealth -= damage;
			if (currentHealth <= 0) {
				GameManager.enemies.KillEnemy (gameObject);
				anim.SetTrigger("die");
				isAlive = false;
				anim.gameObject.GetComponent<SpriteRenderer> ().sortingOrder = 0;
			}
			damaged = true;
		}
	}
	
	public void FallTo(float x, float y) {
		fallTo = new Vector2(x, y);
		isFalling = true;
	}
	
	void Update() {
		if (!GameManager.instance.isPlaying || !isAlive) return;
		
		if (damaged) {
			rend.color = flashColour;
			damaged = false;
			pushTime = pushTotalTime;
		} else {
			rend.color = Color.Lerp (rend.color, Color.white, flashSpeed * Time.deltaTime);
		}
		
		if (pushTime > 0) {
			pushTime -= Time.deltaTime;
			Vector2 pos = transform.position;
			pos += pushDirection * Time.deltaTime;
			transform.position = pos;
		} else if (closeToDude) {
			timeToHit -= Time.deltaTime;
			if (timeToHit <= 0) {
				timeToHit = hitSpeed;
				GameManager.dude.GetHit(attack);
				weapon.Hit ();
			}
		} else if (isFalling) {
			transform.position = Vector2.MoveTowards(transform.position, fallTo, dropSpeed * Time.deltaTime);
			if(Vector2.Distance(transform.position, fallTo) <= 0.01f) {
				transform.position = fallTo;
				isFalling = false;
				anim.SetTrigger("walk");
			}
		} else {
			float step = speed * Time.deltaTime;;
			Vector2 pos = transform.position;
			Vector2 newPos = Vector3.MoveTowards(transform.position, playerTransform.position, step);
			newPos = new Vector2(Mathf.Clamp(newPos.x, -3.5f, 3.5f), Mathf.Clamp(newPos.y, GameManager.lowLimit, GameManager.topLimit));
			if ((newPos.x < pos.x && facingRight) || (newPos.x > pos.x && !facingRight)) {
				Vector3 theScale = transform.localScale;
				theScale.x *= -1;
				transform.localScale = theScale;
				facingRight = !facingRight;
			}
			transform.position = newPos;
		}
	}
}
