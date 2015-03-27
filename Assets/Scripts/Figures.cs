using UnityEngine;
using System.Collections;

public class Figures : MonoBehaviour { 
	public GameObject[,] all;
	
	private Effect[] effects;
	
	public GameObject padlockPrefav;
	public GameObject doorPrefav;
	public GameObject ironSwordPrefav;
	public GameObject goldSwordPrefav;
	public GameObject diamonSwordPrefav;
	public GameObject ironShieldPrefav;
	public GameObject goldShieldPrefav;
	public GameObject diamonShieldPrefav;
	
	public void Init(GameObject[,] all) {
		this.all = all;
		effects = new Effect[] {
            // Lock
			new NewBoxEffect(all,
				new ItemsManager.Elements[] { ItemsManager.Elements.Iron, ItemsManager.Elements.Iron, ItemsManager.Elements.Iron },
				padlockPrefav),
            // Door
			new DropEffect(all,
				new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Lock },
				doorPrefav),
            // Iron Sword
			new DropEffect(all,
				new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Iron, ItemsManager.Elements.Iron },
				ironSwordPrefav),
            // Gold Shield
			new DropEffect(all,
				new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Wood , ItemsManager.Elements.Iron },
				ironShieldPrefav),
			// Gold Sword
			new DropEffect(all,
				new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Gold, ItemsManager.Elements.Gold },
				goldSwordPrefav),
			// Gold Shield
			new DropEffect(all,
				new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Wood , ItemsManager.Elements.Gold },
				goldShieldPrefav),
			// Diam Sword
			new DropEffect(all,
               	new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Diamond, ItemsManager.Elements.Diamond },
				diamonSwordPrefav),
			// Gold Shield
			new DropEffect(all,
	  		    new ItemsManager.Elements[] { ItemsManager.Elements.Wood, ItemsManager.Elements.Wood , ItemsManager.Elements.Diamond },
				diamonShieldPrefav)
        };
	}
	
	public void Check(ArrayList positions) {
		bool check = false;
		foreach (Effect effect in effects) {
			check |= effect.LookForMatches(positions);
			if (check) {
				Debug.Log("FOUND!!");
				break;
			} 
		}
		if (!check) {
			foreach (Vector2 vec in positions) {
				Debug.Log("Kill: " + vec);
				Box box = this.all[(int)vec.x, (int)vec.y].GetComponent<Box>();
				
				ItemsManager.instance.CreateEnemy(box.gameObject.transform.position);
				GameObject.Destroy(box.gameObject);
				this.all[(int)vec.x, (int)vec.y] = null;
				ItemsManager.instance.CreateBoxAtX((int)vec.x);
			}
		}
	}

}
