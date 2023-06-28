using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class scoreDisplay : MonoBehaviour
{
    public Text text;
    public GameObject scoreDisp;

    private void Start()
    {
        scoreDisp.GetComponent<Text>().text = "Y o u r   S u r v i v a l   T i m e : " + Player.survivalTime.ToString("0.#") + " s"; 

    }
}
