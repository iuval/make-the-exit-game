using UnityEngine;
using System.Collections;

public class DropEffect : Effect {

	public DropEffect(GameObject[,] all, ItemsManager.Elements[] pattern, GameObject prefav) : base(all, pattern, prefav) {
	}

	
	public override void DoEffect(ArrayList positions) {
		Vector2 creatBoxAt = this.all[(int)((Vector2)positions[0]).x, (int)((Vector2)positions[0]).y].transform.position;
		foreach (Vector2 vec in positions) {
			Debug.Log("Kill: " + vec);
			Box box = this.all[(int)vec.x, (int)vec.y].GetComponent<Box>();
			GameObject.Destroy(box.gameObject);
			this.all[(int)vec.x, (int)vec.y] = null;
			ItemsManager.instance.CreateBoxAtX((int)vec.x);
		}
		ItemsManager.instance.CreateBonus(this.prefav, creatBoxAt);
	}
}
