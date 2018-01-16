using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Buttons : MonoBehaviour {

	public GameObject CharacterSelection;

	public void StartToLevelSelect() {
		SceneManager.LoadScene("CharacterSelection", LoadSceneMode.Single);
	}

	public void RotateCharacterSelectionRight() {
		CharacterSelection.transform.Rotate(new Vector3(0, 90, 0));
	}

	public void RotateCharacterSelectionLeft() {
		CharacterSelection.transform.Rotate(new Vector3(0, -90, 0));
	}
}
