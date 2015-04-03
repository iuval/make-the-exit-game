using UnityEngine;
using System.Collections;

public class Figures : MonoBehaviour { 
	public GameObject[,] all;
	
	private Effect[] effects;
	
	public GameObject padlockPrefav;
	public GameObject doorPrefav;
	
	// Swords
	public GameObject ironSwordPrefav;
	public GameObject goldSwordPrefav;
	public GameObject diamSwordPrefav;
//	public GameObject diamonSwordPrefav;
	
	// Shields
	public GameObject ironShieldPrefav;
	public GameObject goldShieldPrefav;
	public GameObject diamShieldPrefav;
	
	public GameObject treasurePrefav;
	public GameObject heartPrefav;
	
	public void Init(GameObject[,] all) {
		this.all = all;
		effects = new Effect[] {
			// Heart
			new NewBoxEffect(all,
            	new ItemsManager.Elements[] {
				ItemsManager.Elements.Food, ItemsManager.Elements.Food, ItemsManager.Elements.Food
			}, heartPrefav),
            // Lock
			new NewBoxEffect(all,
				new ItemsManager.Elements[] { 
					ItemsManager.Elements.Iron, ItemsManager.Elements.Iron, ItemsManager.Elements.Iron
				}, padlockPrefav),
			// Lock
			new NewBoxEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Gold, ItemsManager.Elements.Gold, ItemsManager.Elements.Gold
				}, padlockPrefav),
			// Treasure
			new NewBoxEffect(all,
                new ItemsManager.Elements[] {
                	ItemsManager.Elements.Gold, ItemsManager.Elements.Gold,
                	ItemsManager.Elements.Lock,
                	ItemsManager.Elements.Wood
				}, treasurePrefav),
// DEBUG -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- Treasure
//			new NewBoxEffect(all,
//	             new ItemsManager.Elements[] {
//				ItemsManager.Elements.Iron, ItemsManager.Elements.Gold
//				}, treasurePrefav),
			// Treasure
			new NewBoxEffect(all,
                 new ItemsManager.Elements[] {
					ItemsManager.Elements.Diam, ItemsManager.Elements.Diam,
					ItemsManager.Elements.Lock,
					ItemsManager.Elements.Wood
				}, treasurePrefav),
			// Treasure
			new NewBoxEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Diam,
					ItemsManager.Elements.Gold,
					ItemsManager.Elements.Lock,
					ItemsManager.Elements.Wood
				}, treasurePrefav),
            // Iron Sword
			new NewBoxEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Wood,
					ItemsManager.Elements.Iron, ItemsManager.Elements.Iron 
				}, ironSwordPrefav),
			// Upgrade Iron Sword -> Gold Sword
			new NewBoxEffect(all,
                 new ItemsManager.Elements[] {
					ItemsManager.Elements.IronSword,
					ItemsManager.Elements.Gold
				}, goldSwordPrefav),
            // Iron Shield
			new NewBoxEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Wood, ItemsManager.Elements.Wood,
					ItemsManager.Elements.Iron 
				}, ironShieldPrefav),
			// Upgrade Iron Shield -> Gold Shield
			new NewBoxEffect(all,
                new ItemsManager.Elements[] {
					ItemsManager.Elements.IronShield,
					ItemsManager.Elements.Gold
				}, goldShieldPrefav),
			// Gold Sword
			new NewBoxEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Iron,
					ItemsManager.Elements.Gold, ItemsManager.Elements.Gold
				}, goldSwordPrefav),
			// Upgrade Gold Sword -> Diam Shield
			new NewBoxEffect(all,
                new ItemsManager.Elements[] {
					ItemsManager.Elements.GoldSword,
					ItemsManager.Elements.Diam
				}, diamSwordPrefav),
			// Gold Shield
			new NewBoxEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Iron, ItemsManager.Elements.Iron,
					ItemsManager.Elements.Gold
				}, goldShieldPrefav),
			// Upgrade Gold Shield -> Diam Shield
			new NewBoxEffect(all,
            	new ItemsManager.Elements[] {
					ItemsManager.Elements.GoldShield,
					ItemsManager.Elements.Diam
				}, diamShieldPrefav),
			// Diam Sword
			new NewBoxEffect(all,
               	new ItemsManager.Elements[] {
					ItemsManager.Elements.Gold,
               		ItemsManager.Elements.Diam, ItemsManager.Elements.Diam
               	}, diamSwordPrefav),
			// Diam Shield
			new NewBoxEffect(all,
	  		    new ItemsManager.Elements[] {
					ItemsManager.Elements.Gold, ItemsManager.Elements.Gold,
	  		    	ItemsManager.Elements.Diam
				}, diamShieldPrefav),
			// Door
			new DropEffect(all,
				new ItemsManager.Elements[] {
					ItemsManager.Elements.Wood, ItemsManager.Elements.Wood, ItemsManager.Elements.Wood,
					ItemsManager.Elements.Iron, ItemsManager.Elements.Iron, ItemsManager.Elements.Iron,
					ItemsManager.Elements.Lock, ItemsManager.Elements.Lock, ItemsManager.Elements.Lock
				}, doorPrefav)
        };
	}
	
	public void Check(ArrayList positions) {
		bool check = false;
		foreach (Effect effect in effects) {
			check |= effect.LookForMatches(positions);
			if (check) {
//				Debug.Log("FOUND!!");
				break;
			} 
		}
		if (!check) {
			foreach (Vector2 vec in positions) {
				GameManager.items.CreateEnemy(this.all[(int)vec.x, (int)vec.y].transform.position);
				Destroy(this.all[(int)vec.x, (int)vec.y]);
				this.all[(int)vec.x, (int)vec.y] = null;
			}
			foreach (Vector2 vec in positions) {
				GameManager.items.CreateBoxAtX((int)vec.x);
			}
		}
	}

}
