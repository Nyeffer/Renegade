﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class gameClock : MonoBehaviour {

	private Text myText;
	private int mins;
	public float secs;
	public float realSec;

	void Start() {
		myText = GetComponent<Text> ();
	}

	void Update() {
		secs -= Time.deltaTime;
		realSec = secs % 60;
		mins = ((int)secs / 60);
		if(secs <= 0) {
			Application.Quit();
		}
		if (realSec < 10.0f) {
			myText.text = " " + mins.ToString()  +  " : 0"  + ((int)realSec).ToString();
		} else {
			myText.text = " " + mins.ToString()  +  " : "  + ((int)realSec).ToString();
		}
	}
		
}
