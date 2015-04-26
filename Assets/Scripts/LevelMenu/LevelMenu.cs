using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LevelMenu : MonoBehaviour {

	public Slider strength;
	public Slider defence;
	public Slider speed;
	public Slider health;

	public Text buyStrength;
	public Text buyDeffence;
	public Text buySpeed;
	public Text buyHealth;
	
	public Text gold;
	
	void Start ()
	{
		strength.maxValue = 20;
		defence.maxValue = 20;
		speed.maxValue = 20;
		health.maxValue = 20;
	}
	
	public void Init ()
	{
		strength.value = WorldManager.instance.attackPoints;
		defence.value = WorldManager.instance.defencePoints;
		speed.value = WorldManager.instance.speedPoints;
		health.value = WorldManager.instance.healthPoints;
		
		buyStrength.text = WorldManager.instance.attackPoints.ToString();
		buyDeffence.text = WorldManager.instance.defencePoints.ToString();
		buySpeed.text = WorldManager.instance.speedPoints.ToString();
		buyHealth.text = WorldManager.instance.healthPoints.ToString();

		gold.text = WorldManager.instance.goldenSkuls.ToString();
	}
	
	void UpdateGold ()
	{
		gold.text = WorldManager.instance.goldenSkuls.ToString();
	}
	
	public void BuyStrength () {
		if (WorldManager.instance.goldenSkuls >= WorldManager.instance.attackPoints)
		{
			WorldManager.instance.BuyStrength();
			strength.value = WorldManager.instance.attackPoints;
			buyStrength.text = WorldManager.instance.attackPoints.ToString();
			UpdateGold ();
		}
	}
	
	public void BuyDeffence () {
		if (WorldManager.instance.goldenSkuls >= WorldManager.instance.defencePoints)
		{
			WorldManager.instance.BuyDeffence();
			defence.value = WorldManager.instance.defencePoints;
			buyDeffence.text = WorldManager.instance.defencePoints.ToString();
			UpdateGold ();
		}
	}
	
	public void BuySpeed () {
		if (WorldManager.instance.goldenSkuls >= WorldManager.instance.speedPoints)
		{
			WorldManager.instance.BuySpeed();
			speed.value = WorldManager.instance.speedPoints;
			buySpeed.text = WorldManager.instance.speedPoints.ToString();
			UpdateGold ();
		}
	}
	
	public void BuyHealth () {
		if (WorldManager.instance.goldenSkuls >= WorldManager.instance.healthPoints)
		{
			WorldManager.instance.BuyHealth();
			health.value = WorldManager.instance.healthPoints;
			buyHealth.text = WorldManager.instance.healthPoints.ToString();
			UpdateGold ();
		}
	}
	
	public void Reset () {
		WorldManager.instance.BuyHealth();
		health.value = WorldManager.instance.healthPoints;
		buyHealth.text = WorldManager.instance.healthPoints.ToString();
		UpdateGold ();
	}
}
