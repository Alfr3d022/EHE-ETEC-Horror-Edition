using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class inimigo : MonoBehaviour
{
    protected float distanciaAtaque;
    public int velocidade;

    protected bool vivo = false;

    protected Rigidbody2D rb2d;
    protected Transform jogador;
    protected Animator animacao;
    protected SpriteRenderer sprite;
    protected GameObject fantasma;

    void Awake()
    {
        rb2d = GetComponent<Rigidbody2D>();
        jogador = GameObject.Find("Player").GetComponent<Transform>();
        animacao = GetComponentInChildren<Animator>();
        sprite = GetComponent<SpriteRenderer>();
        fantasma = GameObject.Find("Iminigo");
    }

    //Calcular a distancia
    protected float distanciaJogador ()
    {
        return Vector2.Distance(jogador.position, transform.position);
    }
    //Calcular a distancia Fim

    //Virar Sprite
    //protected void Flip()
    //{
    //    sprite.flipX = !sprite.flipX;
    //}
    //Virar Sprite Fim

}
