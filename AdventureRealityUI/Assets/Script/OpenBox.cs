using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class OpenBox : MonoBehaviour
{
    public DataInterface userData;
    public GameObject ScoreText;
    public GameObject datBox;
    // Start is called before the first frame update
    void Start()
    {
        ScoreText.GetComponent<Text>().text = "搵到個神秘寶箱喇！";
        datBox.GetComponent<ParticleSystem>().Stop();
    }

    public void OnButtonPressed()
    {
        userData.myPlayerList.player[0].score += 5;
        ScoreText.GetComponent<Animator>().SetBool("CanOpen", true);
        datBox.GetComponent<Animator>().SetBool("CanOpen", true);
        datBox.GetComponent<ParticleSystem>().Play();
        StartCoroutine(OneSec());
        ScoreText.GetComponent<Text>().text = "5績分幣入手!";
    }

    IEnumerator OneSec()
    {
        yield return new WaitForSeconds(1);
        ScoreText.GetComponent<Animator>().SetBool("CanOpen", false);
        //datBox.GetComponent<Animator>().SetBool("CanOpen", false);
    }
}
