using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraChange : MonoBehaviour {
	// Variables
	public bool isFirstPerson;
	public Transform[] views;
	public float transitionSpeed;
	Transform currentView;

	void Start() {
		isFirstPerson = true;
		if(isFirstPerson) {
			currentView = views[0];
		}
	}

	void Update() {
		if(Input.GetKeyDown(KeyCode.Space)) {
			if(!isFirstPerson) {
				currentView = views[1];
				isFirstPerson = true;
			} else {
				currentView = views[0];
				isFirstPerson = false;
			}
		}
	}

	void LateUpdate() {
		transform.position = Vector3.Lerp(transform.position, currentView.position, Time.deltaTime * transitionSpeed);
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(transform.rotation.eulerAngles.x, currentView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(transform.rotation.eulerAngles.y, currentView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(transform.rotation.eulerAngles.z, currentView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));
		
		transform.eulerAngles = currentRotation;
	}
}
