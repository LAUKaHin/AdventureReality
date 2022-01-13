using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cannon_Fire : MonoBehaviour
{
	public GameObject Shell;
	public GameObject Fire_point;
	public float Time_fire;
	public float StartTime_fire;

    // Start is called before the first frame update
    void Start()
    {
        Fire_Time();
    }
    // Update is called once per frame
    void Update()
    {
        		
    }
	void Fire_Time()
	{
		InvokeRepeating("Fire_timecounter",StartTime_fire,Time_fire);	
	}
	void Fire_timecounter()
	{
		Instantiate(Shell,Fire_point.transform.position,Fire_point.transform.rotation);		
		
	}
	
}
