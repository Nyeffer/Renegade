using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateLeft : MonoBehaviour {
	// Variables
	public GameObject Player; // Object that we're gonna Rotate
	public float rotSpeed = 1.0f; // Adjustable float to Represent our Speed of Rotating to the Left
	SpriteRenderer srend; // Allows us to Press the Sprite

	// Set The Constructors
	void Awake() {
		srend = GetComponent<SpriteRenderer>();
	}

	// Everytime the Mouse-Left Click stays it'll make the Player Rotate to the Left
	void OnMouseDrag() {
		Player.transform.Rotate(0, -rotSpeed * Time.deltaTime, 0); // Update the Player's Rotation towords the Left
	}

	void Update() {
		// Mobile Port of Movement
		Input.multiTouchEnabled = true;
		if(Input.touches[0].deltaTime > 0) {
			Player.transform.Rotate(0, -rotSpeed * Input.touches[0].deltaTime, 0); // Update the Player's Rotation towords the Left
		}
		// In case if the player touch it second
		if(Input.touches[1].deltaTime > 0) {
			Player.transform.Rotate(0, -rotSpeed * Input.touches[1].deltaTime, 0); // Update the Player's Rotation towords the Left
		}
	}
}
