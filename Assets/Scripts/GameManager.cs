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
	
	public Menu menu;
	
	public Text timeText;
	public Text goldText;
	
	public bool isPlaying;
	
	float time;
	int level;
	int gold;
	
	void Awake() {
		instance = this;
		items = GetComponent<ItemsManager>();
		enemies = GetComponent<EnemyManager>();
		dude = GameObject.Find("Dude").GetComponent<Dude>();
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
	}
	
	void InitGame() {
		time = 0;
		SetTime();
		
		level = 1;
		
		items.LoadLevel(level);
		enemies.LoadLevel(level);
		dude.Load();
		
		goldText.text = "0";
		
		isPlaying = true;
	}
	
	public void NewGame() {
		ClearGame();
		menu.Hide();
		InitGame();
	}
	
	void ClearGame() {
		menu.Show();
		
		enemies.Clear ();
		items.Clear ();
		dude.Clear ();
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
