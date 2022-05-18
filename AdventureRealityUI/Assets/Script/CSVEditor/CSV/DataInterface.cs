using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Text;

public class DataInterface : MonoBehaviour
{
    int subDir;
    string filename = "";

    //public TextAsset textAssetData;
    [Serializable]
    public class UserHistory
    {
        public string time;
        public string email;
        public string password;
        public string tokenOrID;
        public int score;
    }
    [Serializable]
    public class UserContent{public UserHistory[] player;}
    public UserContent myPlayerList = new UserContent();

    [Serializable]
    public class UserCoupon
    {
        public string couponID;
        public int amount;
    }
    [Serializable]
    public class UserCouponList { public UserCoupon[] userCoupon; }
    public UserCouponList userCouponList = new UserCouponList();
    [Serializable]
    public class ShopInfo
    {
        public string shopName;
        public int ShopType;
        public string shortName;
        public string date;
        public string couponUsedDate;
        public string location;
    }
    [Serializable]
    public class ShopHistory { public ShopInfo[] shopHistory; }
    public ShopHistory shopHistory = new ShopHistory();

    [Serializable]
    public class ShopCoupon
    {
        public string couponID;
        public string enabledDate;
        public string disabledDate;
        public string holder;
        public string Type;
        public int cost;
    }
    [Serializable]
    public class ShopCouponList { public ShopCoupon[] shopCoupon; }
    public ShopCouponList shopCouponList = new ShopCouponList();

    [Serializable]
    public class ShopData
    {
        public string shopName;
        public string content;
        public string location;
        public string contact;
        public GameObject button;
    }

    public void Start()
    {
        Datainitialization access = new Datainitialization();
        access.GetSetUserPathFile(null);
    }

    public void writeButton()
    {
        AppendUserLog();
    }
    void TcpWriteData()
    {

    }
    public void OpenButton()
    {
        List<string> directoryName = new List<string> {"A", "B", "C", "A1", "A2", "A3", "A4", "A5", "A6", "B1", "B2", "C1", "C2", "C3"};
        List<int> loop = new List<int>{3, 6, 2, 3};
        Datainitialization createDir = new Datainitialization(); 
        createDir.CreateDirectory(directoryName, loop);
        print("done");
        print(Application.persistentDataPath);
    }
    public UserHistory readUserLog()
    {
        if (!String.IsNullOrEmpty(myPlayerList.player[0].tokenOrID))
        {
            filename = Application.persistentDataPath + "//" + Datainitialization.directoryName[1] + "//" + myPlayerList.player[0].tokenOrID + "//UserHistory.csv";
        }
        else
        {
            Datainitialization getFile = new Datainitialization();
            filename = getFile.GetSetUserPathFile(null);
        }
        print(filename);
        TextReader reader = new StreamReader(filename, true);
        string[] data = reader.ReadToEnd().Split(new string[] { ",", "\n" }, StringSplitOptions.None);
        print(data.Length);
        int tableSize = data.Length / 5 - 2;//As you can see, Line 47 for i must be less than table size to execute not ==. So here is -2
        print(tableSize);
        UserHistory lastData = new UserHistory();
        lastData.time = data[5 * (tableSize + 1)];
        lastData.email = data[5 * (tableSize + 1) + 1];
        lastData.password = data[5 * (tableSize + 1) + 2];
        lastData.tokenOrID = data[5 * (tableSize + 1) + 3];
        lastData.score = int.Parse(data[5 * (tableSize + 1) + 4]);
        reader.Close();

        myPlayerList.player[0].email = lastData.email;
        myPlayerList.player[0].password = lastData.password;
        myPlayerList.player[0].tokenOrID = lastData.tokenOrID;
        myPlayerList.player[0].score = lastData.score;

        return lastData;
    }
    /*
    public UserContent readCSV()
    {
        string[] data = textAssetData.text.Split(new string[] { ",", "\n" }, StringSplitOptions.None);
        print(data.Length);
        int tableSize = data.Length / 5 - 1;
        print(tableSize);
        myPlayerList.player = new UserHistory[tableSize];
        for (int i = 0; i < tableSize; i++)
        {
            myPlayerList.player[i] = new UserHistory();
            myPlayerList.player[i].time = data[5 * (i + 1)];
            myPlayerList.player[i].email = data[5 * (i + 1) + 1];
            myPlayerList.player[i].password = data[5 * (i + 1) + 2];
            myPlayerList.player[i].tokenOrID = data[5 * (i + 1) + 3];
            myPlayerList.player[i].score = int.Parse(data[5 * (i + 1) + 4]);
        }
        return myPlayerList;
    }
    */
    public int TakeRowLength(TextAsset csv)
    {
        if (csv == null)
        {
            return 0;        
        }
        string[] data = csv.text.Split(new string[] { ",", "\n" }, StringSplitOptions.None);
        int tableSize = data.Length / 5 - 1;
        myPlayerList.player = new UserHistory[tableSize];
        return tableSize + 1;
    }
    public void AppendUserLog()
    {
        filename = Application.persistentDataPath + "//" + Datainitialization.directoryName[1] + "//" + myPlayerList.player[0].tokenOrID + "//UserHistory.csv";
        TextWriter tw;
        if (!File.Exists(filename))
        {
            Datainitialization createFileAndDir = new Datainitialization();
            List<string> dirName = Datainitialization.directoryName;
            dirName.Add(myPlayerList.player[0].tokenOrID);
            createFileAndDir.CreateDirectory(dirName, Datainitialization.loop);
            tw = new StreamWriter(filename, false);
            tw.WriteLine("DateAndTime, email, password, tokenOrID, score");
            tw.Close();
            print(filename.Remove(filename.Length - 4, 4));//Delete last 4 character
            createFileAndDir.GetSetUserPathFile(filename);
        }
        tw = new StreamWriter(filename, true);
        for (int i = 0; i < myPlayerList.player.Length; i++)
        {
            myPlayerList.player[i].time = DateTime.Now.ToString("yyyy/MM/dd/HH/mm/ss");
            tw.WriteLine(myPlayerList.player[i].time + "," + myPlayerList.player[i].email + "," + myPlayerList.player[i].password + "," + myPlayerList.player[i].tokenOrID + "," + myPlayerList.player[i].score);
        }
        tw.Close();
    }
    public UserHistory AccessAllUserData(string email, string password, string tokID, short useMode)//useMode: -1 = writeMode, 0 = readMode, 1 = initializeMode.
    {
        filename = Application.persistentDataPath + "//" + Datainitialization.directoryName[1] + "//UserList.csv";
        TextWriter tw;
        if (!File.Exists(filename))
        {
            Datainitialization createFileAndDir = new Datainitialization();
            List<string> dirName = Datainitialization.directoryName;
            myPlayerList.player[0] = new UserHistory();
            myPlayerList.player[0].email = email;
            myPlayerList.player[0].password = password;
            myPlayerList.player[0].tokenOrID = tokID;
            myPlayerList.player[0].score = 100;
            dirName.Add(myPlayerList.player[0].tokenOrID);
            createFileAndDir.CreateDirectory(dirName, Datainitialization.loop);
            tw = new StreamWriter(filename, false);
            tw.WriteLine("DateAndTime, email, password, tokenOrID, score");
            tw.Close();
            print(filename.Remove(filename.Length - 4, 4));//Delete last 4 character
            createFileAndDir.GetSetUserPathFile(filename);
        }
        TextReader reader = new StreamReader(filename, true);
        string[] data = reader.ReadToEnd().Split(new string[] { ",", "\n" }, StringSplitOptions.None);
        int tableSize = data.Length / 5 - 2;//As you can see, Line 47 for i must be less than table size to execute not ==. So here is -2
        UserHistory checkUser = new UserHistory();
        print(tableSize);
        for (int i = 0; i <= tableSize; i++)
        {
            checkUser.time = data[5 * (tableSize + 1)];
            checkUser.email = data[5 * (tableSize + 1) + 1];
            checkUser.password = data[5 * (tableSize + 1) + 2];
            checkUser.tokenOrID = data[5 * (tableSize + 1) + 3];
            checkUser.score = int.Parse(data[5 * (tableSize + 1) + 4]);
            if (useMode == -1 && tokID == checkUser.tokenOrID && email == checkUser.email)//writeMode
            {
                myPlayerList.player[i].time = DateTime.Now.ToString("yyyy/MM/dd/HH/mm");
                tw = new StreamWriter(filename, false);
                tw.WriteLine(myPlayerList.player[i].time + "," + myPlayerList.player[i].email + "," + myPlayerList.player[i].password + "," + myPlayerList.player[i].tokenOrID + "," + myPlayerList.player[i].score);
                return null;
            }
            else if (useMode == 0 && tokID == checkUser.tokenOrID || email == checkUser.email)//readMode
            {
                return checkUser;
            }
            else//InizializeMode
            {
                if (email == checkUser.email)
                {
                    print("email has been used.");
                    return null;//email has been used.
                }
                else if (tokID == checkUser.tokenOrID)
                {
                    print("Token has been used");
                    return null;//Token or ID has been used.
                }
                else//initializeMode
                {
                    tw = new StreamWriter(filename, true);
                    myPlayerList.player[i].time = DateTime.Now.ToString("yyyy/MM/dd/HH/mm/ss");
                    tw.WriteLine(myPlayerList.player[i].time + "," + email + "," + password + "," + tokID + "," + "100");
                    return null;
                }
            }
        }
        return null;//unkownError
    }
    
    public string CouponIDNamer(ShopInfo shop, string promotionShortName, ulong quantity)
    {
        string couponID = shop.ShopType + '_' + shop.shortName + '_' + promotionShortName + '_' + quantity.ToString();
        return couponID;
    }
    public string[] couponIDSpliter(string couponID)
    {
        string[] spliter = couponID.Split(new string[] {"_"}, StringSplitOptions.None);
        return spliter;
    }

}
public class Datainitialization
{
    int subDir;
    public static List<string> directoryName = new List<string> { "Shops", "Users", "BallKee", "TEX", "Envisage"};
    public static List<int> loop = new List<int> { 2, 3, 1};
    public void CreateDirectory(List<string> DirectoryName, List<int> loopTime)
    {
        for (int i = 0; i <= loopTime[0]; i++)
        {
            if (i == 0)
            {
                for (int j = 0; j < loopTime[i]; j++)
                {
                    Directory.CreateDirectory(Application.persistentDataPath + "//" + DirectoryName[j]);
                    subDir = j;
                }
            }
            else
            {
                for (int j = 0; j < loopTime[i]; j++)
                {
                    subDir++;
                    Directory.CreateDirectory(Application.persistentDataPath + "//" + DirectoryName[i - 1] + "//" + DirectoryName[subDir]);
                }
            }
        }
    }
    public string GetSetUserPathFile(string pathname)
    {
        string fileLocation = Application.persistentDataPath + "//" + directoryName[1] + "//User.path";
        if (pathname != null)
        {
            TextWriter tw = new StreamWriter(fileLocation, false);
            tw.WriteLine(pathname);
            tw.Close();
            return null;
        }
        else
        {  
            if (File.Exists(fileLocation))
            {
                TextReader tr = new StreamReader(fileLocation, true);
                string path = tr.ReadLine();
                tr.Close();
                return path;
            }
            else
            {
                return null;
            }
        }
        
    }
}
