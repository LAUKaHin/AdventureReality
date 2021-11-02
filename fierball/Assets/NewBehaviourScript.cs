using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    // Start is called before the first frame update
    public int player = 10;
    public int ene = 30;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       // print("player:" + player);
       //print("ene:" + ene);
    }
    public class denotball : MonoBehaviour
    {
        public GameObject[] ballPrefabs;
        private void OnTriggerEnter(Collider other)
        {
            if(true)
            other.gameObject.GetComponent<PlayerHealth>().ene--;
        }
    }
}