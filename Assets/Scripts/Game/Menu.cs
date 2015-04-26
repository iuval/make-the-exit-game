using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Menu : MonoBehaviour {
	public void Show () {
		gameObject.SetActive(true);
	}
	
	public void Hide () {
		gameObject.SetActive(false);
	}
}
