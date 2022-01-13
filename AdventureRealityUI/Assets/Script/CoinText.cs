using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinText : MonoBehaviour
{
    Text coinText;
    public DataInterface userData;
    void Start()
    {
        coinText = this.GetComponent<Text>();
    }

    // Update is called once per frame
    void Update()
    {
        coinText.text = ": " + userData.myPlayerList.player[0].score.ToString();
    }
}
