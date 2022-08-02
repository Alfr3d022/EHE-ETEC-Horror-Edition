using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IAF : MonoBehaviour
{
    public float velocidade;
    public Transform[] posicao;
    public float tempoEspera;

    int randomica;
    float tempo;

    void Start()
    {
        randomica = Random.Range(0, posicao.Length);
        tempo = tempoEspera;
    }

    void Update()
    {
        transform.position = Vector2.MoveTowards(transform.position, posicao[randomica].position, velocidade * Time.deltaTime);
        float _dist = Vector2.Distance(transform.position, posicao[randomica].position);

        if(_dist <= .2f)
        {
            if(tempo <= 0)
            {
                randomica = Random.Range(0, posicao.Length);
                tempo = tempoEspera;
            }
            else
            {
                tempo -= Time.deltaTime;
            }
        }
    }
}
