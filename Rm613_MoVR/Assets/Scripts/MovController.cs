using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MovController : MonoBehaviour
{
    public GameObject driver;
    public GameObject planeBody;
    public Material bodyMaterial;
    public int finish_chk = 6;
    public GameObject[] checkpoints;
    bool b_lock = false;
    bool b_finished = false;
    public Canvas finCanvas;
    

    [Range(0.01f, 1)]
    public float speed_z = 0.01f;
    int i_chk = 0;

    void Start() {
        for (int i = 0; i < checkpoints.Length; i++)
            checkpoints[i].SetActive(false);
        checkpoints[i_chk].SetActive(true);
        finCanvas.enabled = false;
    }

    void FixedUpdate() {
        if (!b_finished) {
            float local_x = driver.transform.localEulerAngles.x;
            float local_y = driver.transform.localEulerAngles.y;
            if (local_y > 180)
                local_y = local_y - 360;
            if (local_x > 180)
                local_x = local_x - 360;
            if (local_y >= -8 && local_y <= 8 && local_x >= -8 && local_x <= 8) {
                bodyMaterial.color = new Color(1, 1, 1, 1);
                if(!b_lock)
                    GetComponent<AudioSource>().Play();
                b_lock = true;
            }
            //print(local_x + " " + local_y + " " + b_lock + " " + transform.GetComponent<Rigidbody>().velocity);

            if (b_lock && local_y >= -35 && local_y <= 35 && local_x >= -35 && local_x <= 35) {
                float dy = local_y * 0.025f;
                float dx = local_x * 0.025f;
                transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x + dx, transform.rotation.eulerAngles.y + dy, 0);
                planeBody.transform.localRotation = Quaternion.Euler(dx * 40f, 0, -dy * 40f);
            }
            else {
                b_lock = false;
                planeBody.transform.localRotation = Quaternion.Euler(0, 0, 0);
                bodyMaterial.color = new Color(0.5f, 0.5f, 0.5f, 0.5f);
                GetComponent<AudioSource>().Pause();
            }

            if (b_lock)
                transform.Translate(0, 0, speed_z);
        }
        else {
            planeBody.transform.localRotation = Quaternion.Euler(0, 0, 0);
            bodyMaterial.color = new Color(0.5f, 0.5f, 0.5f, 0.5f);
            transform.GetComponent<Rigidbody>().velocity = Vector3.zero;
            GetComponent<AudioSource>().Pause();
        }
    }

    private void OnTriggerEnter(Collider ChkPt) {
        if(ChkPt.tag == "Timeadd") { 
            i_chk++;
            if(i_chk >= checkpoints.Length || i_chk >= finish_chk) {
                b_finished = true;
                checkpoints[i_chk - 1].SetActive(false);
                finCanvas.enabled = true;
                GetComponent<AudioSource>().Pause();
            }
            else {
                checkpoints[i_chk - 1].SetActive(false);
                checkpoints[i_chk].SetActive(true);
                planeBody.GetComponent<AudioSource>().Play();
            }
        }
    }
}
