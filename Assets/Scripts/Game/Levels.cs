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
	
	public static float[] ItemChances(int level) 
	{
		// { food, common, especial, rare };
		switch(level) {
		case 1 : {
			return new float[] { 0.3f, 0.40f, 0.6f, 0.97f };
		}
		case 2 : {
			return new float[] { 0.29f, 0.45f, 0.6f, 0.96f };
		}
		}
		return new float[] { 0.29f, 0.45f, 0.6f, 0.96f };
	}

	public static Vector2 DoorPosition(int level) 
	{
		switch(level) {
		case 1 : {
			return new Vector2(-1.3f, -2.41f);
		}
		case 2 : {
			return new Vector2(-1.5f, -2.41f);
		}
		}
		return new Vector2(-1.5f, -2.41f);
	}
	
	public static int Kills(int level) 
	{
		switch(level) {
		case 1 : {
			return 1;
		}
		}
		return 1;
	}
	
	public static List<Enemies>[] EnemiesAndBosses(int level) 
	{
		List<Enemies> enems = new List<Enemies>();
		List<Enemies> bosses = new List<Enemies>();
		switch(level) {
		case 1 : {
			AddEnemy(Enemies.Zom, 15, enems);
			break;
		}
		case 2 : {
			AddEnemy(Enemies.Zom, 25, enems);
			break;
		}
		case 3 : {
			AddEnemy(Enemies.Zom, 10, enems);
			AddEnemy(Enemies.Ske, 3, enems);
			AddEnemy(Enemies.Zom, 10, enems);
			AddEnemy(Enemies.Ske, 3, enems);
			AddEnemy(Enemies.Zom, 10, enems);
			AddEnemy(Enemies.Ske, 3, enems);
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
	
	
	public static int[,] Tiles(int level) 
	{
		int[,] tiles = new int[12, 5];
		switch(level) {
		case 1 : {
			AddTiles(0, 0, 11, 0,  2, ref tiles);
			AddTiles(1, 0, 11, 3, 3, ref tiles);
			AddTiles(2, 0, 11, 4, 4, ref tiles);
			break;
		}
		case 2 : 
		case 3 :
		case 4 :
		case 5 : {
			AddTiles(3, 0, 11, 0,  2, ref tiles);
			AddTiles(4, 0, 11, 3, 3, ref tiles);
			AddTiles(5, 0, 11, 4, 4, ref tiles);
			break;
		}
		case 6 :
		case 7 :
		case 8 :
		case 9 :
		case 10 : {
			AddTiles(6, 0, 11, 0,  2, ref tiles);
			AddTiles(7, 0, 11, 3, 3, ref tiles);
			AddTiles(8, 0, 11, 4, 4, ref tiles);
			break;
		}
		}
		return tiles;
	}
	
	static void AddTile(int index, int x, int y, ref int[,] tiles) 
	{
		AddTiles (index, x, x, y, y, ref tiles);
	}
	
	static void AddTiles(int index, int x, int xx, int y, int yy, ref int[,] tiles) 
	{
		for (int i = x; i <= xx; i ++) 
		{
			for (int j = y; j <= yy; j ++) 
			{
				tiles[i, j] = index;
			}
		}
	}
}	
