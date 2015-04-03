using UnityEngine;
using System.Collections;

public class Bonus : DropAI {

	public int attack;
	public int defence;
	public int durability;
	public int gold;
	public int life;
	
	private int currentDurability;
	
	void Start () {	
		currentDurability = durability;
	}
	
	public override void ActionOnLanding() {
	}
	
	public void Use() {
		currentDurability --;
	}
	
	public float DurabilityInPer() {
		return (float)currentDurability / (float)durability;
	}
	
	public bool IsBroken() {
		return currentDurability <= 0;
	}
}
