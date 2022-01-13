using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HP : MonoBehaviour
{
    public Slider hp;
    public int losshp;
    public Canvas fill;
    public int lossinghp;
    int realhp;
    public Text win;
    // Start is called before the first frame update
    void Start()
    {
        lossinghp = 0;
        hp.minValue = 0;
        hp.maxValue = 200;
        losshp = 0;
        realhp = 200;
        win.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        hp.value = realhp;
        if (losshp > 0)
        {
            print("loss hp");
            lossinghp = lossinghp + 4;
            losshp--;
        }
        if (lossinghp>0)
        {
            realhp--;
            hp.value = realhp;
            lossinghp--;
        }
        if (hp.value <= 0)
        {
            hp.value = realhp;
            if (hp.value <= 0)
            {
                win.gameObject.SetActive(true);
                gameObject.GetComponent<fireball>().playing = false;
            }
        }
    }
    /*public void LossHP()
    {
        print("loss hp");
        hp.value--;
        print("loss hp");
    }*/
}
