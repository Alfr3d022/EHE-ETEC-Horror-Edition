using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class comida : MonoBehaviour
{
    private player player;
    public GameObject cachorroQ1;
    public GameObject pastel1;

    private void Start()
    {
        player = GameObject.Find("Player").GetComponent<player>();
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("comida"))
        {
            player.Comendo();
            cachorroQ1.SetActive(false);

        }
        if (collision.CompareTag("pastel"))
        {
            player.Comendo();
            pastel1.SetActive(false);
        }
    }
}
