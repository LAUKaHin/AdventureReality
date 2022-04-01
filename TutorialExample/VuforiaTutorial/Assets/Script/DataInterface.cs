using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sinbad;

public class DataInterface : MonoBehaviour
{
    public DateTime time;
    public string email;
    public string password;
    public string deviceID;
    public uint score;
    public List<ulong> coupons = new List<ulong>();
    // Start is called before the first frame update
    public void click()
    {
        var newUser = new UserLog(time, email, password, deviceID, score, coupons);
        CsvUtil.SaveObject(newUser, "C:\\Users\\LAU Ka Hin\\OneDrive - Vocational Training Council - Student\\GameAR\\AdventureReality\\VuforiaTutorial\\Assets\\Script\\newUser.csv");
    }

    // Update is called once per frame
    void Update()
    {

    }

    public class UserLog
    {
        public DateTime time;
        public string email;
        public string password;
        public string tokenOrID;
        public uint score;
        public List<ulong> couponID = new List<ulong>();

        public UserLog() { }
        public UserLog(DateTime t, string e, string p, string id, uint s, List<ulong> l)
        {
            time = t;
            email = e;
            password = p;
            tokenOrID = id;
            score = s;
            couponID = l;
        }
    }
    public class UserInfo
    {
        public string email;
        protected string password;
        public string tokenOrID;
        public uint score;
        public List<ulong> couponID = new List<ulong>();
    }
}
