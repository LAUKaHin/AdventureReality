using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MapGrid : MonoBehaviour
{
	public GameObject prefab; // This is our prefab object that will be exposed in the inspector

    //public int numberToCreate; // number of objects to create. Exposed in inspector
    public MapData[] md;

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

		for (int i = 0; i < md.Length; i++)
		{
			// Create new instances of our prefab until we've created as many as we specified
			newObj = (GameObject)Instantiate(prefab, transform);
            newObj.GetComponent<Image>().sprite = md[i].map;
            newObj.GetComponent<SceneLoader>().sceneName = md[i].ar_scene_name;
            newObj.transform.Find("Quantity").GetComponent<Text>().text = md[i].name;

			// Randomize the color of our image
			//newObj.GetComponent<Image>().color = Random.ColorHSV();
		}

	}
}