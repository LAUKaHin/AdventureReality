using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;

public class DataWriter : MonoBehaviour
{
    string filename = "";
    [System.Serializable]
    public class Player
    {
        public string time;
        public string email;
        public string password;
        public string tokenOrID;
        public int score;
    }
    [System.Serializable]
    public class PlayerList
    {
        public Player[] player;
    }
    public PlayerList myPlayerList = new PlayerList();

    private void Start()
    {
        filename = Application.dataPath + "/DataDir/data.csv";
        print("your location is:" + filename);
    }
   
    public void WriteCSV()
    {
        filename = Application.dataPath + "/DataDir/data.csv";
        TextWriter tw = new StreamWriter(filename, false);
        tw.WriteLine("DateAndTime, email, password, tokenOrID, score");
        tw.Close();
        tw = new StreamWriter(filename, true);
        for (int i = 0; i < myPlayerList.player.Length; i++)
        {
            tw.WriteLine(myPlayerList.player[i].time + "," + myPlayerList.player[i].email + "," + myPlayerList.player[i].password + "," + myPlayerList.player[i].tokenOrID + "," + myPlayerList.player[i].score);
        }
        tw.Close();
    }
}
