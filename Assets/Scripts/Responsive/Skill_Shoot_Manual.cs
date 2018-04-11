using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine;

public class Skill_Shoot_Manual : MonoBehaviour, IPointerDownHandler, IPointerUpHandler {

	// Variables
	public GameObject[] bullet; // Object for Instantiation
	public Transform nuzzle; // Position to Spawn bullet
	float charge; // Counter to manager the Damage Multiplier
	int damMultiplier; 
	private int origDamage; // Original Damage from Bullet
	private int damage; // Damage from Bullet
	public AudioClip sound;
	private AudioSource source;
	private GameObject firedBullet;
	

	void Start() {
		charge = 0.0f;
		source = GetComponent<AudioSource>();
		origDamage = bullet[0].GetComponent<BulletBehavior>().GetDamage();
		damage = origDamage;
		damMultiplier = 1;
	}

	void Update() {
		charge += Time.deltaTime;
		if(charge <= 1.0f) {
			gameObject.GetComponent<Image>().color = Color.green;
			firedBullet = bullet[0];
			damMultiplier = 1;
		} else if(charge >= 1.1f && charge <= 2.0f) {
			gameObject.GetComponent<Image>().color = Color.yellow;
			firedBullet = bullet[1];
			damMultiplier = 5;
		} else if(charge >= 2.1f && charge <= 3.0f) {
			gameObject.GetComponent<Image>().color = Color.red;
			firedBullet = bullet[2];
			damMultiplier = 10;
		} else if( charge > 3.0f) {
			charge = 0.0f;
		}
	}


	
	public virtual void OnPointerDown(PointerEventData ped) {
		firedBullet.GetComponent<BulletBehavior>().SetDamage((int)(damMultiplier * damage));
		Instantiate(firedBullet, nuzzle.position, nuzzle.rotation);
		source.PlayOneShot(sound, charge * charge);
	}

	public virtual void OnPointerUp(PointerEventData ped) {
		firedBullet.GetComponent<BulletBehavior>().SetDamage(origDamage);
		charge = 0.0f;
	}


}
