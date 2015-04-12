using UnityEngine;
using System.Collections.Generic;

public enum Enemies {
	Rat = 1,
	Ske = 2,
	Zom = 3,
	Vam = 4,
	SkeBoss = 5,
	ZomBoss = 6,
	VamBoss = 7
}

public class Levels {

	public static Vector2 DoorPosition(int level) 
	{
		switch(level) {
		case 1 : {
			return new Vector2(-1.2f, -2.26f);
		}
		}
		return Vector2.zero;
	}
	
	public static int Kills(int level) 
	{
		switch(level) {
		case 1 : {
			return 8;
		}
		}
		return 0;
	}
	
	public static List<Enemies>[] EnemiesAndBosses(int level) 
	{
		List<Enemies> enems = new List<Enemies>();
		List<Enemies> bosses = new List<Enemies>();
		switch(level) {
		case 1 : {
			AddEnemy(Enemies.Zom, 8, enems);
			break;
		}
		case 2 : {
			AddEnemy(Enemies.Zom, 10, enems);
			break;
		}
		case 3 : {
			AddEnemy(Enemies.Zom, 10, enems);
			AddEnemy(Enemies.Ske, 2, enems);
			break;
		}
		}
		List<Enemies>[] ret = {
			enems,
			bosses
		};
		return ret;
	}
	
	static void AddEnemy(Enemies type, int count, List<Enemies> enems) 
	{
		for (int i = 0; i < count; i ++) 
		{
			enems.Add(type);
		}
	}
}	
