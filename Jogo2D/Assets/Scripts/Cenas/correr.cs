using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class correr : MonoBehaviour
{
    public botao bot;
    public float speedCorrida;
    public float speedNormal;
    public player player;
    
    void Update()
    {
        if (bot.input == 1)
        {
            player.playerSpeed = speedCorrida;
        }
        else
        {
            if(bot.input == 0)
            {
                player.playerSpeed = speedNormal;
            }
        }
    }
}
