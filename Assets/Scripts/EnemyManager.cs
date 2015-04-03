using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class EnemyManager : MonoBehaviour {
	
	public Text killsText;
	public float timeBetweenEnemy;
	public GameObject enemyPrefav;
	
	int kills;
	int killsInThisLevel;
	ArrayList enemies = new ArrayList ();
	ArrayList enemiesToKill = new ArrayList ();
	float remainingTime;
	
	void Start () {
		remainingTime = timeBetweenEnemy * Random.Range(0.8f, 1.2f);
	}
	
	void Update () {
		if (!GameManager.instance.isPlaying) return;
		
		remainingTime -= Time.deltaTime;
		if (remainingTime <= 0) {
			CreateEnemy();
			remainingTime = timeBetweenEnemy * Random.Range(0.8f, 1.2f);
		}
			
		if (enemiesToKill.Count > 0) {
			foreach (GameObject ene in enemiesToKill) {
				GameObject.Destroy (ene);
				enemies.Remove (ene);
			}
			enemiesToKill.Clear ();
		}
	}
	
	public void Clear() {
		for (int i = 0;i < enemies.Count; i++) {
			Destroy(enemies[i] as GameObject);
		} 
		enemies.Clear();
	}
	
	void AddKills() {
		kills ++;
		ShowKills();
	}
	
	void ShowKills() {
		killsText.text = kills.ToString() + " / " + killsInThisLevel.ToString();
	}

	public void LoadLevel(int level) {
		kills = 0;
		killsInThisLevel = level * 10;
		
		ShowKills();
	}
	
	public void KillEnemy (GameObject enemy)
	{
		enemiesToKill.Add (enemy);
		AddKills();
	}	
	
	public void AddEnemy(GameObject enemy) 
	{
		enemies.Add(enemy);
	}
	
	private void CreateEnemy() {
		GameObject enemy = (GameObject)GameObject.Instantiate (enemyPrefav);
		float x = Random.value > 0.5 ? -3.5f : 3.5f;
		enemy.transform.position = new Vector2(x, -Random.Range(3f, 4f));
		AddEnemy(enemy);
		enemy.GetComponent<DropEnemy>().ActionOnLanding();
	}
	
	public DropEnemy FindClosestEnemy ()
	{
		if (enemies.Count > 0) {
			for (int i = 0; i < enemies.Count; i++) {
				if (!((GameObject)enemies [i]).GetComponent<Box> ().isMoving) 
					return ((GameObject)enemies [i]).GetComponent<DropEnemy> ();
			}
		} 
		return null;
	}
}
