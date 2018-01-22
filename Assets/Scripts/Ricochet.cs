using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ricochet : MonoBehaviour {

	public LayerMask collisionMask;
    private Rigidbody rigidbody;
    public Vector3 velocity;
    public float moveSpeed = 3.0f;

    void Start() {
        rigidbody = GetComponent<Rigidbody>();
        velocity = rigidbody.velocity;
    }
    void Update() {
		velocity = velocity + this.transform.right * moveSpeed;
        rigidbody.velocity = velocity;
		Ray ray = new Ray(transform.position, transform.forward);
		RaycastHit hit;

		if(Physics.Raycast(ray, out hit, moveSpeed + 0.05f, collisionMask)) {
			Vector3 reflectDirection = Vector3.Reflect(ray.direction, hit.normal);
			float rot = Mathf.Atan2(reflectDirection.z, reflectDirection.x) * Mathf.Rad2Deg;
			transform.eulerAngles = new Vector3(rot, 0, 0);
		}	
		Destroy(gameObject, 1.0f);
	}
}