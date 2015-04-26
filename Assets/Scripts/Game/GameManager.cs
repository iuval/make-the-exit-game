using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public enum ACTIONS {
	IdleUp = 0,
	IdleDown = 1,
	IdleSide = 2,
	WalkingUp = 3,
	WalkingDown = 4,
	WalkingSide = 5
}

public class GameManager : MonoBehaviour 
{
	public static float topLimit = -2.7646f;
	public static float lowLimit = 	-4;

	public static GameManager instance;
	public static ItemsManager items;
	public static Dude dude;
	public static EnemyManager enemies;
	public static Door door;
	public static Background background;
	
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
		background = GameObject.Find("Background").GetComponent<Background>();
		dude = GameObject.Find("Dude").GetComponent<Dude>();
		door = GameObject.Find("Door").GetComponent<Door>();
	}

	void Update () {
		if (!GameManager.instance.isPlaying) return;
		
		time += Time.deltaTime;
		
		SetTime();
		
		if (!dude.IsAlive()) {
			EndGame();
		}
		
		if (hasTheKey && killedAll) {
			hasTheKey = false;
			killedAll = false;
			door.Open ();
			dude.GoToDoor ();
		}
	}
	
	public void NextLevel() 
	{
		isPlaying = false;
		WorldManager.instance.AddGold (gold);
		WorldManager.instance.NextLevel();
	}
	
	public void RestartGame () {
		isPlaying = false;
		WorldManager.instance.RestartGame ();
	}
	
	public void LoadLevel(int level) {
		this.level = level;
	
		gold = 0;
		SetGold();
		
		time = 0;
		SetTime();
		
		background.LoadLevel (level);
		
		door.LoadLevel (level);
		items.Clear();
		items.LoadLevel (level);
		enemies.LoadLevel (level);
		dude.LoadLevel (level);
		
		isPlaying = true;
	}
	
	void EndGame() {
		isPlaying = false;
		menu.Show ();
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
