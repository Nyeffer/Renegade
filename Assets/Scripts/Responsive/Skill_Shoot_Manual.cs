using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;

public class Skill_Shoot_Manual : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

	// Variables
	public GameObject bullet; // Object for Instantiation
	public Transform nuzzle; // Position to Spawn bullet
	float charge; // Counter to manager the Damage Multiplier
	int damMultiplier; 
	private int origDamage; // Original Damage from Bullet
	private int damage; // Damage from Bullet
	public AudioClip sound;
	private AudioSource source;
	

	void Start() {
		charge = 0.0f;
		source = GetComponent<AudioSource>();
		origDamage = bullet.GetComponent<BulletBehavior>().GetDamage();
		damage = origDamage;
		damMultiplier = 1;
	}

	void Update() {
		charge += Time.deltaTime;
		if(charge <= 1.0f) {
			gameObject.GetComponent<Image>().color = Color.green;
			damMultiplier = 1;
		} else if(charge >= 1.1f && charge <= 2.0f) {
			gameObject.GetComponent<Image>().color = Color.yellow;
			damMultiplier = 5;
		} else if(charge >= 2.1f && charge <= 3.0f) {
			gameObject.GetComponent<Image>().color = Color.red;
			damMultiplier = 10;
		} else if( charge > 3.0f) {
			charge = 0.0f;
		}
	}


	
	public virtual void OnPointerDown(PointerEventData ped) {
		bullet.GetComponent<BulletBehavior>().SetDamage((int)(damMultiplier * damage));
		Instantiate(bullet, nuzzle.position, nuzzle.rotation);
		source.PlayOneShot(sound, charge * charge);
		Debug.Log(bullet.GetComponent<BulletBehavior>().GetDamage());
	}

	public virtual void OnPointerUp(PointerEventData ped) {
		bullet.GetComponent<BulletBehavior>().SetDamage(origDamage);
		charge = 0.0f;
	}


}
