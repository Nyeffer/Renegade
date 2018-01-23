using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Detection : MonoBehaviour {
	private GameObject target;
	private Rigidbody rigidbody;
	public Vector3 velocity;
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
			if(Vector3.Distance(target.transform.position, this.transform.position) < 10) {
				Vector3 pos = target.transform.position - this.transform.position;
				this.transform.rotation = Quaternion.Slerp(this.transform.rotation, Quaternion.LookRotation(pos), 0.1f);

				if(pos.magnitude > 5) {
					this.transform.Translate(0, 0, moveSpeed * Time.deltaTime);
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
}
