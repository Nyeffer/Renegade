using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TakeDamage : MonoBehaviour, IDamageable<int> {
	public int maxHealth = 100;
	public int Atk;
	public int curHealth;

	void Start() {
		curHealth = maxHealth;
	}

	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "PlayerObjects" && gameObject.tag == "Enemy") {
			
			curHealth -= Atk;
			Debug.Log(Atk);
		}

		if( col.gameObject.tag == "EnemyObjects" && gameObject.tag == "Player") {
			curHealth -= Atk;
			Debug.Log(curHealth);
		}
	}

	public void SetDamage(int damage) {
		Atk = damage;
	}

	public int GetDamage() {
		return Atk;
	}
}
