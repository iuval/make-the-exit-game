using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EnemyManager : MonoBehaviour {
	
	public Text killsText;
	
	int kills;
	int killsInThisLevel;
	ArrayList enemies = new ArrayList ();
	ArrayList enemiesToKill = new ArrayList ();
	
	
	void Start () {
	
	}
	
	void Update () {
		if (enemiesToKill.Count > 0) {
			foreach (GameObject ene in enemiesToKill) {
				GameObject.Destroy (ene);
				enemies.Remove (ene);
			}
			enemiesToKill.Clear ();
		}
	}
	
	void AddKills() {
		kills ++;
		ShowKills();
	}
	
	void ShowKills() {
		killsText.text = kills.ToString() + " / " + killsInThisLevel.ToString();
	}
	
	public void Init(int level) {
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
