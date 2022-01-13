using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InjectCoin : MonoBehaviour
{
    public GameObject coinPrefab;
    public Transform transformers;
    public int count;
    public float m_Thrust;
    public float genSpeed;

    // Start is called before the first frame update
    public void Start()
    {
        Transform constPosition = transformers;
        StartCoroutine(GenCoin(coinPrefab, transformers, genSpeed));
    }
    public void CoinInjeculation(GameObject prefab)
    {
        GameObject billCoins = Instantiate(coinPrefab, transform.position, Quaternion.identity);
        billCoins.GetComponent<Rigidbody>().AddForce(billCoins.transform.up * m_Thrust);
        billCoins.GetComponent<Rigidbody>().AddTorque(billCoins.transform.right);
        billCoins.transform.parent = transform;
        
    }
    IEnumerator GenCoin(GameObject prefab, Transform transforma, float speed)
    {
        for (int i = 0; i < count; i++)
        {
            CoinInjeculation(prefab);
            yield return new WaitForSeconds(speed);
            print("WaitAndPrint " + Time.time);
        }
    }
}
