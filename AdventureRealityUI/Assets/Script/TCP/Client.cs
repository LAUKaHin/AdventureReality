using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using System;
using System.Text;
using UnityEngine.UI;

public class Client : MonoBehaviour {
    public RawImage Image;
    Networking net;
    public DataInterface userData;
    bool b_tx = false;
	// Use this for initialization
	void Start () {
        net = GetComponent<Networking>();
        //net.WriteSocket("C", "");
        RequestReadUserData();
        net.b_rx = true;
	}
	
	// Update is called once per frame
	void Update () {
       if(!net.b_rx)
       {
            Texture2D tex = new Texture2D(600, 600);
            byte[] bytes = new byte[net.rx_load.Length - 1];
            Buffer.BlockCopy(net.rx_load, 12, bytes, 0, net.rx_load.Length - 12);
            string command = "";
            string reply = "";
            int byteCounter = 0;
            print(Encoding.UTF8.GetString(bytes));
            for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
            {
                command += Encoding.UTF8.GetString(new[] { bytes[i] });
                byteCounter = i;
            }
            byteCounter+=2;
            print(command);
            if (command == "Register")
            {
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    reply += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
                byteCounter += 2;
                if (reply == "TAR")
                {
                    print("Token or ID has already registed.");
                }
                else if (reply == "EAE")
                {
                    print("eMail has already exist.");
                }
                else
                {
                    print("Unknown problem");
                }
            }
            else if (command == "Login")
            {
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    command += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
                byteCounter += 2;
                if (reply == "WPW")
                {
                    print("Wrong password");
                }
                else
                {
                    print("Unknown problem");
                }
            }
            else if (command == "ReadUserData")
            {
                DataInterface.UserHistory collectData = new DataInterface.UserHistory();
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    collectData.email += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
                byteCounter += 2;
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    collectData.password += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
                byteCounter += 2;
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    collectData.tokenOrID += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
                byteCounter += 2;
                string couponCoinString = "";
                for (int i = byteCounter; i < bytes.Length; i++)
                {
                    couponCoinString += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
                print("Coins: " + couponCoinString);
                collectData.score = Int32.Parse(couponCoinString);
                userData.myPlayerList.player[0] = collectData;
            }
            else if (command == "ReadUserCoupon")
            {
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    command += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
            }
            else if (command == "ReadShopData")
            {
                for (int i = byteCounter; Encoding.UTF8.GetString(new[] { bytes[i] }) != ","; i++)
                {
                    command += Encoding.UTF8.GetString(new[] { bytes[i] });
                    byteCounter = i;
                }
            }
            else
            {
                print("These byte have no command");
            }
            //Buffer.BlockCopy(net.rx_load, 1, image, 0, net.rx_load.Length - 1);
            //tex.LoadImage(image);
            tex.Apply();
            //Image.texture = tex;
       }
    }

    public void RequestReadUserData()
    {
        net.WriteSocket("ReadUserData", userData.myPlayerList.player[0].tokenOrID);
    }
    public void RequestWriteUserData()
    {
        string content = userData.myPlayerList.player[0].email + "," + userData.myPlayerList.player[0].password + "," + userData.myPlayerList.player[0].tokenOrID + "," + userData.myPlayerList.player[0].score.ToString();
        net.WriteSocket("WriteUserData", content);
    }
    public void RequestReadUserCoupon()
    {
        net.WriteSocket("ReadUserCoupon", userData.myPlayerList.player[0].tokenOrID);
    }
    public void RequestWriteUserCoupon()
    {
        net.WriteSocket("WriteUserCoupon", "");
    }
    public void RequestReadShopData()
    {
        net.WriteSocket("ReadShopData", "");
    }
    public void RequestReadShopCoupon()
    {
        net.WriteSocket("ReadShopData", "");
    }
}
