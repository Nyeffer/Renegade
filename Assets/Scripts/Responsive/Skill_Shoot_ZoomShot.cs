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
	private bool isActive = false;  // Check if the Skill is active or Not
	public GameObject DirectionControls; // Deactivate everytime Zoom is Active
	public GameObject ShootingButton; // Will shoot empower shots

	void Start() {
		notSkillActive = gameObject.GetComponent<Image>().color;
		DirectionControls.SetActive(true);
		ShootingButton.SetActive(false);
		Cam.GetComponent<CameraChange>().ZoomOut();
	}

	void Update() {
		if (isActive) {
			gameObject.GetComponent<Image> ().color = skillUsing;
			DirectionControls.SetActive(false);
			ShootingButton.SetActive(true);
			Cam.GetComponent<CameraChange>().ZoomOut();
		} else {
			gameObject.GetComponent<Image> ().color = notSkillActive;
			DirectionControls.SetActive(true);
			ShootingButton.SetActive(false);
			Cam.GetComponent<CameraChange>().ZoomIn();
		}	
	}

	public virtual void OnPointerDown(PointerEventData ped) {
		
	}

	public virtual void OnPointerUp(PointerEventData ped) {
		if(isActive) {
			SetisActive(false);
		} else {
			SetisActive(true);
		}
	}

	public bool GetisActive	() {
		return isActive;
	}

	public void SetisActive(bool activate) {
		if(activate == true) {
		}
		isActive = activate;

	}
		
}
