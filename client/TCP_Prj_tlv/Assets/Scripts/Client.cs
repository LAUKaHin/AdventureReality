using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System;
using UnityEngine.UI;

public class Client : MonoBehaviour {
    public RawImage Image;

    Networking net;
    bool b_tx = false;
	// Use this for initialization
	void Start () {
        net = GetComponent<Networking>();
        net.WriteSocket();
        net.b_rx = true;
	}
	
	// Update is called once per frame
	void Update () {
       if(!net.b_rx)
       {
            Texture2D tex = new Texture2D(600, 600);
            byte[] image = new byte[net.rx_load.Length - 1];
            Buffer.BlockCopy(net.rx_load, 1, image, 0, net.rx_load.Length - 1);
            tex.LoadImage(image);
            tex.Apply();
            Image.texture = tex;
       }
    }
}
