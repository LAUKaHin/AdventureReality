using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public class UIOperation : MonoBehaviour
{
    public GameObject prefab;
    public void RidParent()
    {
        RectTransform esc = this.GetComponent<RectTransform>();
        Destroy(esc.parent.gameObject);//Destroy the gameObject.
        //esc.parent.gameObject.SetActive(false);//Deactivate
    }
    public void CreateConfirmPanel(UnityEngine.Events.UnityAction youstuff)
    {
        GameObject confirmPanel = (GameObject)Instantiate(prefab, transform);
        confirmPanel.SetActive(true);
        var button = confirmPanel.transform.GetChild(3);
        button.GetComponent<Button>().onClick.AddListener(youstuff);
        //Destroy(confirmPanel);//Destroy the gameObject.
    }
}
