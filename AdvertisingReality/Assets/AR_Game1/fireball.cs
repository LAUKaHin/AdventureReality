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
    int timestage = 280;
    public bool playing = true;
    void Start()
    {
        //Start the coroutine we define below named ExampleCoroutine.
        StartCoroutine(ExampleCoroutine());
    }
    
    IEnumerator ExampleCoroutine()
    {
        while (playing)
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
                    //rb.AddForce(new Vector3((1 - (UnityEngine.Random.Range(0, 1) * 2)) * UnityEngine.Random.Range(2500, 5000 ), (1 - (UnityEngine.Random.Range(0, 1) * 2)) * UnityEngine.Random.Range(2500, 5000), (1 - (UnityEngine.Random.Range(0, 1) * 2)) * UnityEngine.Random.Range(2500, 5000)));
                    rb.AddForce(new Vector3(UnityEngine.Random.Range(-200, 200), UnityEngine.Random.Range(-200, 200), UnityEngine.Random.Range(-2000, -5000)));
                    if (timestage > 70)
                        timestage = timestage -12;
                    else
                        timestage = 70;
                }
                print("fireballstage:" + fireballstage);
                print("timestage:" + timestage);

            }
            }
        }
    }
    
    



