using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraControl : MonoBehaviour {
	// Variables
	public Transform[] views; // Points in the world 
	public GameObject Camera; // Object we're gonna change the transform
	public float transitionSpeed; // rate of the change of transform
	Transform targetView; // Target position


	// Function Needed in Character Creation
	public void ChangeLocation_ToDefault() {
		targetView.position = views[0].position; // Changing the TargetView
		Camera.transform.position = Vector3.Lerp(Camera.transform.position, targetView.position, Time.deltaTime * transitionSpeed); // Camera going to the TargetView's position

		// Preparing the Desired Rotation
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.x, targetView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.y, targetView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.z, targetView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

		Camera.transform.eulerAngles = currentRotation; // Camera transtions to the Desired Rotation
	}

	public void ChangeLocation_ToFaceView() {
		targetView.position = views[1].position; // Changing the TargetView
		Camera.transform.position = Vector3.Lerp(Camera.transform.position, targetView.position, Time.deltaTime * transitionSpeed); // Camera going to the TargetView's position

		// Preparing the Desired Rotation
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.x, targetView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.y, targetView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.z, targetView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

		Camera.transform.eulerAngles = currentRotation; // Camera transtions to the Desired Rotation
	}

	public void ChangeLocation_ToWeaponView() {
		targetView.position = views[2].position; // Changing the TargetView
		Camera.transform.position = Vector3.Lerp(Camera.transform.position, targetView.position, Time.deltaTime * transitionSpeed); // Camera going to the TargetView's position

		// Preparing the Desired Rotation
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.x, targetView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.y, targetView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.z, targetView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

		Camera.transform.eulerAngles = currentRotation; // Camera transtions to the Desired Rotation
	}

	public void ChangeLocation_ToBodyView() {
		targetView.position = views[3].position; // Changing the TargetView
		Camera.transform.position = Vector3.Lerp(Camera.transform.position, targetView.position, Time.deltaTime * transitionSpeed); // Camera going to the TargetView's position

		// Preparing the Desired Rotation
		Vector3 currentRotation = new Vector3(
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.x, targetView.transform.rotation.eulerAngles.x, Time.deltaTime * transitionSpeed), 
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.y, targetView.transform.rotation.eulerAngles.y, Time.deltaTime * transitionSpeed),
			Mathf.LerpAngle(Camera.transform.rotation.eulerAngles.z, targetView.transform.rotation.eulerAngles.z, Time.deltaTime * transitionSpeed));

		Camera.transform.eulerAngles = currentRotation; // Camera transtions to the Desired Rotation
	}

}
