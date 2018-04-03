using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour {

	public GameObject[] Buttons;
	private bool[] switchs;
	private string name;
	// Use this for initialization


	void Awake() {
		name = gameObject.name;
		for(int i = 1; i < Buttons.Length + 1; i++) {
			if(Buttons[i].gameObject.tag == "Shooting") {
				Buttons[i].GetComponent<Skill_Shoot_NormalShot>().SetisActive(false);
			} else if(Buttons[i].gameObject.tag == "NoneShooting") {
				Buttons[i].GetComponent<Skill_Shoot_ZoomShot>().SetisActive(false);
			}
		}
	}

	
	// Update is called once per frame
	void Update () {
		Debug.Log(Buttons[0].GetComponent<Skill_Shoot_NormalShot>().GetisActive().ToString() +
				  Buttons[1].GetComponent<Skill_Shoot_NormalShot>().GetisActive().ToString() +
				  Buttons[2].GetComponent<Skill_Shoot_ZoomShot>().GetisActive().ToString());
	}
}
