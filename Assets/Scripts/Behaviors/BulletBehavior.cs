﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletBehavior : MonoBehaviour {
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
        Destroy(this.gameObject, 0.5f);
    }
}
