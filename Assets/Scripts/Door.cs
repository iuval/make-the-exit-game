using UnityEngine;
using System.Collections;

public class Door : MonoBehaviour {
	public static string name = "Door";
	
	Animator anim;
	
	void Awake () {
		anim = GetComponent<Animator> ();
	}
	
	public void Reset () 
	{
		anim.SetTrigger("close");
	}
	
	public void Open () 
	{
		anim.SetTrigger("open");
	}
}
