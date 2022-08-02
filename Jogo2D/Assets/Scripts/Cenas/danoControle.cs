using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class danoControle : MonoBehaviour
{
    private player player;
    public AudioSource som;

    private void Start()
    {
        player = GameObject.Find("Player").GetComponent<player>();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Enemy"))
        {
            if (player.invencivel == false)
            {
                player.DanoPlayer();
                som.Play();
            }
        }
    }

}
