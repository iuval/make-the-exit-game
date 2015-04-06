using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Menu : MonoBehaviour {

//	Image screenshot;
//	Texture2D screenshotTex;
//	int takeScreenshotStep = 0;
	
	void Start () {
//		screenshot = GetComponent<Image>();
//		takeScreenshotStep = 0;
	}
	
	void Update () {
//		if (takeScreenshotStep == 2) {
//			takeScreenshotStep = 3;
//			screenshot.sprite = Sprite.Create(screenshotTex, new Rect(0, 0, Screen.width,Screen.height), Vector2.zero);
//		}
	}
	
	public void EndGameMenu() {
//		takeScreenshotStep = 1;
//		StartCoroutine(TakeSnapshot(Screen.width,Screen.height));
	}
	
//	public IEnumerator TakeSnapshot(int width, int height) {
//		yield return new WaitForEndOfFrame();
//		screenshotTex = new Texture2D (width, height, TextureFormat.RGB24, true);
//		screenshotTex.ReadPixels(new Rect(0, 0, width, height), 0, 0);
//		screenshotTex.Apply();
//		takeScreenshotStep = 2;
//	}

	public void Show() {
		gameObject.SetActive(true);
	}
	
	public void Hide() {
		gameObject.SetActive(false);
	}
}
