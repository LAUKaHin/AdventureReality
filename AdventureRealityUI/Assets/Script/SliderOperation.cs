using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderOperation : MonoBehaviour
{
    public Slider floorSlide;
    public Text floorText;
    private float befloorValue = 1;
    private int pushCount;

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
        print("Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString() + ", Push count: " + pushCount.ToString());
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
        befloorValue = floorSlide.value;
    }
    public void UpButtonChangeValue()
    {
        floorSlide.value++;
        pushCount++;
        print("Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString() + ", Push count: " + pushCount.ToString());
        if (floorSlide.value < befloorValue++)
        {
            floorSlide.value = befloorValue++;
            print("execute case 1" + "Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString());
        }
        else if (floorSlide.value == befloorValue)
        {
            floorSlide.value+=2;
            print("execute case 2" + "Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString());
        }
        befloorValue = floorSlide.value;
    }
    public void DownButtonChangeValue()
    {
        floorSlide.value--;
        pushCount++;
        print("Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString() + ", Push count: " + pushCount.ToString());
        if (floorSlide.value < befloorValue--)
        {
            floorSlide.value = befloorValue--;
            print("execute case 1" + "Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString());
        }
        else if (floorSlide.value == befloorValue)
        {
            floorSlide.value-=2;
            print("execute case 2" + "Before: " + befloorValue.ToString() + ", After: " + floorSlide.value.ToString());
        }
        befloorValue = floorSlide.value;
    }
}
