using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class fireball : MonoBehaviour
{
    // Reference to the Prefab. Drag a Prefab into this field in the Inspector.
    public GameObject[] ballPrefabs;
    public GameObject[] notballPrefabs;
    public int fireballstage = 4;
    int timestage = 400;
    void Start()
    {
        //Start the coroutine we define below named ExampleCoroutine.
        StartCoroutine(ExampleCoroutine());
    }
    
    IEnumerator ExampleCoroutine()
    {
        while (true)
        {
            if (true)
            {//Print the time of when the function is first called.
                Debug.Log("Started Coroutine at timestamp : " + Time.time);
                // Instantiate at position (0, 0, 0) and zero rotation.
                int myNum = 1;
                Console.WriteLine(myNum);
                //yield on a new YieldInstruction that waits for 5 seconds.
                yield return new WaitForSeconds(UnityEngine.Random.Range(50, 100) * timestage / 10000f);
                //After we have waited 5 seconds print the time again.
                Debug.Log("Finished Coroutine at timestamp : " + Time.time);
                if (myNum == 1)
                {
                    GameObject ball = null;
                    int randNum = (int)UnityEngine.Random.Range(0, ballPrefabs.Length);
                    ball = Instantiate(ballPrefabs[randNum], this.transform.position, Quaternion.Euler(new Vector3(0, 0, 0))) as GameObject;
                    ball.transform.position = this.transform.position;
                    Rigidbody rb = ball.GetComponent<Rigidbody>();
                    //this.transform.Translate(this.transform.position);
                    rb.AddForce(new Vector3(UnityEngine.Random.Range(-100, 100), UnityEngine.Random.Range(-100, 100), -2000));
                    //rb.AddForce(0,0,-2000);
                    if (timestage > 100)
                        timestage = timestage -12;
                    else
                        timestage = 100;
                }
                print("fireballstage:" + fireballstage);
                print("timestage:" + timestage);

            }
            }
        }
    }
    
    



