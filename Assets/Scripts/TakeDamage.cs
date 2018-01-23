using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TakeDamage : MonoBehaviour {
	public int maxHealth = 100;
	public int Atk = 10;
	public int curHealth;

	void Start() {
		curHealth = maxHealth;
	}

	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "PlayerObjects" && gameObject.tag == "Enemy") {
			curHealth -= Atk;
			Debug.Log(curHealth);
		}

		if( col.gameObject.tag == "EnemyObjects" && gameObject.tag == "Player") {
			curHealth -= Atk;
			Debug.Log(curHealth);
		}
	}


}
