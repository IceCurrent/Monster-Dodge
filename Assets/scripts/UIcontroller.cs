using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UIcontroller : MonoBehaviour
{

    public void Restart()
    {
        SceneManager.LoadScene("gameplay");
        scoreBoard.scoreValue = 0;
        Player.playerDeath = false;
    }

    public void Home()
    {
        SceneManager.LoadScene("main menu");
        scoreBoard.scoreValue = 0;
        Player.playerDeath = false;
    }
}
