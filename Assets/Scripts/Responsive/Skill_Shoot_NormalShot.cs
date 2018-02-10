using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;

public class Skill_Shoot_NormalShot : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

	// Variables
	public GameObject bullet; // Object that'll be Instantiated
	public Transform nuzzle; // Where we gonna spawn the Bullet
	public Color skillUsing;
	public float firingRate; // Number of bullet fired a second
	private bool isFiring = false; // Check if we're Firing
	private float counter = 2.0f; // Check if we're gonna Fire or not
	public const int skillValue = 1; // Number that's gonna be used in Character Creation
	Color notSkillActive; // Color to reset the Color
	

	void Start() {
		notSkillActive = gameObject.GetComponent<Image>().color;
		// skillUsing = GetComponent<Image>().color;
	}
	void Update() {
		if(isFiring) {
			gameObject.GetComponent<Image>().color = skillUsing;
			if(counter > 1/firingRate) {
				Instantiate(bullet, nuzzle.position, nuzzle.rotation);
				counter = 0.0f;
			} else {
				counter += 1 * Time.deltaTime;
			}
		} else {
			gameObject.GetComponent<Image>().color = notSkillActive;
		}
	}
	public virtual void OnPointerDown(PointerEventData ped) {
		gameObject.GetComponent<Image>().color = skillUsing;
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
	public bool GetisFiring() {
		return isFiring;
	}
}
