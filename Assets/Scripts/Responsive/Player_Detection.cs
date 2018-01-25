using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player_Detection : MonoBehaviour {
	private GameObject target;
	private Rigidbody rigidbody;
	public Vector3 velocity;
	public bool isSeeking;
	public float moveSpeed;
	private Transform[] Waypoints;
	public Transform WaypointParent;
	private int numOfPoints;
	int counter = 0;

	public float distanceToSeek = 10;

	void Awake() {
		rigidbody = GetComponent<Rigidbody>();
		velocity = rigidbody.velocity;
	}

	void Start() {
		
		moveSpeed = 1.0f;
		numOfPoints = WaypointParent.GetChildCount();
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

				if(pos.magnitude > 2) {
					this.transform.Translate(0, 0, moveSpeed * Time.deltaTime);
				}
			}
		} else {
			Vector3 pos = Waypoints[counter].position - this.transform.position;
			this.transform.rotation = Quaternion.Slerp(this.transform.rotation, Quaternion.LookRotation(pos), 0.1f);

			if(pos.magnitude > 2) {
				counter++;
				if( counter > Waypoints.Length) {
					counter = 0;
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
