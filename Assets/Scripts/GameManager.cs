using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameManager : MonoBehaviour {

	public static GameManager instance;
	public static ItemsManager items;
	public static Dude dude;
	public static EnemyManager enemies;
	
	public Text timeText;
	public Text goldText;
	
	public bool isPlaying;
	
	float time;
	int level;
	
	void Awake() {
		instance = this;
		items = GetComponent<ItemsManager>();
		enemies = GetComponent<EnemyManager>();
		dude = GameObject.Find("Dude").GetComponent<Dude>();
	}
	
	void Start () {
		isPlaying = false;
		InitGame();
	}
	
	// Update is called once per frame
	void Update () {
		if (isPlaying) {
			time += Time.deltaTime;
			
			SetTime();
		}
	}
	
	void InitGame() {
		time = 0;
		SetTime();
		
		level = 1;
		
		items.Init();
		enemies.Init(level);
		dude.Init();
		
		goldText.text = "0";
		
		isPlaying = true;
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
}
