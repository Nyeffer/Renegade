using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Ads : MonoBehaviour {

	public Image[] Advertisement;
	public Image place_Ads;

	private int random_Num;

	void Start() {
		place_Ads.gameObject.SetActive(false);
		random_Num = Random.Range(0, Advertisement.Length);
		place_Ads = Advertisement[random_Num];
		place_Ads.gameObject.SetActive(true);
	}


}
