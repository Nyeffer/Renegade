using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour {

	public GameObject Enemy;
	public Transform SpawnPoint;

	public int maxNum_Enemies = 1;
	public float spawnRate = 1;
	private int num_Spawned;
	private bool isPlayerAround;
	private float counter;
	void Start() {
		isPlayerAround = false;
		Instantiate(Enemy, SpawnPoint.transform.position, Quaternion.identity);
		num_Spawned++;
	}
	void Update() {
		if (isPlayerAround) {
			if(num_Spawned < maxNum_Enemies) {
				if(counter > spawnRate) {
					Debug.Log("Spawn");
					Instantiate(Enemy, SpawnPoint.transform.position, Quaternion.identity);
					num_Spawned++;
					counter = 0;
				} else {
					counter += Time.deltaTime;
				}
			}
		}
	}

	void OnTriggerEnter(Collider col) {
		if (col.gameObject.tag == "Player") {
			isPlayerAround = true;
		}
	}

	void OnTriggerStay(Collider col) {
		if (col.gameObject.tag == "Player") {
			isPlayerAround = true;
		}
	}

	void OnTriggerExit(Collider col) {
		if (col.gameObject.tag == "Player") {
			isPlayerAround = false;
		}
	}
}
