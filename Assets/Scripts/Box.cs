using UnityEngine;
using System.Collections;

public class Box : MonoBehaviour
{
	public Sprite[] srites;
	public ItemsManager.Elements Element;
	public bool isMoving = false;
	public bool isClickable = false;
	public float dropSpeed = 0.2f;
	public bool isAlive = true;

	public Pattern[] patterns;
	
	DropAI ai;
	Vector2 goTo;
	
	void Start () {
		ai = GetComponent<DropAI>();
		if (srites.Length > 0)
			GetComponentInChildren<SpriteRenderer>().sprite = srites[Random.Range(0, srites.Length)];
	}

	void Update () {
		if (isMoving) {
			transform.position = Vector2.MoveTowards(transform.position, goTo, dropSpeed * Time.deltaTime);
			if(Vector2.Distance(transform.position, goTo) <= 0.01f) {
				if (ai) ai.ActionOnLanding();
				transform.position = goTo;
				isMoving = false;
			}
		}
	}
	
	public bool LookForMatches(ArrayList positions) {
		foreach (Pattern pattern in patterns) {
			if (positions.Count == pattern.Length) {
				ArrayList boxChecked = new ArrayList();
				int matchCount = 0;
				Vector2 pos;
				foreach (ItemsManager.Elements elem in pattern.pattern) {
					bool match = false;
					for (int j = 0; !match && j < positions.Count; j ++) {
						pos = (Vector2)positions[j];
						if (!boxChecked.Contains(pos)) {
							match |= GameManager.items.all[(int)pos.x, (int)pos.y].GetComponent<Box>().Element == elem;
							if (match) {
								matchCount ++;
								boxChecked.Add(pos);
							}
						}
					}
				}
				if (pattern.Length == matchCount) {
					DoEffect(positions);
					return true;
				}
			}
		}
		
		return false;
	}

	public void MoveToY(float y) {
		MoveTo(transform.position.x, y);
		isMoving = true;
	}	
	
	public void MoveTo(float x, float y) {
		goTo = new Vector2(x, y);
		isMoving = true;
	}
	
	public virtual void DoEffect(ArrayList positions) {}
}

[System.Serializable]
public class Pattern {
	public ItemsManager.Elements[] pattern;
	
	public int Length { get { return pattern.Length; } }
}
