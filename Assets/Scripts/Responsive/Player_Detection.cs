using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Detection : MonoBehaviour {
	private GameObject target;
	private Rigidbody rigidbody;
	public Vector3 velocity;
	public bool isSeeking;
	public int damage = 10;
	public float moveSpeed;
	private Transform[] Waypoints;
	public Transform WaypointParent;
	private int numOfPoints;
	float counter = 0;
	private bool isDamaging = false;
	private Animator childAnim;

	private float distanceToSeek;

	void Awake() {
		rigidbody = GetComponent<Rigidbody>();
		velocity = rigidbody.velocity;
		distanceToSeek = GetComponent<SphereCollider> ().radius;
	}

	void Start() {
		childAnim = GetComponentInChildren<Animator>();
		for(int i = 0; i < numOfPoints; i++) {
			Waypoints[i] = WaypointParent.GetChild(i).GetComponent<Transform>();
			Debug.Log(i);
		}
	}

	void FixedUpdate() {
		if(isSeeking) {
			if(Vector3.Distance(target.transform.position, this.transform.position) < distanceToSeek) {
				Vector3 pos = target.transform.position - this.transform.position;
				this.transform.rotation = Quaternion.Slerp(this.transform.rotation, Quaternion.LookRotation(pos), 0.1f);
				if (!isDamaging) {
					if (pos.magnitude > 2.5f) {
						this.transform.Translate (0, 0, moveSpeed * Time.deltaTime);
					} else {
						isDamaging = true;
						if (pos.magnitude <= 2.5f) {
							childAnim.SetBool("isAttacking", true);
						} else {
							childAnim.SetBool("isAttacking", false);
						}
					} 
				} else {
					if (counter >= 2) {
						counter = 0;
						isDamaging = false;
					} else {
						this.transform.Translate (0, 0, (moveSpeed * 0) * Time.deltaTime);
						if (pos.magnitude <= 2.5f) {
							target.GetComponent<PlayerHealth> ().TakeDamage ((int)damage * Time.deltaTime);
						}
						counter += Time.deltaTime;
					}
				}
			} 
		}
	}

	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "Player") {
			target = col.gameObject;
			isSeeking = true;	
		}
	}

	void OnTriggerStay(Collider col) {
		if(col.gameObject.tag == "Player") {
			target = col.gameObject;
			isSeeking = true;	
		}
	}

	void OnTriggerExit(Collider col) {
		if (col.gameObject.tag == "Player") {
			target = null;
			isSeeking = false;
		}
 	}
}
