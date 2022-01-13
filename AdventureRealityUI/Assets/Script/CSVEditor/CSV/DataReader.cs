using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;

public class DataReader : MonoBehaviour
{

    public TextAsset textAssetData;
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
    public void Start()
    {

    }
    public void ReadButton() {readCSV();}

    void readCSV()
    {
        string[] data = textAssetData.text.Split(new string[] {",","\n"}, StringSplitOptions.None);
        int tableSize = data.Length / 4 - 1;
        myPlayerList.player = new Player[tableSize];
        for (int i=0; i<tableSize;i++)
        {
            myPlayerList.player[i] = new Player();
            myPlayerList.player[i].time = data[4 * (i + 1)];
            myPlayerList.player[i].email = data[4 * (i + 1) + 1];
            myPlayerList.player[i].password = data[4 * (i + 1) + 2];
            myPlayerList.player[i].tokenOrID = data[4 * (i + 1) + 3];
            myPlayerList.player[i].score = int.Parse(data[4 * (i + 1) + 4]);
        }
        print(myPlayerList.player.Length);
    }

}
