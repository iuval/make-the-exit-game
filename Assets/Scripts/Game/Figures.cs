using UnityEngine;
using System.Collections.Generic;

public class Figures : MonoBehaviour { 
	public Box[] objects;
	
	public void Check(List<Vector2> positions)
	{
		bool check = false;
		foreach (Box box in objects)
		{
			check |= box.LookForMatches(positions);
			if (check) break;
		}
		if (!check)
		{
			foreach (Vector2 vec in positions)
			{
				GameManager.enemies.CreateDropEnemy(GameManager.items.all[(int)vec.x, (int)vec.y].transform.position);
				Destroy(GameManager.items.all[(int)vec.x, (int)vec.y]);
				GameManager.items.all[(int)vec.x, (int)vec.y] = null;
			}
			foreach (Vector2 vec in positions)
			{
				GameManager.items.CreateBoxAtX((int)vec.x);
			}
		}
	}

}
