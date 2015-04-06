using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameMenuItem : MonoBehaviour {

	public Text itemName;
	public Image item1;
	public Text amout1;
	public Image item2;
	public Text amout2;
	public Image item3;
	public Text amout3;
	public Image result;
	public Text text;
	
	public void Set(string n, Sprite s1, int a1, Sprite r, string t) {
		itemName.text = n;
		result.sprite = r;
		text.text = t;
		
		item1.sprite = s1;
		amout1.text = "x" + a1;
	}
	
	public void Set(string n, Sprite s1, int a1, Sprite s2, int a2, Sprite r, string t) {
		itemName.text = n;
		result.sprite = r;
		text.text = t;
		
		item1.sprite = s1;
		amout1.text = "x" + a1;
		item2.sprite = s2;
		amout2.text = "x" + a2;
	}
	
	public void Set(string n, Sprite s1, int a1, Sprite s2, int a2, Sprite s3, int a3, Sprite r, string t) {
		itemName.text = n;
		result.sprite = r;
		text.text = t;
		
		item1.sprite = s1;
		amout1.text = "x" + a1;
		item2.sprite = s2;
		amout2.text = "x" + a2;
		item3.sprite = s3;
		amout3.text = "x" + a3;
	}
	
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}