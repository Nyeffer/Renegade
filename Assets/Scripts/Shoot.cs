using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shoot : MonoBehaviour {

	public GameObject bullet;
	public Transform nuzzle;

	public float fireRate;
	public float lastFired;

	void Start() {
		fireRate = 10.0f;
		lastFired = 0f;
	}

	void Update() {
		if(Input.GetKeyDown(KeyCode.Mouse0)) {
			if(Time.time - lastFired > 1/fireRate) {
				lastFired = Time.time;
				Instantiate(bullet, nuzzle.transform.position, nuzzle.transform.rotation);
			}
		}
	}
}
