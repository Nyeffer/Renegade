using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelCheck : MonoBehaviour {

	private int playerLevel;
	public GameObject LevelSelection;
	public GameObject[] Levels;
	private int num_Levels;
	private int counter;

	void Awake() {
		playerLevel = PlayerPrefs.GetInt("PlayerLevel");
		counter = 1;
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

	public void SelectLevelUp() {
		if(counter == 1 && PlayerPrefs.GetInt("PlayerLevel") >= 2) {
			Levels[counter - 1].SetActive(false);
			counter = 2;
			Debug.Log(counter);
		} else if(counter == 2 && PlayerPrefs.GetInt("PlayerLevel") >= 3) {
			Levels[counter - 1].SetActive(false);
			counter = 3;
			Debug.Log(counter);
		} else if(counter == 3 && PlayerPrefs.GetInt("PlayerLevel") >= 4) {
			Levels[counter - 1].SetActive(false);
			counter = 4;
			Debug.Log(counter);
		} else if(counter == 4 && PlayerPrefs.GetInt("PlayerLevel") >= 5) {
			Levels[counter - 1].SetActive(false);
			counter = 5;
			Debug.Log(counter);
		} else if (counter == 5) {
			for (int i = 0; i <= num_Levels; i++) {
				Levels[i].SetActive(true);
			}
			counter = 1;
		}
	}
}
