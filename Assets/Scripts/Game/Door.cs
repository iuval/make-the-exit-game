using UnityEngine;
using System.Collections;

public class Door : MonoBehaviour {
	public static string goName = "Door";
	
	GameObject key;
	Animator anim;
	
	void Awake () {
		anim = GetComponent<Animator> ();
	}
	
	public void LoadLevel (int level)
	{
		transform.position = Levels.DoorPosition(level);
	}
	
	public void Reset () 
	{
		anim.SetTrigger("close");
	}
	
	public void Open () 
	{
		Destroy(key);
		anim.SetTrigger("open");
		key = null;
	}
	
	public void AddKey(GameObject key)
	{
		this.key = key;
		key.transform.parent = transform;
		key.transform.localPosition = Vector2.zero;
	}
}
