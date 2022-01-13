using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TimeCounter : MonoBehaviour
{
    public float Time_limit;
    public Text Time_mainText;
    // Start is called before the first frame update
    void Start()
    {
        Time_Counter_main();
    }

    // Update is called once per frame
    void Update()
    {
        Time_mainText.text = Time_limit.ToString() + ("秒");
      
        
    }
    void Time_Counter_main() 
    {
        InvokeRepeating("Time_Counter", 1, 1);
    }
    void Time_Counter()
    {
        Time_limit -= 1;
        if(Time_limit == 0)
        {
            this.CancelInvoke();
        }
    }
}
