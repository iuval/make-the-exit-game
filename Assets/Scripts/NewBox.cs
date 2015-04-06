using UnityEngine;
using System.Collections;

public class NewBox : Box {
	public override void DoEffect (ArrayList positions) {
		Vector2 vec = (Vector2)positions[0];
		Vector2 creatBoxAt = GameManager.items.all[(int)vec.x, (int)vec.y].transform.position;
		foreach (Vector2 pos in positions) {
			GameObject.Destroy(GameManager.items.all[(int)pos.x, (int)pos.y]);
			GameManager.items.all [(int)pos.x, (int)pos.y] = null;
		}
		GameManager.items.CreateBoxWithPrefav (gameObject, vec, creatBoxAt);
		for (int i = 1; i < positions.Count; i ++) {
			vec = (Vector2)positions[i];
			GameManager.items.CreateBoxAtX((int)vec.x);
		}
	}
}
