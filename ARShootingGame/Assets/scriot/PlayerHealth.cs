using UnityEngine;
using System.Collections;

public class PlayerHealth : MonoBehaviour
{
	
	RectTransform m_RectTransform;
	public int maxHealth = 100;
	public int curHealth = 100;
	public TextAlignment myText;
	public float healthBarLength;
	public int newFontSize;
	public Color newColor;
	public GameObject gameover;

	void Start()
	{
		healthBarLength = Screen.width / 2;
		


	}


	void Update()
	{
		
		
		AddjustCurrentHealth(0);

	}

	
	void OnGUI()
    {
		
		GUI.contentColor = Color.yellow;
        GUI.backgroundColor = Color.blue;
        GUI.color = Color.yellow; 

        GUI.Box(new Rect(20, 20, healthBarLength, 20), curHealth + "/" + maxHealth);
		GUI.backgroundColor = Color.blue;
		



	}

   

    public void AddjustCurrentHealth(int adj)
	{
		curHealth += adj;

		if (curHealth < 0)
			gameover.gameObject.SetActive(true);

		if (curHealth > maxHealth)
			curHealth = maxHealth;

		if (maxHealth < 1)
			maxHealth = 1;

		healthBarLength = (Screen.width / 2) * (curHealth / (float)maxHealth);
	}
}
