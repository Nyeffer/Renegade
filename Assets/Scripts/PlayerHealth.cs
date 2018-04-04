using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerHealth : MonoBehaviour {

	public int maxHealth = 100;
	public float curHealth;
	public GameObject Weapon;
	public Slider hpBar;
	private Animator anim;
	float counter;

	bool isDead;
	bool isDamaged;

	void Awake() {
		hpBar.maxValue = maxHealth;
		curHealth = maxHealth;
		TakeDamage(0);
	}

	void Start() {
		counter = 0;
		anim = GetComponent<Animator>();
	}

	void Update() {	
		if(isDead) {
			anim.SetBool("isDead", true);
			if(counter != 3) {
				counter += Time.deltaTime;
				Weapon.SetActive(false);				
			} else {
				SceneManager.LoadScene("Lose", LoadSceneMode.Single);
			}
		}
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
