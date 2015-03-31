using UnityEngine;
using System.Collections;

public class Background : MonoBehaviour {

	private SpriteRenderer render;
	private Transform dudeTransform;
	private float initX;
	
	// Use this for initialization
	void Start () {
		dudeTransform = GameManager.dude.transform;
		render = GetComponentInChildren<SpriteRenderer>();
		Reset();
	}
	
	// Update is called once per frame
	void Update () {
		Vector2 pos = render.transform.position;
		pos.x = initX - dudeTransform.position.x * 0.1f;
		render.transform.position = pos;
	}
	
	public void Reset() {
		initX = Random.Range(-55, 55);
		render.transform.position = new Vector2(initX, 0);
	}
}
