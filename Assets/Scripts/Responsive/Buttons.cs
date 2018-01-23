﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Buttons : MonoBehaviour {

	public GameObject CharacterSelection;


	public void StartToLevelSelect() {
		SceneManager.LoadScene("CharacterSelection", LoadSceneMode.Single);
		PlayerPrefs.SetInt("PlayerLevel", 5);
	}

	public void RotateCharacterSelectionRight() {
		CharacterSelection.transform.Rotate(new Vector3(0, 90, 0));
	}

	public void RotateCharacterSelectionLeft() {
		CharacterSelection.transform.Rotate(new Vector3(0, -90, 0));
	}

	public void PlayAgain() {
		SceneManager.LoadScene("Menus", LoadSceneMode.Single);
	}
	
	public void Quit() {
		Application.Quit();
	}

	public void SelectCharacter() {
		SceneManager.LoadScene("LevelSelection", LoadSceneMode.Single);
	}

	public void Play() {
		SceneManager.LoadScene("Testing", LoadSceneMode.Single);
	}
}