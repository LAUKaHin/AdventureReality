using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Deball : MonoBehaviour
{
    public GameObject[] ballPrefabs;
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "Plane0")
        {
            Destroy(this.gameObject);
            other.gameObject.GetComponent<PlayerHealth>().ene--;
        }
        if (other.gameObject.name == "Cylinder")
        {
            Rigidbody rb = this.GetComponent<Rigidbody>();
            rb.AddForce(new Vector3(0, 0, 4000));
        }
        if (other.gameObject.name == "Cylinder (1)")
        {
            Rigidbody rb = this.GetComponent<Rigidbody>();
            rb.AddForce(new Vector3(0, 0, 4000));
        }
        if (other.gameObject.name == "Plane 1")
        {
            Destroy(this.gameObject);
            other.gameObject.GetComponent<HP>().losshp++;
        }
        if (other.gameObject.name == "Plane 2")
        {
            Destroy(this.gameObject);
        }
        if (other.gameObject.name == "ball")
        {
            Destroy(this.gameObject);
        }
    }
}
