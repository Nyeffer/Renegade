using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Buttons : MonoBehaviour {

	// Level Selection - Go To Level 5
	public void StartToLevelSelect() {
		SceneManager.LoadScene("CharacterSelection", LoadSceneMode.Single);
		PlayerPrefs.SetInt("PlayerLevel", 5);
	}
	// Player Selection - Girl
	public void PickUpGirl() {
		PlayerPrefs.SetInt("Gender", 2);
		SceneManager.LoadScene("Bandit_Camp_Survival", LoadSceneMode.Single);
	}

	// Player Selection - Boy
	public void PickUpBoy() {
		PlayerPrefs.SetInt("Gender", 1);
		SceneManager.LoadScene("Bandit_Camp_Survival", LoadSceneMode.Single);
	}

	// Go back to the Menus/Ads
	public void PlayAgain() {
		SceneManager.LoadScene("Menus", LoadSceneMode.Single);
	}
	
	// Quit the Game
	public void Quit() {
		Application.Quit();
	}

	// Set the PlayerPref to make the Player look the way they want
	public void SelectCharacter() {
		SceneManager.LoadScene("LevelSelection", LoadSceneMode.Single);
	}

	// Go to the Desired Level
	public void Play() {
		SceneManager.LoadScene("Testing", LoadSceneMode.Single);
	}

	// Go to the Menus
	public void OnExit() {
		SceneManager.LoadScene("Menus", LoadSceneMode.Single);
	}
}
