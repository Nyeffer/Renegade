using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBackward : MonoBehaviour {
	// Variables
	public GameObject Player; // Object that we're gonna move
	public float moveSpeed = 1.0f; // Adjustable float to Represent our Speed of moving backward
	SpriteRenderer srend; // Allows us to Press the Sprite

	// Set The Constructors
	void Awake() {
		srend = GetComponent<SpriteRenderer>();
	}

	// Everytime the Mouse-Left Click stays it'll make the Player go Backward
	void OnMouseDrag() {
		Player.transform.Translate(0, 0, -moveSpeed * Time.deltaTime); // Update the Player's Position to move backward
	}

	void Update() {
			// Mobile Port of Movement
				Input.multiTouchEnabled = true;
				if(Input.touches[0].deltaTime > 0) {
					Player.transform.Translate(0, -moveSpeed * Input.touches[0].deltaTime, 0); // Update the Player's Position to move Backward
				// In case if the player touch it second
				if(Input.touches[1].deltaTime > 0) {
					Player.transform.Translate(0, -moveSpeed * Input.touches[1].deltaTime, 0); // Update the Player's Position to move ward
			}
		}
	}
	
}
