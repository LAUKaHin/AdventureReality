using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PopulateGrid : MonoBehaviour
{
	public GameObject prefab; // This is our prefab object that will be exposed in the inspector

	//public int numberToCreate; // number of objects to create. Exposed in inspector
    public string[] area = { "沙田", "觀塘", "大埔", "黃大仙", "深水埗" };

	void Start()
	{
		Populate();
	}

	void Update()
	{

	}

	void Populate()
	{
		GameObject newObj; // Create GameObject instance

		for (int i = 0; i < area.Length; i++)
		{
			// Create new instances of our prefab until we've created as many as we specified
			newObj = (GameObject)Instantiate(prefab, transform);
            newObj.transform.Find("Quantity").GetComponent<Text>().text = area[i];

			// Randomize the color of our image
			newObj.GetComponent<Image>().color = Random.ColorHSV();
		}

	}
}