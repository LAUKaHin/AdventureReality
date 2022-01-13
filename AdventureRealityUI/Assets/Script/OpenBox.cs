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
        ScoreText.GetComponent<Text>().text = "100ÁZ¤À¹ô¤J¤â!";
        datBox.GetComponent<ParticleSystem>().Stop();
    }

    public void OnButtonPressed()
    {
        userData.myPlayerList.player[0].score += 100;
        ScoreText.GetComponent<Animator>().SetBool("CanOpen", true);
        datBox.GetComponent<Animator>().SetBool("CanOpen", true);
        datBox.GetComponent<ParticleSystem>().Play();
        StartCoroutine(OneSec());
    }

    IEnumerator OneSec()
    {
        yield return new WaitForSeconds(1);
        ScoreText.GetComponent<Animator>().SetBool("CanOpen", false);
        //datBox.GetComponent<Animator>().SetBool("CanOpen", false);
    }
}
