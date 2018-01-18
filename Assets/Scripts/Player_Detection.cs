using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Detection : MonoBehaviour {
	public GameObject target;
	public Rigidbody rigidbody;
	public Vector3 velocity;
	public Vector3 steering;
	public Vector3 desiredVelocity;
	public bool isSeeking;
	public float moveSpeed;

	void Awake() {
		rigidbody = GetComponent<Rigidbody>();
		velocity = rigidbody.velocity;
	}

	void Start() {
		moveSpeed = 1.0f;
	}

	void FixedUpdate() {
		if(isSeeking) {
			Vector3 pos = gameObject.transform.position;
			if(target.transform.position.x < transform.position.x) {
				pos.x -= moveSpeed * Time.deltaTime;
				gameObject.transform.position = pos;
			} else if ( target.transform.position.x > transform.position.x) {
				pos.x += moveSpeed * Time.deltaTime;
				gameObject.transform.position = pos;
			}
		}
	}

	void OnTriggerEnter(Collider col) {
		if(col.gameObject.tag == "Player") {
			isSeeking = true;
			Debug.Log(isSeeking);
		}
	}
}
