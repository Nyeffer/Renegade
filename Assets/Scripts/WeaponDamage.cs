using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponDamage : MonoBehaviour {
	public int damage = 10;
	// Use this for initialization
	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "Player") {
			col.GetComponent<PlayerHealth>().TakeDamage(damage);
		}
	}
}
