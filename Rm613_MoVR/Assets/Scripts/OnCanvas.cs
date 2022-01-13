using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Video;

public class OnCanvas : MonoBehaviour
{
    public Canvas c;
    public GameObject videoPlayer;
    public GameObject triggerPoint;
    void Start()
    {
        c.enabled = false;
        triggerPoint.SetActive(true);
        if (videoPlayer != null) {
            videoPlayer.GetComponent<VideoPlayer>().Stop();
            videoPlayer.SetActive(false);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider play)
    {
        if(play.tag == "Player") {
            triggerPoint.SetActive(false);
            c.enabled = true;
            if(videoPlayer != null) {
                videoPlayer.SetActive(true);
                videoPlayer.GetComponent<VideoPlayer>().Play();
            }
        }
    }

    private void OnTriggerExit(Collider play)
    {
        if(play.tag == "Player") {
            triggerPoint.SetActive(true);
            c.enabled = false;
            if(videoPlayer != null) {
                videoPlayer.GetComponent<VideoPlayer>().Stop();
                videoPlayer.SetActive(false);
            }
        }
    }
}
