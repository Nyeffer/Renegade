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
		playerLevel = PlayerPrefs.GetInt("PlayerLevel", 0);
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
		if(counter == 1) {
			LevelSelection.transform.position += new Vector3(0, -250, 0);
			counter = 2;
			Debug.Log(counter);
		} else if(counter == 2) {
			LevelSelection.transform.position += new Vector3(0, -250, 0);
			counter = 3;
			Debug.Log(counter);
		} else if(counter == 3) {
			LevelSelection.transform.position += new Vector3(0, -250, 0);
			counter = 4;
			Debug.Log(counter);
		} else if(counter == 4) {
			LevelSelection.transform.position += new Vector3(0, -250, 0);
			counter = 5;
			Debug.Log(counter);
		} else if (counter == 5) {
			LevelSelection.transform.position += new Vector3(0, 1000, 0);
			counter = 1;
		}
	}
	public void SelectLevelDown() {
		if(counter == 1) {
			LevelSelection.transform.position += new Vector3(0, 250, 0);
			counter = 2;
			Debug.Log(counter);
		} else if(counter == 2) {
			LevelSelection.transform.position += new Vector3(0, 250, 0);
			counter = 3;
			Debug.Log(counter);
		} else if(counter == 3) {
			LevelSelection.transform.position += new Vector3(0, 250, 0);
			counter = 4;
			Debug.Log(counter);
		} else if(counter == 4) {
			LevelSelection.transform.position += new Vector3(0, 250, 0);
			counter = 5;
			Debug.Log(counter);
		} else if (counter == 5) {
			LevelSelection.transform.position += new Vector3(0, -1000, 0);
			counter = 1;
		}

	}
}
