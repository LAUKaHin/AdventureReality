using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Disabled : MonoBehaviour
{
    public void RidParent()
    {
        RectTransform esc = this.GetComponent<RectTransform>();
        esc.parent.gameObject.SetActive(false);
    }
    public void Confirm()
    {
        RectTransform yes = this.GetComponent<RectTransform>();
        yes.parent.gameObject.SetActive(false);
    }
}
