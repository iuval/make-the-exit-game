using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ItemsMenu : MonoBehaviour {

	public float widthPerItem = 350f;
	public GameObject oneItemsPrefav;
	public GameObject twoItemsPrefav;
	public GameObject threeItemsPrefav;
	
	int total;
	
	RectTransform scroll;
	
	// Use this for initialization
	void Awake () {
		scroll = GetComponent<ScrollRect>().transform as RectTransform;
	}

	void Strart () {
		total = 0;
		
//		CreateOne().Set()
		
		Vector2 size = scroll.sizeDelta;
		size.x = widthPerItem * total;
		scroll.sizeDelta = size;
	}
	
	GameMenuItem CreateOne() {
		total ++;
		GameObject go = GameObject.Instantiate(oneItemsPrefav) as GameObject;
		return go.GetComponent<GameMenuItem>();
	}
	
	GameMenuItem CreateTwo() {
		total ++;
		GameObject go = GameObject.Instantiate(twoItemsPrefav) as GameObject;
		return go.GetComponent<GameMenuItem>();
	}

	GameMenuItem CreateThree() {
		total ++;
		GameObject go = GameObject.Instantiate(threeItemsPrefav) as GameObject;
		return go.GetComponent<GameMenuItem>();
	}
}
