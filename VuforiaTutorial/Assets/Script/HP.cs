using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HP : MonoBehaviour
{
    public Slider hp;
    void Start()
    {
        hp.GetComponent<Slider>();
        hp.minValue = 0;
        hp.maxValue = 10;
    }

    // Update is called once per frame
    void Update()
    {
    }
    public void LossHP()
    {
        hp.value--;
        print("HP losted");
    }
}
