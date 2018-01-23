using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateChild : MonoBehaviour {

	public GameObject Child;

	public float timeTillActivation;
	void Update() {
		if(timeTillActivation >= 3) {
			Child.SetActive(true);
		} else {
			timeTillActivation += Time.deltaTime;
		}
	}
}
