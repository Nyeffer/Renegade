using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraChange : MonoBehaviour {

	public bool isFirstPerson;
	public Transform firstPerson;
	public Transform thirdPerson;

	void Start() {
		isFirstPerson = true;
	}

	void Update() {
		if(isFirstPerson) {
			gameObject.transform.position = firstPerson.transform.position;
			gameObject.transform.rotation = firstPerson.transform.rotation;
		} else {
			gameObject.transform.position = thirdPerson.transform.position;
			gameObject.transform.rotation = thirdPerson.transform.rotation;
		}

		if(Input.GetKeyDown("space")) {
			if(isFirstPerson) {
				isFirstPerson = false;
			} else {
				isFirstPerson = true;
			}
		}
	}


}
