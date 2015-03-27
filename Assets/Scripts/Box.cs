using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour {

	public ItemsManager.Elements Element;
	private bool isMoving = false;
	private float goToY = 0;
	private float goToX = 0;
	public bool isClickable = false;
	public bool isAlive = true;
	
	void Start () {
	
	}

	void Update () {
		if (isMoving) {
			Vector2 mov = transform.position;
			if (mov.y != goToY)	{
				if (mov.y - goToY > 0.1f) {
					mov.y -= 0.1f;		
				} else {
					mov.y = goToY;
				}
			}
			if (mov.x != goToX) {
				if (mov.x - goToX > 0.1f) {
					mov.x -= 0.1f;		
				} else {
					mov.x = goToX;
				}
			}
			if (mov.x == goToX && mov.y == goToY) isMoving = false;
			transform.position = mov;
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
