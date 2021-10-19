using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class zombie : MonoBehaviour
{
    // Reference to the Prefab. Drag a Prefab into this field in the Inspector.
    public GameObject[] zombiePrefabs;
    void Start()
    {
        //Start the coroutine we define below named ExampleCoroutine.
        StartCoroutine(ExampleCoroutine());
    }
    
    IEnumerator ExampleCoroutine()
    {
        while(true)
            if (true)
            {//Print the time of when the function is first called.
                Debug.Log("Started Coroutine at timestamp : " + Time.time);
                // Instantiate at position (0, 0, 0) and zero rotation.
                int myNum = 1;
                Console.WriteLine(myNum);
                //yield on a new YieldInstruction that waits for 5 seconds.
                yield return new WaitForSeconds(1f);//wait for 2s
                //After we have waited 5 seconds print the time again.
                Debug.Log("Finished Coroutine at timestamp : " + Time.time);
                if (myNum == 1)
                {
                    GameObject zombie = null;
                    int randNum = (int)UnityEngine.Random.Range(0, zombiePrefabs.Length);
                    zombie = Instantiate(zombiePrefabs[randNum], new Vector3(0, 0, 0), Quaternion.Euler(new Vector3(0, 0, 0))) as GameObject;
                    zombie.transform.position = this.transform.position;
                    Rigidbody rb = zombie.GetComponent<Rigidbody>();
                    this.transform.Translate(this.transform.position);
                    rb.AddForce(new Vector3(UnityEngine.Random.Range(0, 0), UnityEngine.Random.Range(0, 0),0));
                    
                }

            }
        }
    }
    
    



