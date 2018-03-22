using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;

public class Skill_Shoot_ZoomShot : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

	// Variables
	public Color skillUsing; // Color while Skill is in Use
	public const int skillValue = 1; // Number that's gonna be used in Character Creation
	Color notSkillActive; // Color to reset the Color
	public GameObject Cam; // Camera to give us access to it
	private bool isActive = false;

	void Start() {
		notSkillActive = gameObject.GetComponent<Image>().color;
	}

	void Update() {
		if (isActive) {
			gameObject.GetComponent<Image> ().color = skillUsing;
		} else {
			gameObject.GetComponent<Image> ().color = notSkillActive;
		}	
	}

	public virtual void OnPointerDown(PointerEventData ped) {
		Cam.GetComponent<CameraChange>().CamChange();
	}

	public virtual void OnPointerUp(PointerEventData ped) {
		if (!isActive) {
			SetisActive (true);
		} else {
			SetisActive (false);
		}
	}

	void SetisActive(bool activate) {
		isActive = activate;		
	}
		
}
