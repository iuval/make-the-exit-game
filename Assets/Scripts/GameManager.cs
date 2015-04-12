using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public enum ACTIONS {
	Idle = 0,
	Walking = 1,
	Fighting = 2
}

public class GameManager : MonoBehaviour 
{

	public static GameManager instance;
	public static ItemsManager items;
	public static Dude dude;
	public static EnemyManager enemies;
	public static Door door;
	
	public Menu menu;
	
	public Text timeText;
	public Text goldText;
	
	public bool isPlaying;
	
	float time;
	int level;
	int gold;
	
	public bool hasTheKey;
	public bool killedAll;
	
	void Awake() {
		instance = this;
		items = GetComponent<ItemsManager>();
		enemies = GetComponent<EnemyManager>();
		dude = GameObject.Find("Dude").GetComponent<Dude>();
		door = GameObject.Find("Door").GetComponent<Door>();
	}
	
	void Start () {
		isPlaying = false;
		menu.Show();
	}
	
	// Update is called once per frame
	void Update () {
		if (!GameManager.instance.isPlaying) return;
		
		time += Time.deltaTime;
		
		SetTime();
		
		if (!dude.IsAlive()) {
			EndGame();
		}
		
		if (hasTheKey && killedAll) {
			isPlaying = false;
			hasTheKey = false;
			killedAll = false;
			door.Open ();
			dude.GoToDoor ();
		}
	}
	
	public void NextLevel() 
	{
		isPlaying = false;
		
		level ++;
		LoadLevel();
	}
	
	void LoadLevel() {
		time = 0;
		SetTime();
		
		door.transform.position = Levels.DoorPosition(level);
		
		items.Clear ();
		items.LoadLevel(level);
		
		enemies.Clear ();
		enemies.LoadLevel(level);
		
		dude.Load();
		
		isPlaying = true;
	}
	
	public void NewGame() {
		ClearGame();
		menu.Hide();
		level = 0;
		NextLevel();
	}
	
	void ClearGame() {
		goldText.text = "0";
		menu.Show();
		
		enemies.Clear ();
		items.Clear ();
		dude.Clear();
	}
	
	void EndGame() {
		isPlaying = false;
		menu.Show();
	}

	void SetTime() {
		int secs = (int)(time % 60);
		int mins = (int)(time / 60);
		string timeStr = "";
		if (mins < 10) timeStr = "0";
		timeStr += mins.ToString();
		timeStr += ":";
		if (secs < 10) timeStr += "0"; 
		timeStr += secs.ToString();
		
		timeText.text = timeStr;
	}
	
	void SetGold() {
		goldText.text = gold.ToString();
	}
	
	public void AddGold(int amount) {
		gold += amount;
		SetGold();
	}
}
