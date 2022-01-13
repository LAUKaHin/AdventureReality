using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ToggleMapShow : MonoBehaviour
{
    public Image im;
    public void Toggle()
    {
        im.enabled = !im.enabled;
    }
}
