using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System;
using System.IO;
using System.Text;
using System.Net.Sockets;

public class Networking : MonoBehaviour {
    
    internal Boolean socketReady = false;
    TcpClient mySocket;
    NetworkStream theStream;
    private readonly String Host = "127.0.0.1";
    private readonly Int32 Port = 9884;
    private int rx_len;
    [HideInInspector]
    public byte[] rx_load;
    public String dt;
    
    public bool b_rx = false;
    bool b_r_first = true;
    
    void Start () {
        SetupSocket();
    }

    void Update()
    {
        if (b_rx)
        {
            BytePack raw = ReadSocket();
            if (raw.len > 0)
            {
                if (b_r_first)
                {
                    uint u_len = (uint)raw.content[0]*0x1000000 + (uint)raw.content[1] * 0x10000 + (uint)raw.content[2] * 0x100 + (uint)raw.content[3];
                    //print("u_len:" + u_len);
                    rx_load = new byte[u_len-(4+12)];
                    rx_len = 0;
                    Buffer.BlockCopy(raw.content, 4+12, rx_load, 0, raw.len-(4+12));
                    rx_len = raw.len;
                    byte[] b_dt = new byte[12];
                    Buffer.BlockCopy(raw.content, 4, b_dt, 0, 12);
                    dt = System.Text.Encoding.ASCII.GetString(b_dt);
                    //print("Rx Len:" + rx_len + " DT:" + dt);
                    b_r_first = false;
                }
                else
                {
                    Buffer.BlockCopy(raw.content, 0, rx_load, rx_len, raw.len);
                    rx_len += raw.len;
                }

                if (rx_len >= rx_load.Length)
                {
                    b_rx = false;
                    b_r_first = true;
                    print("Rx Len:" + rx_load.Length + " DT:" + dt);
                    //print("Load:" + System.Text.Encoding.ASCII.GetString(rx_load));
                }
            }
        }
    }

    struct BytePack
    {
        public byte[] content;
        public int len;
    }

    public void SetupSocket()
    {
        try
        {
            mySocket = new TcpClient(Host, Port);
            theStream = mySocket.GetStream();
            socketReady = true;
        }
        catch (Exception e)
        {
            Debug.Log("Socket error: " + e);
        }
    }

    public void WriteSocket()
    {
        if (!socketReady)
            return;
        String content = "202110051715C";
        byte[] sent = new byte[content.Length+4+12];
        uint l = (uint)content.Length + 4 + 12;
        sent[3] = (byte)(l & 0xFF);
        sent[2] = (byte)((l & 0xFF00) / ((uint)Math.Pow(2, (float)8)));
        sent[1] = (byte)((l & 0xFF0000) / ((uint)Math.Pow(2, (float)16)));
        sent[0] = (byte)((l & 0xFF000000) / ((uint)Math.Pow(2, (float)24)));
        Buffer.BlockCopy(Encoding.ASCII.GetBytes(content), 0, sent, 4, content.Length);
        /*print("Sent Length:" + sent.Length);
        for (int i = 0; i < sent.Length; i++)
            print("idx:" + i + ", " +sent[i]);*/
        theStream.Write(sent, 0, sent.Length);
    }
    private BytePack ReadSocket()
    {
        BytePack raw;
        raw.content = new byte[100000];
        raw.len = 0;
        if (!socketReady)
            return raw;
        if (theStream.DataAvailable) {
            raw.len = theStream.Read(raw.content, 0, mySocket.ReceiveBufferSize);
            theStream.Flush();
        }
        return raw;
    }
    private void CloseSocket()
    {
        if (!socketReady)
            return;
        mySocket.Close();
        socketReady = false;
    }
}
