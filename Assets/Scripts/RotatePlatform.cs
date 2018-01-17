using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotatePlatform : MonoBehaviour {

	public bool canRotate;
	public bool isRight;
	public bool isLeft;

	public Vector3 rightTurn;
	public Vector3 leftTurn;

	private Vector3 currentRot;

	// Use this for initialization
	void Start () {
		canRotate = false;
		isRight = false;
		isLeft = false;
		rightTurn = new Vector3(0, 90, 0);
		leftTurn = new Vector3(0, -90, 0);
		currentRot = transform.eulerAngles;
	}
	
	// Update is called once per frame
	void Update () {
		if(canRotate) {
			if(isRight) {
				currentRot = new Vector3(
					Mathf.LerpAngle(currentRot.x, rightTurn.x, Time.deltaTime),
					Mathf.LerpAngle(currentRot.y, rightTurn.y, Time.deltaTime),
					Mathf.LerpAngle(currentRot.z, rightTurn.z, Time.deltaTime));
			} 
			if (isLeft) {
				currentRot = new Vector3(
					Mathf.LerpAngle(currentRot.x, leftTurn.x, Time.deltaTime),
					Mathf.LerpAngle(currentRot.y, leftTurn.y, Time.deltaTime),
					Mathf.LerpAngle(currentRot.z, leftTurn.z, Time.deltaTime));
			}
		}
		transform.eulerAngles = currentRot;
	}

	public bool GetCanRotate() {
		return canRotate;
	}

	public void SetCanRotate(bool newVal) {
		canRotate = newVal;
	}

	public bool GetIsRight() {
		return isRight;
	}

	public void SetIsRight(bool newVal) {
		isRight = newVal;
	}
	
	public bool GetIsLeft() {
		return isLeft;
	}
	
	public void SetIsLeft(bool newVal) {
		isLeft = newVal;
	}
}


