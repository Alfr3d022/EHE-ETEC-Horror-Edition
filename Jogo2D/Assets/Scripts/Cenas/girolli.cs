using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class girolli : MonoBehaviour
{
    protected Transform jogador;
    protected SpriteRenderer sprite;

    void Start()
    {
        jogador = GameObject.Find("Player").GetComponent<Transform>();
        sprite = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (jogador.position.x < transform.position.x)
        {
            sprite.flipX = true;
        }
        else
        {
            if (jogador.position.x > transform.position.x)
            {
                sprite.flipX = false;
            }
        }
        
    }

}
