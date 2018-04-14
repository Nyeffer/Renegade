using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Heal : MonoBehaviour {

	public float rotSpeed = 10;
	private GameObject player;
	public int healAmount = 0;
		

	void Update() {
		transform.Rotate(transform.position * Time.deltaTime, Space.World);
	}
	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "Player") {
			col.GetComponent<PlayerHealth>().TakeDamage(-healAmount);
			Destroy(this.gameObject);
		}
	}
}
