using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class eventer : MonoBehaviour
{
    public UIOperation addPanel;
    // Start is called before the first frame update
    void Start()
    {
        addPanel.CreateConfirmPanel(MyStuff);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void MyStuff(){
        Application.Quit();
    }
}
