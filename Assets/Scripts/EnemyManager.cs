using UnityEngine;
using System.Collections.Generic;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class EnemyManager : MonoBehaviour {
	
	public Text killsText;
	public float timeBetweenEnemy;
	
	public GameObject ratPrefav;
	public GameObject zomPrefav;
	public GameObject skePrefav;
	public GameObject vamPrefav;
	
	public int maxDeadEnemies = 50;
	int lastDeadEnemyIndex;
	
	List<Enemies> enemiesToSpawn;
	List<Enemies> bossesToSpawn;
	int enemyIndex;
	int bossIndex;
	
	public Transform floor;
	
	int kills;
	int killsInThisLevel;
	List<GameObject> enemies = new List<GameObject> ();
	GameObject[] deadEnemies;
	float remainingTime;
	
	void Start () {
		deadEnemies = new GameObject[maxDeadEnemies];
		lastDeadEnemyIndex = 0;
		remainingTime = timeBetweenEnemy * Random.Range(0.8f, 1.2f);
	}
	
	void Update () {
		if (!GameManager.instance.isPlaying) return;
		
		remainingTime -= Time.deltaTime;
		if (remainingTime <= 0) {
			CreateEnemy();
			remainingTime = timeBetweenEnemy * Random.Range(0.8f, 1.2f);
		}
	}

	public void Clear() {
		for (int i = 0;i < enemies.Count; i++) {
			Destroy(enemies[i] as GameObject);
		} 
		for (int i = 0;i < deadEnemies.Length; i++) {
			Destroy(deadEnemies[i]);
		} 
		enemies.Clear();
		deadEnemies = new GameObject[maxDeadEnemies];
	}
	
	void AddKills() {
		kills ++;
		ShowKills();
		
		if (kills == killsInThisLevel) {
			GameManager.instance.killedAll = true;
		}
	}
	
	void ShowKills() {
		killsText.text = kills.ToString() + " / " + killsInThisLevel.ToString();
	}
	
	void CreateEnemy() {
		GameObject enemy = null;
		
		if (enemyIndex == enemiesToSpawn.Count && bossIndex == bossesToSpawn.Count)
		{
			enemyIndex = 0;
			bossIndex = 0;
		}
		
		if (enemyIndex < enemiesToSpawn.Count)
		{
			switch (enemiesToSpawn[enemyIndex])
			{
				case Enemies.Ske : {
					enemy = (GameObject)GameObject.Instantiate (skePrefav);
					break;
			}
			case Enemies.Zom : {
				enemy = (GameObject)GameObject.Instantiate (zomPrefav);
				break;
			}
			case Enemies.Vam : {
				enemy = (GameObject)GameObject.Instantiate (vamPrefav);
				break;
			}
			}
			enemyIndex ++;
		}
//		if (bossIndex < bossesToSpawn.Length)
//		{
//			bossIndex ++;
//		}
		
		enemy.transform.parent = floor;
		float x = Random.value > 0.5 ? -3.5f : 3.5f;
		enemy.transform.position = new Vector2(x, -Random.Range(2.2f, 3.8f));
		AddEnemy(enemy);
	}
	
	public void LoadLevel (int level) {
		kills = 0;
		killsInThisLevel = Levels.Kills(level);
		List<Enemies>[] enems = Levels.EnemiesAndBosses(level);
		enemiesToSpawn = enems[0];
		bossesToSpawn = enems[1];
		
		enemyIndex = 0;
		
		ShowKills ();
	}
	
	public void KillEnemy (GameObject enemy)
	{
		lastDeadEnemyIndex ++;
		if (deadEnemies.Length == lastDeadEnemyIndex) lastDeadEnemyIndex = 0;
		
		if (deadEnemies[lastDeadEnemyIndex] != null)
		{
			enemies.Remove(deadEnemies[lastDeadEnemyIndex]);
			Destroy(deadEnemies[lastDeadEnemyIndex]);
		}
		deadEnemies[lastDeadEnemyIndex] = enemy;
		
		if (enemy.GetComponent<Enemy>().type != Enemies.Rat)
			AddKills();
	}	
	
	public void AddEnemy (GameObject enemy) 
	{
		enemies.Add(enemy);
	}
	
	public GameObject CreateDropEnemy (Vector2 pos)
	{
		GameObject enemy = (GameObject)GameObject.Instantiate (ratPrefav);
		enemy.transform.parent = floor;
		enemy.transform.position = pos;
		enemy.GetComponent<Enemy> ().FallTo (pos.x + Random.Range (-0.2f, 0.2f), -Random.Range (2.2f, 3.8f));
		GameManager.enemies.AddEnemy(enemy);
		return enemy;
	}
	
	public Enemy FindClosestEnemy ()
	{
		if (enemies.Count > 0) {
			for (int i = 0; i < enemies.Count; i++) {
				Enemy en = ((GameObject)enemies [i]).GetComponent<Enemy> ();
				if (en.isAlive && !en.isFalling) 
					return ((GameObject)enemies [i]).GetComponent<Enemy> ();
			}
		} 
		return null;
	}
}
