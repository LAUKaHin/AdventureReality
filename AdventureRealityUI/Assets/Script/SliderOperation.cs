using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderOperation : MonoBehaviour
{
    public Slider floorSlide;
    public Text floorText;

    public void Start()
    {
        for (int i = 0; i < gameObject.transform.GetChild(0).childCount; i++)
        {
            if (gameObject.transform.GetChild(0).GetChild(i).gameObject.GetComponent<LoopPointer>().floorFlag == 1)
            {
                gameObject.transform.GetChild(0).GetChild(i).gameObject.SetActive(true);
            }
            else
            {
                gameObject.transform.GetChild(0).GetChild(i).gameObject.SetActive(false);
            }
        }
        
    }
    public void SliderChangeValue()
    {
        floorText.text = floorSlide.value.ToString() + "F";
        for (int i = 0; i < gameObject.transform.GetChild(0).childCount; i++)
        {
            if (gameObject.transform.GetChild(0).GetChild(i).gameObject.GetComponent<LoopPointer>().floorFlag == floorSlide.value)
            {
                gameObject.transform.GetChild(0).GetChild(i).gameObject.SetActive(true);
            }
            else
            {
                gameObject.transform.GetChild(0).GetChild(i).gameObject.SetActive(false);
            }
        }
    }
    public void UpButtonChangeValue()
    {
        floorSlide.value++;
    }
    public void DownButtonChangeValue()
    {
        floorSlide.value--;
    }
}
