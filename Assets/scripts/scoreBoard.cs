using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class scoreBoard : MonoBehaviour
{

    public static int scoreValue = 0;
    Text score;
   

    // Start is called before the first frame update
    void Start()
    {
        score = GetComponent<Text>();

        Debug.Log("Start before the coroutine");

        StartCoroutine(scoreUpdate());

        Debug.Log("Start after the coroutine");


    }

    public void restart()
    {

        Debug.Log("Start before the coroutine");

        StartCoroutine(scoreUpdate());

        Debug.Log("Start after the coroutine");
    }

    

    IEnumerator scoreUpdate()
    {
        while (!Player.playerDeath)
        {
            yield return new WaitForSeconds(Random.Range(0.2f, 1f));
            scoreValue += Random.Range(1, 11);
        }

        Debug.Log("after Ienumerator");

    }


    private void Update()
    {
        Debug.Log("inside Update");

        score.text = "Score: " + scoreValue;

    }
}
