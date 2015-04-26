using UnityEngine;
using System.Collections.Generic;

public class Background : MonoBehaviour {

	public Sprite[] bgs;
	public Transform backTransform;
	public SpriteRenderer back;
	public SpriteRenderer front;
	public GameObject[] tiles;
	
	List<GameObject> blocks = new List<GameObject> ();
	
	Transform dudeTransform;
	
	// Use this for initialization
	void Start () {
		dudeTransform = GameManager.dude.transform;
	}
	
	public void LoadLevel(int level)
	{
		backTransform.position = Vector2.zero;
		back.transform.position = Vector2.zero;
		front.transform.position = Vector2.zero;

		//back.sprite = bgs[Levels.BackgroundIndex(level)];
		
		
		float initW = -3.4f;
		float initH = -3.4f;
		float tileW = 0.64f;
		float tileH = 0.64f;
		
		int floor = 3;
		int wall = 4;
		int wallEnd = 5;
		
		int[,] tilesIndex = Levels.Tiles (level);
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (tilesIndex[i, j] != -1) 
				{
					GameObject tile = GameObject.Instantiate(tiles[tilesIndex[i, j]]) as GameObject;
					tile.transform.parent = back.transform;
					tile.transform.localPosition = new Vector2 (initW + i * tileW, initH + j * tileH);
					blocks.Add (tile);
				}
			}
		}
		
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
		
		float width = 6.4f * 0.9f;
		float height = 6.4f * 0.9f;
		
		float worldScreenHeight = Camera.main.orthographicSize * 2f;
		float worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;
		
		Vector3 scale = trans.localScale;
		scale.x = worldScreenWidth / width;
		scale.y = worldScreenHeight / height;
		trans.localScale = scale;
	}
}
