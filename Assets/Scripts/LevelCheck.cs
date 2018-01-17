using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelCheck : MonoBehaviour {

	private int playerLevel;

	public GameObject[] Levels;
	private int num_Levels;

	void Awake() {
		playerLevel = PlayerPrefs.GetInt("PlayerLevel", 0);
	}	

	void Start() {
		Debug.Log(playerLevel);
		num_Levels = Levels.Length - 1;
		for (int i = 0; i <= num_Levels; i++) {
			if(playerLevel <= i) {
				Levels[i].SetActive(false);
			} else {
				Levels[i].SetActive(true);
			}
		}
	}
}
