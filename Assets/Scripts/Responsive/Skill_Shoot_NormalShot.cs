using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;

public class Skill_Shoot_NormalShot : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

	// Variables
	public GameObject bullet; // Object that'll be Instantiated
	public Transform nuzzle; // Where we gonna spawn the Bullet
	public int firingRate = 1; // Number of bullet fired a second
	private bool isFiring = false; // Check if we're Firing
	private float counter = 0.0f; // Check if we're gonna Fire or not
	void Update() {
		if(isFiring) {
			if(counter > 1/firingRate) {
				Instantiate(bullet, nuzzle.position, nuzzle.rotation);
				counter = 0.0f;
			} else {
				counter += Time.deltaTime;
			}
		}
	}
	public virtual void OnPointerDown(PointerEventData ped) {
		
	}

	public virtual void OnPointerUp(PointerEventData ped) {
		if(isFiring) {
			SetisFire(false);
		} else {
			SetisFire(true);
		}
	}

	public void SetisFire(bool FireorNot) {
		isFiring = FireorNot;
	}
}
