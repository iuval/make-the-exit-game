using UnityEngine;
using System.Collections;

public abstract class Effect {

	protected GameObject [,] all;
	protected GameObject prefav;
	private ItemsManager.Elements[] pattern;
	
	public Effect(GameObject[,] all, ItemsManager.Elements[] pattern, GameObject prefav) {
		this.all = all;
		this.pattern = pattern;
		this.prefav = prefav;
	}

	public bool LookForMatches(ArrayList positions) {
//		Debug.Log("Checking " + positions.Count + " boxes");
		
		if (positions.Count != pattern.Length) return false;
		
	 	ArrayList boxChecked = new ArrayList();
	 	int matchCount = 0;
		Vector2 pos;
		foreach (ItemsManager.Elements elem in pattern) {
			bool match = false;
			for (int j = 0; !match && j < positions.Count; j ++) {
				pos = (Vector2)positions[j];
				if (!boxChecked.Contains(pos)) {
					match |= all[(int)pos.x, (int)pos.y].GetComponent<Box>().Element == elem;
					if (match) {
						matchCount ++;
						boxChecked.Add(pos);
					}
				}
			}
		}
//		Debug.Log("Checking for:" + pattern.Length + " -> " + matchCount);
		if (pattern.Length == matchCount) {
//			string outt = "";
//			foreach (ItemsManager.Elements el in pattern) {
//				outt += el;
//			}
//			Debug.Log(outt);
			DoEffect(positions);
			return true;
		}
		
		return false;
	}
	
	public abstract void DoEffect(ArrayList positions);
}
