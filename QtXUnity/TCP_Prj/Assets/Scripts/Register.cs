using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Register : MonoBehaviour
{
    //public Text email;
    //public Text password;
    //public Text confirmPassword;
    // Start is called before the first frame update
    private List<string> AccountSetup(Text email, Text password, Text confirmPassword)
    {
        List<string> accInfo = new List<string>();
        List<string> errorLog = new List<string>();
        if (email != null && password != null && confirmPassword != null)
        {
            if (password.text == confirmPassword.text)
            {
                accInfo.Add(email.text);
                accInfo.Add(password.text);
                return accInfo;
            }
            else
            {
                errorLog.Add("你嘅密碼錯咗喎！");
                return errorLog;
            }
        }
        else if (email == null)
        {
            errorLog.Add("你漏咗打電郵地址喎！");
            return errorLog;
        }
        else if (password == null)
        {
            errorLog.Add("你漏咗打密碼喎！");
            return errorLog;
        }
        else if (confirmPassword == null)
        {
            errorLog.Add("你漏咗打確認密碼喎！");
            return errorLog;
        }
        else if (password != null && confirmPassword == null)
        {
            errorLog.Add("喂！");
            return errorLog;
        }
        else
        {
            errorLog.Add("你好似漏咗啲嘢喎，不如檢查吓先啦！");
            return errorLog;
        }
    }
}
