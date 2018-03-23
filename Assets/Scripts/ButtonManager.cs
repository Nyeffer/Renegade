using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour {

	public GameObject[] Buttons;
	// Use this for initialization
	void Awake() {
		for(int i = 0; i > Buttons.Length; i++) {
			if(Buttons[i].gameObject.tag == Shooting) {
				Buttons[i].GetComponent<Skill_Shoot_NormalShot>().SetisActive(false);
			} else if(Buttons[i].gameObject.tag == NoneShooting) {
				Buttons[i].GetComponent<Skill_Shoot_ZoomShot>().SetisActive(false);
			}
		}
	}
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
