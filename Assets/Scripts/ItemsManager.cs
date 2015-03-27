using UnityEngine;
using System.Collections;

public class ItemsManager : MonoBehaviour {
	public enum Elements { None, Iron, Gold, Diamond, Wood, Enemy, Lock };
	
	public static ItemsManager instance;
	
	public GameObject[] empties;
	public GameObject[] commons;
	public GameObject[] specials;
	public GameObject[] rares;
	
	public GameObject[,] all;
	public float itemSide;
	public static int itemsCountH = 5;
	public static int itemsCountV = 5;
	public float initY;
	public float initX;
	
	private float rareWhen = .97f;
	private float specialWhen = .85f;
	private float commonWhen = .5f;
	
	// Input
	public static RuntimePlatform platform = Application.platform;
	private bool down = false;
	private float time = 0;
	private Vector2 pressPos;
	
	// Movement
	public static Vector2 invalidPosition = new Vector2(-1, -1);
	public static Vector2 endPosition = new Vector2(-2, -2);
	private ArrayList selectedPositions = new ArrayList();
	private Vector2 selectdBoxPos;
	private Vector2 endBoxPos;
	public static int[][] neighbours = {  				      new int[] {  0, -1 },
										new int[] { -1,  0 },                       new int[] {  1,  0 },
															  new int[] {  0,  1 }                       };
														  
	// Figures
	private Figures figures;
	private ArrayList enemies = new ArrayList();
	public GameObject enemyPrefav;
	
	// Consumables
	private ArrayList bonuses = new ArrayList();
	private ArrayList consumablesToKill = new ArrayList();
	
	void Start () {
		InitWall();
		figures = GetComponent<Figures>();
		figures.Init(all);
		instance = this;
	}
	
	// Update is called once per frame
	void Update () {
		CheckInput();
	}
	
	private void InitWall() {
		all = new GameObject[itemsCountH, itemsCountV];
		for (int i = 0; i < itemsCountH; i++) {
			for (int j = 0; j < itemsCountV; j++) {
				all[i, j] = CreateBox();
				all[i, j].transform.parent = transform;
				all[i, j].transform.position = new Vector2(initX + itemSide * i, initY + itemSide * j);
			}
		}	
	}
		
	public void CreateBoxAtX(int x) {
		int freeYCoun = 0;
		for (int y = 0; y <= itemsCountV - 1; y ++) {
			if (all[x, y] == null) {
				freeYCoun ++;
				for (int ty = y + 1; ty <= itemsCountV - 1; ty ++) {
					if (all[x, ty] != null) {
						all[x, y] = all[x, ty];
						all[x, ty] = null;
						all[x, y].GetComponent<Box>().MoveToY(initY + itemSide * y);
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
			if (InBoard(x, newY)) {
				all[x, newY] = CreateBox();
				all[x, newY].transform.parent = transform;
				all[x, newY].transform.position = new Vector2(initX + itemSide * x, 5 + initY + itemSide * newY);
				all[x, newY].GetComponent<Box>().MoveToY(initY + itemSide * newY);
//				Debug.Log("New at: " + x + "," + newY);
			}
		}
	}
	
	public GameObject CreateBox(GameObject prefav, Vector2 gridPos, Vector2 pos) {
		GameObject newBox = (GameObject)GameObject.Instantiate(prefav);
		all[(int)gridPos.x, (int)gridPos.y] = newBox;
		newBox.transform.position = pos;
		return newBox;
	}
	
	public GameObject CreateEnemy(Vector2 pos) {
		GameObject enemey = CreateDrop(enemyPrefav, pos);
		enemies.Add(enemey);
		return enemey;
	}
	
	public GameObject CreateBonus(GameObject prefav, Vector2 pos) {
		GameObject bonus = CreateDrop(prefav, pos);
		bonuses.Add(bonus.GetComponent<Box>());
		return bonus;
	}
	
	public GameObject CreateDrop(GameObject prefav, Vector2 pos) {
		GameObject newBox = (GameObject)GameObject.Instantiate(prefav);
		newBox.transform.position = pos;
		Box box = newBox.GetComponent<Box>();
		box.MoveTo(pos.x + Random.Range(-0.2f, 0.2f), -Random.Range(3.6f, 4.2f));
		return newBox;
	}
	
	private GameObject CreateBox() {
		GameObject result;
		
		float ran = Random.value;
		
		if (ran >= rareWhen) {
			result = (GameObject)(GameObject.Instantiate(rares[Random.Range(0, rares.Length)]));
		} else if (ran > specialWhen) {
			result = (GameObject)(GameObject.Instantiate(specials[Random.Range(0, specials.Length)]));
		} else if (ran > commonWhen) {
			result = (GameObject)(GameObject.Instantiate(commons[Random.Range(0, commons.Length)]));
		} else {
			result = (GameObject)(GameObject.Instantiate(empties[Random.Range(0, empties.Length)]));
		}
		return result;
	}
	
	private void CheckForFigures() {
	
	}
	
	private void OnPress(Vector2 position) {
		selectdBoxPos = BoxCoordsAtPosition(position);
		foreach (Box box in bonuses) {
			if (box.gameObject.GetComponent<BoxCollider2D>().OverlapPoint(position)) {
				box.isAlive = false;
			}
			if (!box.isAlive) {
				consumablesToKill.Add(box);
			}
		}
		foreach (Box box in consumablesToKill) {
			bonuses.Remove(box);
			GameObject.Destroy(box.gameObject);
		}
		consumablesToKill.Clear();
	}
	
	private void OnDrag(Vector2 position) {
		selectdBoxPos = BoxCoordsAtPosition(position);
		if (selectdBoxPos != invalidPosition && !selectedPositions.Contains(selectdBoxPos)) {
			selectedPositions.Add(selectdBoxPos);
//			Debug.Log("hover: " + (int)selectdBoxPos.x + "," + (int)selectdBoxPos.y);
			all[(int)selectdBoxPos.x, (int)selectdBoxPos.y].GetComponentInChildren<SpriteRenderer>().color = Color.red;
		}
	}
	
	private void OnEndDrag(Vector2 position) {
		endBoxPos = BoxCoordsAtPosition(position);
		figures.Check(selectedPositions);
		selectedPositions.Clear();
	}
		
	public static bool InBoard(int x, int y)
	{
		return x >= 0 && y >= 0 && x < itemsCountH && y < itemsCountV;
	}
	
	private Vector2 BoxCoordsAtPosition(Vector2 position) {
		for (int i = 0; i < itemsCountH; i++)
		{
			for (int j = 0; j < itemsCountV; j++)
			{
				GameObject box = all[i, j];
				if (box != null && box.GetComponent<Collider2D>().OverlapPoint(position))
				{
					return new Vector2(i, j);
				}
			}
		}
		return invalidPosition;
	}
	
	private void CheckInput() {
		if (down)
		{
			time += Time.deltaTime;
		}
		if (platform == RuntimePlatform.Android || platform == RuntimePlatform.IPhonePlayer)
		{
			if (Input.touchCount > 0)
			{
				if (!down && Input.GetTouch(0).phase == TouchPhase.Began)
				{
					down = true;
					time = 0;
					pressPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
					OnPress(pressPos);
				}
				else if (down && Input.GetTouch(0).phase == TouchPhase.Ended)
				{
					down = false;
					OnEndDrag(Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position));
				} else if (down) {
					OnDrag(Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position));
				}
			}
		}
		else
		{
			if (!down && Input.GetMouseButtonDown(0))
			{
				down = true;
				time = 0;
				pressPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);				
				OnPress(pressPos);
			}
			else if (down && Input.GetMouseButtonUp(0))
			{
				down = false;
				OnEndDrag(Camera.main.ScreenToWorldPoint(Input.mousePosition));
			} else if (down) {
				OnDrag(Camera.main.ScreenToWorldPoint(Input.mousePosition));
			}
		}
	}
}
