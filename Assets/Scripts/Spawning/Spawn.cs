using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour {

	public GameObject Enemy;
	public Transform SpawnPoint;

	public int maxNum_Enemies = 1;
	public float spawnRate = 1;
	private int num_Spawned;
	void Update() {
		if(num_Spawned <= maxNum_Enemies) {
			if(spawnRate >= 5) {
				Debug.Log("Spawn");
				Instantiate(Enemy, SpawnPoint.transform.position, Quaternion.identity);
				num_Spawned++;
				spawnRate = 0;
			} else {
				spawnRate += Time.deltaTime;
			}
		}
	}
}
