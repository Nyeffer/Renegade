using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour {

	public int maxHealth = 100;
	public float curHealth;
	public Slider hpBar;

	bool isDead;
	bool isDamaged;

	void Awake() {
		hpBar.maxValue = maxHealth;
		curHealth = maxHealth;
		TakeDamage(0);
	}

	void Update() {	
	}

	public void TakeDamage(float damageDealt) {
		isDamaged = true;
		curHealth -= damageDealt;
		hpBar.value = curHealth;

		if(curHealth <= 0 && !isDead) {
			Death();
		}
	}

	void Death() {
		isDead = true;
	}


}
