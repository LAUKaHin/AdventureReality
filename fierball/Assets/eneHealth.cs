using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class eneHealth : MonoBehaviour
{
	public int player = 10;
	public int ene = 10;
	//public HP  
	//public Text gameover;
	public float healthBarLength;
	int stage = 4;
	public int stagex = 0;
	private fireball changevalue;
	public Slider Slider;


	void Start()
	{
		healthBarLength = Screen.width -20;
		//gameover.gameObject.SetActive(false);
	}


	void Update()
	{
		AddjustCurrentHealth(0);
		if (stagex == 1)
				changevalue.fireballstage--;
				stagex = 0;

	}

	

	void OnGUI()
    {
		GUI.backgroundColor = Color.red;
		if (stage == 4)
		{
			GUI.contentColor = Color.white;
		}
		else if (stage == 3)
		{
			GUI.contentColor = Color.green;
		}
		else if (stage == 2)
		{
			GUI.contentColor = Color.yellow;
		}
		else if (stage == 1)
		{
			GUI.contentColor = Color.red;
		}

		GUI.Box(new Rect((1-(ene / (float)player))*300 + 10, 10, healthBarLength, 20), ene + "/" + player);


	}

   

    public void AddjustCurrentHealth(int adj)
	{
		ene += adj;

		if (ene <= 0)
			if (stage > 1)
			{
				stage--;
				ene = ene + 10;
				//stagex = 1;
				//gameover.gameObject.SetActive(false);
			}
			else
			{
				//gameover.gameObject.SetActive(true);
			}

		if (ene > player)
			ene = player;

		if (player < 1)
			player = 1;
		if (ene < 0)
			ene = 0;

		healthBarLength = (Screen.width -20) * (ene / (float)player);
	}
	
	
			
		
}
