using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerHealth : MonoBehaviour {

	public int maxHealth = 100;
	public int curHealth;
	public Slider hpBar;

	bool isDead;
	bool isDamaged;

	void Awake() {
		hpBar.maxValue = maxHealth;
		curHealth = maxHealth;
		TakeDamage(0);
	}

	void Update() {
		if(isDamaged) {
			// Do Something
		} else {
			// Do Something else
		} 
		isDamaged = false;
	}

	public void TakeDamage(int damageDealt) {
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
