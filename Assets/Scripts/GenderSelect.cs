using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenderSelect : MonoBehaviour {

	public GameObject male;
	public GameObject female;


	void Awake() {
		int gender = PlayerPrefs.GetInt("Gender");
		male.SetActive(false);
		female.SetActive(false);
		if(gender == 1) {
			male.SetActive(true);
		} else if (gender == 2) {
			female.SetActive(true);
		} else {
			male.SetActive(false);
			female.SetActive(false);
		}
	}
}
