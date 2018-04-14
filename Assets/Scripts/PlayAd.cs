using UnityEngine;
using UnityEngine.Advertisements;
using System.Collections;
using System.Collections.Generic;


public class PlayAd : MonoBehaviour {

	// Use this for initialization
	void Start () {
		ShowAd();
	}
	
	public void ShowAd() {
		Advertisement.Show();
	}
}
