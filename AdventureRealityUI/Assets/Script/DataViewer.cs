using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DataViewer : MonoBehaviour
{
    public DataInterface dataIneed;
    // Start is called before the first frame update
    
    public void checkButton()
    {
        Text text = this.GetComponent<Text>();
        text.text = string.Empty;
        DataInterface.UserHistory lastData = dataIneed.readUserLog();
        text.text = "Your last online: " + lastData.time + '\n';
        text.text = text.text + "Your email: " + lastData.email + '\n';
        text.text = text.text + "Your password: " + lastData.password + '\n';
        text.text = text.text + "Your tokenOrID: " + lastData.tokenOrID + '\n';
        text.text = text.text + "Your score: " + lastData.score;
    }
}
