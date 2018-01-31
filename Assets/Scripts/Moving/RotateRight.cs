using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateRight : MonoBehaviour {

	// Variables
	public GameObject Player; // Object that we're gonna Rotate
	public float rotSpeed = 1.0f; // Adjustable float to Represent our Speed of Rotating to the Right
	SpriteRenderer srend; // Allows us to Press the Sprite

	// Set The Constructors
	void Awake() {
		srend = GetComponent<SpriteRenderer>();
	}

	// Everytime the Mouse-Left Click stays it'll make the Player Rotate to the Right
	void OnMouseDrag() {
		Player.transform.Rotate(0, rotSpeed * Time.deltaTime, 0); // Update the Player's Rotation towords the Right
	}
}
