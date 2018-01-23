using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnSpikes : MonoBehaviour {

	public GameObject Spike;
	public Transform[] SpawnPoints;
	void Start () {
		for(int i = 0; SpawnPoints.Length >= i; i++) {
			Instantiate(Spike, SpawnPoints[i].position, Quaternion.identity);
		}
		Destroy(gameObject, 1);	
	}
	
}
