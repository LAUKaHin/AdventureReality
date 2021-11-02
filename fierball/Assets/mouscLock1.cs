using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mouscLock1 : MonoBehaviour
{
    public float mouseSensitivity = 100f;
    public Transform Cylinder;
    Rigidbody m_Rigidbody;
    float m_Speed;
    float m_stop;
    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        //Fetch the Rigidbody component you attach from your GameObject
        m_Rigidbody = GetComponent<Rigidbody>();
        //Set the speed of the GameObject
        m_Speed = 50.0f;
        m_stop = 0f;
    }
    // Update is called once per frame
    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X");
        float mouseY = Input.GetAxis("Mouse Y");


        if (/*Input.GetKey(KeyCode.LeftArrow) /*or left == 1*/mouseX > 0)
        {
            //Move the Rigidbody upwards constantly at speed you define (the green arrow axis in Scene view)
            m_Rigidbody.velocity = transform.right * m_Speed;
            //left = 0;
            //xx = 1;
        }
        else if (/*Input.GetKey(KeyCode.RightArrow) /*or right == 1*/mouseX < 0)
        {
            //Move the Rigidbody downwards constantly at the speed you define (the green arrow axis in Scene view)
            m_Rigidbody.velocity = -transform.right * m_Speed;
            //right = 0;
            //xx = 1;
        }
        else
        {
            //xx = 0;
            m_Rigidbody.velocity = transform.right * m_stop;
        }
    }
}
