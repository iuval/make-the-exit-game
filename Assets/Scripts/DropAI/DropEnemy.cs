using UnityEngine;
using System.Collections;

public class DropEnemy : DropAI {
	private GameObject player;
	private Transform playerTransform;
	private float speed = 0.3f;
	
	private bool doAction = false;
	
	public int attack;
	public int defence;
	public int life;
	
	void Start() {
		player = GameObject.Find("Dude");
		playerTransform = player.transform;
	}
	
	public override void ActionOnLanding() {
		doAction = true;
	}
	
	void Update() {
		if (doAction) {
			float step = speed * Time.deltaTime;
			transform.position = Vector3.MoveTowards(transform.position, playerTransform.position, step);
		}
	}
}
