using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class AnswerBox : MonoBehaviour
{
    public List<Text> correctAnswerText = new List<Text>();
    public List<Animator> correctAnswerAnimator = new List<Animator>();
    public List<Text> wrongAnswerText = new List<Text>();
    public List<Animator> wrongAnswerAnimator = new List<Animator>();
    public GameObject boxObject;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void CorrectAnswer()
    {
        for (int i = 0; i < correctAnswerText.Count; i++)
        {
            correctAnswerText[i].color = new Color(0, 1, 0);
            correctAnswerAnimator[i].enabled = false;
        }
        for (int i = 0; i < wrongAnswerText.Count; i++)
        {
            wrongAnswerAnimator[i].enabled = false;
            wrongAnswerText[i].color = new Color(1, 0, 0);
        }
        print("Correct!");
        boxObject.SetActive(true);
    }
    public void WrongAnswer()
    {
        
    }
    public void TargetDetected()
    {
        GetComponent<Animator>().SetTrigger("On");
    }
    public void TargetLoss()
    {
        GetComponent<Animator>().SetTrigger("Off");
    }
}
