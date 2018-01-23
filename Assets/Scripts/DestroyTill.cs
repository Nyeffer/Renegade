using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyTill : MonoBehaviour {

	public float destroyTime = 1.0f;
	void Update() {
		Destroy(gameObject, destroyTime);
	}
}
