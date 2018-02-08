﻿using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Move : MonoBehaviour
{   
    public float moveSpeed;
    public float rotSpeed;
    private int sprintSpeed;
    private bool isSprinting;
    public float Stamina = 10;

    public VirtualJoyStick controls;

    public Slider staminaBar;

    void Start() {
        moveSpeed = 3.0f;
        rotSpeed = 150.0f;
        sprintSpeed = 3;
        staminaBar.maxValue = 10;
        isSprinting = false;
    }

    public void MoveForward(Vector3 direction, float moveSpeed) {
        if(isSprinting) {
            gameObject.transform.Translate(direction * (Time.deltaTime * moveSpeed * 2));
        } else {
            gameObject.transform.Translate(direction * (Time.deltaTime * moveSpeed));
        }
    }

    public void MoveBackward(Vector3 direction, float moveSpeed) {
       if(isSprinting) {
            gameObject.transform.Translate(-direction * (Time.deltaTime * moveSpeed * 2));
        } else {
            gameObject.transform.Translate(-direction * (Time.deltaTime * moveSpeed));
        }
    }

    public void MoveRight(Vector3 direction, float moveSpeed) {
        if(isSprinting) {
            gameObject.transform.Translate(direction * (Time.deltaTime * moveSpeed * 2));
        } else {
            gameObject.transform.Translate(direction * (Time.deltaTime * moveSpeed));
        }
    }

    public void MoveLeft(Vector3 direction, float moveSpeed) {
        if(isSprinting) {
            gameObject.transform.Translate(-direction * (Time.deltaTime * moveSpeed * 2));
        } else {
            gameObject.transform.Translate(-direction * (Time.deltaTime * moveSpeed));
        }
    }

    public void RotateLeft(Vector2 direction, float rotSpeed) {
        gameObject.transform.Rotate(0, direction.x * (rotSpeed * Time.deltaTime), 0);
    }

    public void RotateRight(Vector2 direction, float rotSpeed) {
        gameObject.transform.Rotate(0, direction.x * (rotSpeed * Time.deltaTime), 0);
    }

    public void Sprint(bool NowOrNot) {      
            SetisSprinting(NowOrNot);
    }

    public bool GetisSprinting() {
        return isSprinting;
    }


    public void SetisSprinting(bool NowSprint) {
        isSprinting = NowSprint;
    }
}