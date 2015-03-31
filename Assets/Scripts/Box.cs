using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour {

	public ItemsManager.Elements Element;
	public bool isMoving = false;
	public bool isClickable = false;
	public float dropSpeed = 0.2f;
	public bool isAlive = true;
	
	DropAI ai;
	Vector2 goTo;
	
	void Start () {
		ai = GetComponent<DropAI>();
	}

	void Update () {
		if (isMoving) {
			transform.position = Vector2.MoveTowards(transform.position, goTo, dropSpeed * Time.deltaTime);
			if(Vector2.Distance(transform.position, goTo) <= 0.01f) {
				if (ai) ai.ActionOnLanding();
				transform.position = goTo;
				isMoving = false;
			}
		}
	}

	public void MoveToY(float y) {
		MoveTo(transform.position.x, y);
		isMoving = true;
	}	
	
	public void MoveTo(float x, float y) {
		goTo = new Vector2(x, y);
		isMoving = true;
	}
}
