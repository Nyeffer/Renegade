using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : MonoBehaviour {
	// Variables
	public GameObject bullet; // GameObject we're gonna Instantiate
	public Transform nuzzle; // Offset where we gonne Spawn the bullet

	public float fireRate; // Number of bullets spawn/Instantiate in a second
	public float lastFired; // float that Updates everytime the bullet spawns

	SpriteRenderer srend; // Enable us to Click/Tap the Sprite

	// Set the Constructors
	void Start() {
		fireRate = 10.0f; // Default value
		lastFired = 0f; // Defualt value
		srend = GetComponent<SpriteRenderer>();
	}

	// Tap and Hold to Fire Bullets
	void OnMouseDrag() {
		// Fires everytime it's 1second divide by  the FireRate
		if(Time.time - lastFired > 1/fireRate) {
			lastFired = Time.time;
			Instantiate(bullet, nuzzle.transform.position, nuzzle.transform.rotation); // Spawns the Bullet with both the Nuzzle's Position and Rotation
		}
	}


	void Update() {
		// Mobile Port of Movement
		Input.multiTouchEnabled = true;
			if(Input.touches[0].deltaTime > 0) {
				if(Time.time - lastFired > 1/fireRate) {
					lastFired = Time.time;
					Instantiate(bullet, nuzzle.transform.position, nuzzle.transform.rotation); // Spawns the Bullet with both the Nuzzle's Position and Rotation
				}
				// In case if the player touch it second
			if(Input.touches[1].deltaTime > 0) {
				if(Time.time - lastFired > 1/fireRate) {
					lastFired = Time.time;
					Instantiate(bullet, nuzzle.transform.position, nuzzle.transform.rotation); // Spawns the Bullet with both the Nuzzle's Position and Rotation
				}
			}
		}
	}
}
