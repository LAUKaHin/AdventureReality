using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class PlayerHealth : MonoBehaviour
{
	public int player = 10;
	public int ene = 10;
	public Text gameover;
	public float healthBarLength;
	int stage = 0;
	public int stagex = 0;
	private fireball changevalue;
	public float healthBarYpos;
	public GameObject fireball;


	void Start()
	{
		healthBarLength = Screen.width / 2;
		healthBarYpos = Screen.height;
		gameover.gameObject.SetActive(false);
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
		if (ene == 10)
		{
			GUI.contentColor = Color.white;
		}
		else if (ene > 7)
		{
			GUI.contentColor = Color.green;
		}
		else if (ene > 3)
		{
			GUI.contentColor = Color.yellow;
		}
		else if (ene > 0)
		{
			GUI.contentColor = Color.red;
		}

		GUI.Box(new Rect(10, 1800, healthBarLength, 50), ene + "/" + player);



	}



	public void AddjustCurrentHealth(int adj)
	{
		ene += adj;

		if (ene <= 0)
			if (stage > 0)
			{
				stage--;
				ene = ene + 10;
				//stagex = 1;
				gameover.gameObject.SetActive(false);
				fireball.gameObject.SetActive(true);
			}
			else
			{
				gameover.gameObject.SetActive(true);
				fireball.gameObject.SetActive(false);
			}

		if (ene > player)
			ene = player;

		if (player < 1)
			player = 1;
		if (ene < 0)
			ene = 0;

		healthBarLength = (Screen.width / 2) * (ene / (float)player);
	}




}
