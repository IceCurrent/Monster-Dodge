using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreValueR : MonoBehaviour
{

    public GameObject realTimeScore;
    public Text text;

    // Start is called before the first frame update
    void Start()
    {
        realTimeScore.GetComponent<Text>().text = "0.0" + " s";

    }

    // Update is called once per frame
    void Update()
    {
        realTimeScore.GetComponent<Text>().text = "S u r v i v a l    T i m e : " + Player.survivalTime.ToString("0.#") + " s";

    }
}
