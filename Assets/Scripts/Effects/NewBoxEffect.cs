using UnityEngine;
using System.Collections;

public class NewBoxEffect : Effect {

	public NewBoxEffect (GameObject[,] all, ItemsManager.Elements[] pattern, GameObject prefav) : base(all, pattern, prefav) {
	}

	public override void DoEffect (ArrayList positions) {
		Vector2 vec = (Vector2)positions[0];
		Vector2 creatBoxAt = this.all[(int)vec.x, (int)vec.y].transform.position;
		foreach (Vector2 pos in positions) {
			GameObject.Destroy(this.all[(int)pos.x, (int)pos.y]);
			this.all [(int)pos.x, (int)pos.y] = null;
		}
		GameManager.items.CreateBoxWithPrefav (this.prefav, vec, creatBoxAt);
		for (int i = 1; i < positions.Count; i ++) {
			vec = (Vector2)positions[i];
			GameManager.items.CreateBoxAtX((int)vec.x);
		}
	}
}
