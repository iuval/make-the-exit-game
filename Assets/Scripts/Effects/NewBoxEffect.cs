using UnityEngine;
using System.Collections;

public class NewBoxEffect : Effect {

	public NewBoxEffect(GameObject[,] all, ItemsManager.Elements[] pattern, GameObject prefav) : base(all, pattern, prefav) {
	}

	public override void DoEffect(ArrayList positions) {
		for (int i = 0; i < positions.Count; i ++) {
			Vector2 vec = (Vector2)positions[i];
			Box box = this.all[(int)vec.x, (int)vec.y].GetComponent<Box>();
			GameObject.Destroy(box.gameObject);
//			box.gameObject.GetComponentInChildren<SpriteRenderer>().color = Color.red;
			if (i == 0) {
				ItemsManager.instance.CreateBox(this.prefav, vec, this.all[(int)vec.x, (int)vec.y].transform.position);
			} else {
				this.all[(int)vec.x, (int)vec.y] = null;
				ItemsManager.instance.CreateBoxAtX((int)vec.x);
			}
		}
	}
}
