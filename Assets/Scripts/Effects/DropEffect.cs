using UnityEngine;
using System.Collections;

public class DropEffect : Effect {

	public DropEffect(GameObject[,] all, ItemsManager.Elements[] pattern, GameObject prefav) : base(all, pattern, prefav) {
	}

	public override void DoEffect(ArrayList positions) {
		Vector2 creatBoxAt = this.all[(int)((Vector2)positions[0]).x, (int)((Vector2)positions[0]).y].transform.position;
		foreach (Vector2 vec in positions) {
			GameObject.Destroy(this.all[(int)vec.x, (int)vec.y]);
			this.all[(int)vec.x, (int)vec.y] = null;
		}
		foreach (Vector2 vec in positions) {
			GameManager.items.CreateBoxAtX((int)vec.x);
		}
		GameManager.items.CreateDropBonus(this.prefav, creatBoxAt);
	}
}
