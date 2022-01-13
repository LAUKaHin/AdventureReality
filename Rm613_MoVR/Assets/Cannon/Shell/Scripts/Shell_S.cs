using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shell_S : MonoBehaviour
{
	public Rigidbody shell_rb;
    public float move_speed_min;
	public float move_speed_max;
	public float Time_volume;
    // Start is called before the first frame update
    void Start()
    {
	
        shell_rb.velocity = transform.forward * Random.Range(move_speed_min ,move_speed_max);
		
    }

    // Update is called once per frame
    void FixedUpdate()
    {
      
    }
	private void OnTriggerEnter(Collider other)
	{		
		
		if(other.gameObject.tag == "wall")
		{
			InvokeRepeating("Time_delay",2,1);			
		}
		if(other.gameObject.tag == "Player_2" )
		{
			Destroy(this.gameObject);
			GameObject.Find("Time_Counter").GetComponent<TimeCounter>().Time_limit -= Time_volume;
		}
	}
	void OnCollisionEnter(Collision other) 
	{
		if(other.gameObject.tag == "wall")
		{
			InvokeRepeating("Time_delay",2,1);			
		}
		if(other.gameObject.tag == "ground" )
		{
			InvokeRepeating("Time_delay",2,1);	
		}
		if(other.gameObject.tag == "Player_2" )
		{
			Destroy(this.gameObject);
			GameObject.Find("Time_Counter").GetComponent<TimeCounter>().Time_limit -= Time_volume;
		}
		if(other.gameObject.tag == "Player" )
		{
			Destroy(this.gameObject);
			GameObject.Find("Time_Counter").GetComponent<TimeCounter>().Time_limit -= Time_volume;
		}
		
	}
	void Time_delay()
		{
			Destroy(this.gameObject);
			this.CancelInvoke();
		}
}
