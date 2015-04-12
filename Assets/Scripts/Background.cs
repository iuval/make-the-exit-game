using UnityEngine;
using System.Collections;

public class Background : MonoBehaviour {

	public Transform backTransform;
	public SpriteRenderer back;
	public SpriteRenderer front;
	
	Transform dudeTransform;
	
	// Use this for initialization
	void Start () {
		dudeTransform = GameManager.dude.transform;
		
		backTransform.position = Vector2.zero;
		back.transform.position = Vector2.zero;
		front.transform.position = Vector2.zero;
		
		Reset();
	}
	
	void Update () {
		Vector2 pos = backTransform.position;
		pos.x = - dudeTransform.position.x * 0.1f;
		pos.y = - dudeTransform.position.y * 0.1f;
		backTransform.position = pos;
		
//		pos = front.transform.position;
//		pos.x = - dudeTransform.position.x * 0.05f;
//		pos.y = - dudeTransform.position.y * 0.05f;
//		front.transform.position = pos;
	}
	
	public void Reset() {
		FitTransform(back.transform);
//		FitTransform(front.transform);
	}
	
	void FitTransform(Transform trans)
	{
		trans.position = new Vector2(0, 0);
		
		float width = back.sprite.bounds.size.x * 0.9f;
		float height = back.sprite.bounds.size.y * 0.9f;
		
		float worldScreenHeight = Camera.main.orthographicSize * 2f;
		float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;
		
		Vector3 scale = trans.localScale;
		scale.x = worldScreenWidth / width;
		scale.y = worldScreenHeight / height;
		trans.localScale = scale;
	}
}
