using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IA : inimigo
{
    public float distancia;
    public float tempoEspera;
    protected float distanciaJ;
    public Transform[] posicao;
    public Transform posicaoSpawn;

    int aleatorio;
    float tempo;

    //patrulha

    void Start()
    {
        aleatorio = Random.Range(0, posicao.Length);
        tempo = tempoEspera;
    }

    void Update()
    {

        //mover Inimigo
        distanciaJ = distanciaJogador();
        vivo = (distancia <= distanciaAtaque);
        posicaoSpawn = posicao[aleatorio];



        if (distanciaJ <= distancia)
        {
            transform.position = Vector2.MoveTowards(transform.position, jogador.transform.position, velocidade * Time.deltaTime);
            //mover Inimigo Fim

            //Virar Inimigo
            if (jogador.position.x > transform.position.x)
            {
                animacao.SetBool("andandoD", true);
            }
            else
            {
                animacao.SetBool("andandoD", false);
            }
            if (jogador.position.x < transform.position.x)
            {
                animacao.SetBool("andandoE", true);
            }
            else
            {
                animacao.SetBool("andandoE", false);
            }
            //Virar Inimigo
        }
        else
        {
            //Patrulha aleatoria
            transform.position = Vector2.MoveTowards(transform.position, posicao[aleatorio].position, velocidade * Time.deltaTime);
            float _dist = Vector2.Distance(transform.position, posicao[aleatorio].position);

            if (posicaoSpawn.position.x > transform.position.x)
            {
                animacao.SetBool("andandoD", true);
            }
            else
            {
                animacao.SetBool("andandoD", false);
            }
            if (posicaoSpawn.position.x < transform.position.x)
            {
                animacao.SetBool("andandoE", true);
            }
            else
            {
                animacao.SetBool("andandoE", false);
            }

            if (_dist <= .2f)
            {
                if (tempo <= 0)
                {
                    aleatorio = Random.Range(0, posicao.Length);
                    tempo = tempoEspera;
                }
                else
                {
                    tempo -= Time.deltaTime;
                }
            }
            //Patrulha aleatoria Fim
        }

    }
    void FixedUpdate()
    {
        if (vivo)
        {
            rb2d.velocity = new Vector2(velocidade, rb2d.velocity.y);
        }
    }
}
