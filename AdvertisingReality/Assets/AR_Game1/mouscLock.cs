using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mouscLock : MonoBehaviour
{
    public float mouseSensitivity = 100f;
    public Transform Cylinder;
    Rigidbody m_Rigidbody;
    float m_Speed;
    float m_stop;
    int up;
    int left;
    int right;
    int down;
    int xx = 1;
    int yy = -1;
    int xy = 0;
    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        //Fetch the Rigidbody component you attach from your GameObject
        m_Rigidbody = GetComponent<Rigidbody>();
        //Set the speed of the GameObject
        m_Speed = 80.0f;
        m_stop = 0f;
    }
    public void upa()
    {
        up = 1;
    }
    public void lefta()
    {
        left = 1;
    }
    public void righta()
    {
        right = 1;
    }
    public void downa()
    {
        down = 1;
    }

    // Update is called once per frame
    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X");
        float mouseY = Input.GetAxis("Mouse Y");

        xy = xx;
        xx = yy;
        yy = xy;
        if (xx == 1)
        {

            if (/*Input.GetKey(KeyCode.LeftArrow) /*or left == 1*/mouseX > 0)
            {
                //Move the Rigidbody upwards constantly at speed you define (the green arrow axis in Scene view)
                m_Rigidbody.velocity = transform.right * m_Speed;
                left = 0;
                //xx = 1;
            }
            else if (/*Input.GetKey(KeyCode.RightArrow) /*or right == 1*/mouseX < 0)
            {
                //Move the Rigidbody downwards constantly at the speed you define (the green arrow axis in Scene view)
                m_Rigidbody.velocity = -transform.right * m_Speed;
                right = 0;
                //xx = 1;
            }
            else
            {
                //xx = 0;
                m_Rigidbody.velocity = transform.right * m_stop;
            }
        }
        if (yy == 1) 
        { 

            if (/*Input.GetKey(KeyCode.DownArrow) /*or down == 1*/mouseY < 0)
            {
                //Move the Rigidbody to the right constantly at speed you define (the red arrow axis in Scene view)
                m_Rigidbody.velocity = transform.forward * m_Speed;
                down = 0;
               //yy = 1;
            }
            else if (/*Input.GetKey(KeyCode.UpArrow) /*or up == 1*/mouseY > 0)
            {
                //Move the Rigidbody to the left constantly at the speed you define (the red arrow axis in Scene view)
                m_Rigidbody.velocity = -transform.forward * m_Speed;
                up = 0;
                //yy = 1;
            }
            else
            {
                //yy = 0;
                m_Rigidbody.velocity = transform.forward * m_stop;
            }
        }
    }
}
