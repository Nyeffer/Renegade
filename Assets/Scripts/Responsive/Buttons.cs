using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Buttons : MonoBehaviour {

	// The Entire platform
	public GameObject CharacterSelection;
	public GameObject Player_Hair;
	public GameObject Player_Body;
	public GameObject cosmedic;

	// Level Selection - Go To Level 5
	public void StartToLevelSelect() {
		SceneManager.LoadScene("CharacterSelection", LoadSceneMode.Single);
		PlayerPrefs.SetInt("PlayerLevel", 5);
	}

	// Make the Rotating Platform to the Right
	public void RotateCharacterSelectionRight() {
		CharacterSelection.transform.Rotate(new Vector3(0, 90, 0));
	}

	// Make the Rotating Platform to the Left
	public void RotateCharacterSelectionLeft() {
		CharacterSelection.transform.Rotate(new Vector3(0, -90, 0));
	}

	// Go back to the Menus/Ads
	public void PlayAgain() {
		SceneManager.LoadScene("Ads", LoadSceneMode.Single);
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

	// Change the Player's Hair to HairOption_1
	public void SetHair1() {
		Player_Hair.GetComponent<MeshFilter>().mesh = cosmedic.GetComponent<MakePlayer_CharacterCreate>().GetHair1();
	}
	// Change the Player's Hair to HairOption_2
	public void SetHair2() {
		Player_Hair.GetComponent<MeshFilter>().mesh = cosmedic.GetComponent<MakePlayer_CharacterCreate>().GetHair2();
	}
}
