using UnityEngine;
using System.Collections.Generic;

public class ItemsManager : MonoBehaviour
{
	public enum Elements
	{
		Iron,
		Gold,
		Diam,
		Wood,
		Enemy,
		Key,
		IronSword,
		GoldSword,
		DiamSword,
		IronShield,
		GoldShield,
		DiamShield,
		Treasure,
		Food,
		Heart,
		DoorKey
	};

	public GameObject food;
	public GameObject[] commons;
	public GameObject[] specials;
	public GameObject[] rares;
	public GameObject[] legendaries;
	public GameObject[,] all;
	public float itemSide;
	public static int itemsCountH = 5;
	public static int itemsCountV = 5;
	public float initY;
	public float initX;
	public float legendaryWhen;
	public float rareWhen;
	public float specialWhen;
	public float foodWhen;
	public Dude dude;
	
	// Input
	public static RuntimePlatform platform = Application.platform;
	bool isDown = false;
	bool isDragging = false;
	float elapsedTime = 0;
	Vector2 pressPos;
	Vector2 onDragPos;
	Vector2 onReleasePos;
	int tapCount = 0;
	
	// Movement
	public static Vector2 invalidPosition = new Vector2 (-1, -1);
	public static Vector2 endPosition = new Vector2 (-2, -2);
	private List<Vector2> selectedPositions = new List<Vector2> ();
	private Vector2 onPressPos;
	public static int[][] neighbours = {  				      new int[] {  0, -1 },
										new int[] { -1,  0 },                       new int[] {  1,  0 },
															  new int[] {  0,  1 }                       };
														  
	// Figures
	Figures figures;
	int foodCount;
	int commonsCount;
	int specialsCount;
	int raresCount;
	int legendariesCount;
	
	// Consumables
	List<Box> bonuses = new List<Box> ();
	List<Box> bonusesToKill = new List<Box> ();
	
	int level;
	
	void Awake ()
	{
		figures = GetComponent<Figures> ();
	}
	
	public void LoadLevel(int level) {
		this.level = level;
		InitWall ();
	}
	
	public void Clear() {
		if (all != null) {
			for (int i = 0; i < itemsCountH; i++) {
				for (int j = 0; j < itemsCountV; j++) {
					Destroy(all [i, j]);
					all [i, j] = null;
				}
			}	
		}
	}	
	
	// Update is called once per frame
	void Update ()
	{
		if (!GameManager.instance.isPlaying) return;
		
		CheckInput ();
		if (bonusesToKill.Count > 0) {
			foreach (Box box in bonusesToKill) {
				if (!box.isAlive) {
					GameObject.Destroy (box);
				}
				bonuses.Remove (box);
			}
			bonusesToKill.Clear ();
		}
	}
	
	private void InitWall ()
	{
		all = new GameObject[itemsCountH, itemsCountV];
		for (int i = 0; i < itemsCountH; i++) {
			for (int j = 0; j < itemsCountV; j++) {
				all [i, j] = CreateRandomBox ();
				all [i, j].transform.parent = transform;
				all [i, j].transform.position = new Vector2 (initX + itemSide * i, initY + itemSide * j);
			}
		}	
	}
	
	public void CreateBoxAtX (int x)
	{
		int freeYCoun = 0;
		for (int y = 0; y <= itemsCountV - 1; y ++) {
			if (all [x, y] == null) {
				freeYCoun ++;
				for (int ty = y + 1; ty <= itemsCountV - 1; ty ++) {
					if (all [x, ty] != null) {
						all [x, y] = all [x, ty];
						all [x, ty] = null;
						all [x, y].GetComponent<Box> ().MoveToY (initY + itemSide * y);
//						Debug.Log("Move: " + x + "," + ty + " to " + x + "," + y );
						freeYCoun --;
						break;
					}
				}
			}
		}
//		Debug.Log("Need " + freeYCoun + " new");
		int newY;
		for (int j = freeYCoun; j > 0; j --) {
			newY = itemsCountV - j;
			if (InBoard (x, newY)) {
				all [x, newY] = CreateRandomBox ();
				all [x, newY].transform.parent = transform;
				all [x, newY].transform.position = new Vector2 (initX + itemSide * x, 5 + initY + itemSide * newY);
				all [x, newY].GetComponent<Box> ().MoveToY (initY + itemSide * newY);
//				Debug.Log("New at: " + x + "," + newY);
			} 	 	
		}
	}
	
	public GameObject CreateBoxWithPrefav (GameObject prefav, Vector2 gridPos, Vector2 pos)
	{
		GameObject newBox = (GameObject)GameObject.Instantiate (prefav);
		all [(int)gridPos.x, (int)gridPos.y] = newBox;
		newBox.transform.position = pos;
		return newBox;
	}
	
	public GameObject CreateDropBonus (GameObject prefav, Vector2 pos)
	{
		GameObject bonus = CreateDrop (prefav, pos);
		bonuses.Insert (0, bonus.GetComponent<Box> ());
		return bonus;
	}
	
	public GameObject CreateDrop (GameObject prefav, Vector2 pos)
	{
		GameObject newBox = (GameObject)GameObject.Instantiate (prefav);
		newBox.transform.position = pos;
		Box box = newBox.GetComponent<Box> ();
		box.MoveTo (pos.x + Random.Range (-0.2f, 0.2f), -Random.Range (3.8f, 4.0f));
		return newBox;
	}
	
	private GameObject CreateRandomBox ()
	{
		GameObject result;
		
		float ran = Random.value;
		
		if (ran >= legendaryWhen) {
			result = (GameObject)(GameObject.Instantiate (legendaries [Random.Range (0, legendaries.Length)]));
		} else if (ran > rareWhen) {
			result = (GameObject)(GameObject.Instantiate (rares [Random.Range (0, rares.Length)]));
		} else if (ran > specialWhen) {
			result = (GameObject)(GameObject.Instantiate (specials [Random.Range (0, specials.Length)]));
		} else if (ran > foodWhen) {
			result = GameObject.Instantiate (food) as GameObject;
		} else {
			result = (GameObject)(GameObject.Instantiate (commons [Random.Range (0, commons.Length)]));
		}
		return result;
	}
	
	public void killBonus (Box box)
	{
		bonusesToKill.Add (box);
	}
	
	private void OnPress (Vector2 position)
	{
		onPressPos = BoxCoordsAtPosition (position);
	}
	
	private void OnDrag (Vector2 position)
	{
		onDragPos = BoxCoordsAtPosition (position);
		if (!isDragging && (elapsedTime > .2f || onPressPos != onDragPos)) {
			isDragging = true;
			tapCount = 0;
			SelectBox(onPressPos);
		}
		if (isDragging)
			SelectBox(onDragPos);
	}
	
	private void SelectBox(Vector2 pos) {
		if (pos != invalidPosition && !selectedPositions.Contains (pos)) {
			selectedPositions.Add (pos);
			//			Debug.Log("hover: " + (int)selectdBoxPos.x + "," + (int)selectdBoxPos.y);
			all [(int)pos.x, (int)pos.y].GetComponentInChildren<SpriteRenderer> ().color = Color.red;
		}
	}
	
	private void OnEndDrag (Vector2 position)
	{
		selectedPositions.Reverse();
		figures.Check (selectedPositions);
		selectedPositions.Clear ();
		isDragging = false;
	}
	
	private void OnRelease (Vector2 position)
	{
		onReleasePos = BoxCoordsAtPosition (position);
		tapCount ++;
	
		if (tapCount == 2) {
			tapCount = 0;
			Box box = all [(int)onReleasePos.x, (int)onReleasePos.y].GetComponent<Box>();
			if (box.isClickable) {
				box.isMoving = false;
				if (box.Element == Elements.IronSword || box.Element == Elements.GoldSword || box.Element == Elements.DiamSword) {
					dude.SetWeapon (box);
				} else if (box.Element == Elements.IronShield || box.Element == Elements.GoldShield || box.Element == Elements.DiamShield) {
					dude.SetArmor (box);
				} else if (box.Element == Elements.Food) {
					dude.AddLife(box.GetComponent<Bonus>().life);
					Destroy(all [(int)onReleasePos.x, (int)onReleasePos.y]);
				} else if (box.Element == Elements.Treasure) {
					GameManager.instance.AddGold(box.GetComponent<Bonus>().gold);
					Destroy(all [(int)onReleasePos.x, (int)onReleasePos.y]);
				} else if (box.Element == Elements.DoorKey) {
					GameManager.instance.hasTheKey = true;
				}		
				all [(int)onReleasePos.x, (int)onReleasePos.y] = null;
				GameManager.items.CreateBoxAtX((int)onReleasePos.x);
			}
		}
	}
		
	public static bool InBoard (int x, int y)
	{
		return x >= 0 && y >= 0 && x < itemsCountH && y < itemsCountV;
	}
	
	private Vector2 BoxCoordsAtPosition (Vector2 position)
	{
		for (int i = 0; i < itemsCountH; i++)
		{
			for (int j = 0; j < itemsCountV; j++)
			{
				GameObject box = all [i, j];
				if (box != null && box.GetComponent<Collider2D> ().OverlapPoint (position))
				{
					return new Vector2 (i, j);
				}
			}
		}
		return invalidPosition;
	}
	
	private void CheckInput ()
	{
		if (isDown) {
			elapsedTime += Time.deltaTime;
		}
		if (platform == RuntimePlatform.Android || platform == RuntimePlatform.IPhonePlayer) {
			if (Input.touchCount > 0) {
				if (!isDown && Input.GetTouch (0).phase == TouchPhase.Began) {
					isDown = true;
					elapsedTime = 0;
					pressPos = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
					OnPress (pressPos);
				} else if (isDown && Input.GetTouch (0).phase == TouchPhase.Ended) {
					isDown = false;
					if (isDragging) {
						OnEndDrag (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position));
					} else {
						OnRelease (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position));
					}
				} else if (isDown) {
					OnDrag (Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position));
				}
			}
		} else {
			if (!isDown && Input.GetMouseButtonDown (0)) {
				isDown = true;
				elapsedTime = 0;
				pressPos = Camera.main.ScreenToWorldPoint (Input.mousePosition);				
				OnPress (pressPos);
			} else if (isDown && Input.GetMouseButtonUp (0)) {
				isDown = false;
				if (isDragging) {
					OnEndDrag (Camera.main.ScreenToWorldPoint (Input.mousePosition));
				} else {
					OnRelease (Camera.main.ScreenToWorldPoint (Input.mousePosition));
				}
			} else if (isDown) {
				OnDrag (Camera.main.ScreenToWorldPoint (Input.mousePosition));
			}
		}
	}
}
