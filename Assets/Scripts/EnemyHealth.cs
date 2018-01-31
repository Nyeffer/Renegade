using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHealth : MonoBehaviour {

	public int maxHealth = 100;
	public int curHealth;
	public Material FullHp;
	public Material NearDeath;

	private GameObject Player_bullet;

	private Renderer renderer;

	bool isDead;
	bool isDamaged;

	void Awake() {
		renderer = GetComponent<Renderer>();
		curHealth = maxHealth;
		TakeDamage(0);
		renderer.material = FullHp;
	}

	void Update() {
		if(isDamaged) {
			// Do Something
		} else {
			// Do Something else
		} 
		isDamaged = false;
		if(curHealth <= 25) {
			renderer.material = NearDeath;
		}
	}

	public void TakeDamage(int damageDealt) {
		isDamaged = true;
		curHealth -= damageDealt;

		if(curHealth <= 0 && !isDead) {
			Death();
		}
	}

	void Death() {
		isDead = true;
		Destroy(this.gameObject);
	}

	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "PlayerObjects" && gameObject.tag == "Enemy") {
			Player_bullet = col.gameObject;
			TakeDamage(Player_bullet.GetComponent<BulletBehavior>().GetDamage());
			Destroy(col.gameObject);
		}
 	}
}
