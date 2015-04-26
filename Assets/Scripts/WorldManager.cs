using UnityEngine;
using System.Collections;

public class WorldManager : MonoBehaviour
{	
	public static WorldManager instance;
//	public GameObject LoadingImage;
	
	public int goldenSkuls;
	public int level;
	
	public int defencePoints;
	public float defence;

	public int attackPoints;
	public float attack;
	
	public int healthPoints;
	public float health;
	
	public int speedPoints;
	public float timeBetweenHits;
	public float walkSpeed;
	
	void Awake () {
		if (instance == null)
		{
			instance = this;
			DontDestroyOnLoad(gameObject);
			
			ResetGame ();
		}
	}
	
	void ResetGame () {
		level = 1;
		goldenSkuls = 3;
		defencePoints = 1;
		attackPoints = 1;
		healthPoints = 1;
		speedPoints = 1;
		CalcAttributes ();
	}
	
	public void RestartGame () {
		ResetGame ();
		LoadScene (0);
	}
	
	void CalcAttributes ()
	{
		defence = 2 + ((defencePoints / 10) * 20f);
		attack = 10 + ((attackPoints / 10) * 20f);
		health = 500 + ((healthPoints / 10) * 200);
		timeBetweenHits = 0.2f - ((speedPoints / 10) * 0.2f);
		walkSpeed = 1f - ((speedPoints / 10) * 1f);
	}
	
	void OnLevelWasLoaded (int scene)
	{
		if (scene == 0) 
		{
			GameObject.Find("LevelMenuUI").GetComponent<LevelMenu> ().Init ();
		}
		else if (scene == 1)
		{
			GameManager.instance.LoadLevel(level);
		}
	}
	
	public void NextLevel() 
	{
		level ++;
		LoadScene (0);
	}
	
	public void LoadScene (int level)
	{
		Application.LoadLevel(level);
	}
	
	public void AddGold(int amount) {
		goldenSkuls += amount;
	}
	
	public void BuyStrength ()
	{
		goldenSkuls -= attackPoints;
		attackPoints ++;
		CalcAttributes ();
	}
	
	public void BuyDeffence ()
	{
		goldenSkuls -= defencePoints;
		defencePoints ++;
		CalcAttributes ();
	}
	
	public void BuySpeed ()
	{
		goldenSkuls -= speedPoints;
		speedPoints ++;
		CalcAttributes ();
	}
	
	public void BuyHealth ()
	{
		goldenSkuls -= healthPoints;
		healthPoints ++;
		CalcAttributes ();
	}
}
