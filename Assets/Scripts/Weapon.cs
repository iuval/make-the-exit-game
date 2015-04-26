using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	Animator anim;
	SpriteRenderer rend;
	
	public Color woodColor;
	public Color ironColor;
	public Color goldColor;
	public Color diamColor;
	
	void Awake ()
	{
		anim = GetComponent<Animator> ();
		rend = GetComponent<SpriteRenderer> ();
	}
	
	void Start () {
	
	}

	void Update () {
	
	}
	
	public void LookAt (LookingTo looking)
	{
		Quaternion rot = transform.rotation;
		if (looking == LookingTo.Up)
		{
			rot.z = 90f;
			rend.sortingOrder = 1;
//			transform.localPosition = new Vector2(0, 0.24f);
		} 
		else if (looking == LookingTo.Down)
		{
			rot.z = 270f;
			rend.sortingOrder = 3;
//			transform.localPosition = new Vector2(0, -0.24f);
		}
		else if (looking == LookingTo.Left || looking == LookingTo.Right)
		{
			rot.z = 0f;
			rend.sortingOrder = 3;
//			transform.localPosition = new Vector2(0.26f, 0f);
		}
		Debug.Log(looking + " > " + rot.z);
		transform.localRotation = rot;
	}
	
	public void Hit ()
	{
		anim.SetTrigger ("hit");
	}
	
	public void Change (Elements elem)
	{
		switch (elem) 
		{
		case Elements.DiamSword : {
			rend.color = diamColor;
			break;
		}
		case Elements.GoldSword : {
			rend.color = goldColor;
			break;
		}
		case Elements.IronSword : {
			rend.color = ironColor;
			break;
		}
		case Elements.Wood : {
			rend.color = woodColor;
			break;
		}
		}
		
	}
}
