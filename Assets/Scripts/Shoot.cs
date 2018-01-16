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
				var shoot = (GameObject)Instantiate(bullet, nuzzle.transform.position, nuzzle.transform.rotation);
				shoot.GetComponent<Rigidbody>().velocity = shoot.transform.forward * 6;
				Destroy(shoot, 3.0f);
			}
		}
	}
}
