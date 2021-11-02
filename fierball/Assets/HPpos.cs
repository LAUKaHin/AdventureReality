using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HPpos : MonoBehaviour
{
    private Rect rect;
    public float healthBarYpos;
    public float healthBarLength;
    // Start is called before the first frame update
    void Start()
    {
        healthBarLength = Screen.width;
        healthBarYpos = Screen.height;
        Rect rect = new Rect(100, 100, 100, 100);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
