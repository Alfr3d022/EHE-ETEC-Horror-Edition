using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class controleInimigo : MonoBehaviour
{
    public int speed;

    protected bool estaMovendo = false;

    private Rigidbody2D rb2d;
    private Animator animacao;
    protected Transform jogador;
    private SpriteRenderer sprite;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        animacao = GetComponent<Animator>();
        jogador = GameObject.Find("Player").GetComponent<Transform>();
        sprite = GetComponent<SpriteRenderer>();
    }

    private float DistanciaPlayer()
    {
        return Vector2.Distance(jogador.position, transform.position);
    }

    private void Flip()
    {
        sprite.flipX = !sprite.flipX;
        speed *= -1;
    }

    protected virtual void Update()
    {
        float distance = DistanciaPlayer();
        if (estaMovendo)
        {
            if((jogador.position.x > transform.position.x && sprite.flipX) || 
                (jogador.position.x < transform.position.x && !sprite.flipX))
            {
                Flip();
            }
        }
    }

}
