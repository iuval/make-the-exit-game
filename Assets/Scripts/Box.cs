using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour {

	public ItemsManager.Elements Element;
	public bool isMoving = false;
	private float goToY = 0;
	private float goToX = 0;
	public bool isClickable = false;
	public bool isAlive = true;
	private DropAI ai;
	
	void Start () {
		ai = GetComponent<DropAI>();
	}

	void Update () {
		if (isMoving) {
			Vector2 mov = transform.position;
			if (mov.y != goToY)	{
				if (mov.y - goToY > 0.1f) {
					mov.y -= 0.1f;		
				} else {
					mov.y = goToY;
					isMoving = false;
				}
			}
			transform.position = mov;
		}
	}
	
	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.collider.name == "Floor" && ai != null) {
			ai.ActionOnLanding();
			isMoving = false;
		}
	}
	
	public void MoveToY(float y) {
		MoveTo(transform.position.x, y);
		isMoving = true;
	}	
	
	public void MoveTo(float x, float y) {
		goToY = y;
		goToX = x;
		isMoving = true;
	}
}
