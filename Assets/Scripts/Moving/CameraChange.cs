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
		if (!isFirstPerson) {
			currentView = views [0];
		} else {
			currentView = views [1];
		}
	}

	public void CamChange() {
		if(!isFirstPerson) {
			ZoomOut();
		} else {
			ZoomIn();

		}
	}

	void Update() {
		CamChange();
	}

	public void ZoomIn() {
		transform.position = Vector3.Lerp(transform.position, views[0].position, Time.deltaTime * transitionSpeed);
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(transform.rotation.eulerAngles.x, currentView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(transform.rotation.eulerAngles.y, currentView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(transform.rotation.eulerAngles.z, currentView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

		transform.eulerAngles = currentRotation;
		isFirstPerson = true;
	}

	public void ZoomOut() {
		transform.position = Vector3.Lerp(transform.position, views[1].position, Time.deltaTime * transitionSpeed);
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(transform.rotation.eulerAngles.x, currentView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(transform.rotation.eulerAngles.y, currentView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(transform.rotation.eulerAngles.z, currentView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

		transform.eulerAngles = currentRotation;
		isFirstPerson = false;
	}
}
