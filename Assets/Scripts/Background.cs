using UnityEngine;
using System.Collections;

public class Background : MonoBehaviour {

	public Sprite[] bgs;

	SpriteRenderer render;
	Transform dudeTransform;
	
	// Use this for initialization
	void Start () {
		dudeTransform = GameManager.dude.transform;
		render = GetComponentInChildren<SpriteRenderer>();
		
		Reset();
	}
	
	void Update () {
		Vector2 pos = render.transform.position;
		pos.x = - dudeTransform.position.x * 0.1f;
		pos.y = - dudeTransform.position.y * 0.1f;
		transform.position = pos;
	}
	
	public void Reset() {
		render.sprite = bgs[Random.Range(0, bgs.Length)];
	
		transform.position = new Vector2(0, 0);
		
		float width = render.sprite.bounds.size.x * 0.9f;
		float height = render.sprite.bounds.size.y * 0.9f;
		
		float worldScreenHeight = Camera.main.orthographicSize * 2f;
		float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;
		
		Vector3 scale = transform.localScale;
		scale.x = worldScreenWidth / width;
		scale.y = worldScreenHeight / height;
		transform.localScale = scale;
	}
}
