using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.iOS;
using UnityEngine.UI;
using NotificationServices = UnityEngine.iOS.NotificationServices;

public class Register : MonoBehaviour
{
    public DataInterface loGin;
    public Text email;
    public Text password;
    public Text confirmPassword;

    DataInterface checker = new DataInterface();
    public void SetupAccButton()
    {
        AccountSetup(email.text, password.text, confirmPassword.text);
    }
    // Start is called before the first frame update
    public void AccountSetup(string email, string password, string confirmPassword)
    {
        string id = AddDeviceID();
        List<dynamic> errorLog = new List<dynamic>();
        if (email != null && password != null && confirmPassword != null)
        {
            if (password == confirmPassword)
            {
                if (id != null)
                {
                    loGin.AccessAllUserData(email, password, id, 1);
                }
                else
                {
                    print("偵測到非手機裝置。");
                    
                }
            }
            else
            {
                print("你嘅密碼錯咗喎！");
                
            }
        }
        else if (email == null)
        {
            print("你漏咗打電郵地址喎！");
            
        }
        else if (password == null)
        {
            print("你漏咗打密碼喎！");
            
        }
        else if (confirmPassword == null)
        {
            print("你漏咗打確認密碼喎！");
            
        }
        else if (password != null && confirmPassword == null)
        {
            print("喂！......");
            
        }
        else
        {
            print("你好似漏咗啲嘢喎，不如檢查吓先啦！");
            
        }
    }
    private string AddDeviceID(){
        string deviceID;
        if (Application.platform == RuntimePlatform.Android)
        {
            deviceID = SystemInfo.deviceUniqueIdentifier;//Add Android user's UUID
            return deviceID;
        }
        else if (Application.platform == RuntimePlatform.IPhonePlayer)
        {
            deviceID = System.Text.Encoding.Default.GetString(NotificationServices.deviceToken);//Add iOS user's device token
            return deviceID;
        }
        else
        {
            //print("Unknown Device.");
            return "KHLAU730";
        }
    }
}
