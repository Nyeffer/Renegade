using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveandDeactivate : MonoBehaviour {

	public GameObject otherButton;
	public GameObject thisButton;

	public void Switch() {
		otherButton.SetActive(true);
		thisButton.SetActive(false);
	}
}
