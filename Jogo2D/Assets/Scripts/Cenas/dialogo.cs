using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dialogo : MonoBehaviour
{
    public Sprite personagem;
    public string[] fala;
    public string nomePersonagem;

    public LayerMask playerLayer;
    public float raio;
    bool dentroRaio;

    private dialogoControl dialogoControl;

    private void Start()
    {
        dialogoControl = FindObjectOfType<dialogoControl>();
    }
    private void FixedUpdate()
    {
        Interação();
    }

    public void Interação()
    {
        Collider2D dentroDoRaio = Physics2D.OverlapCircle(transform.position, raio, playerLayer);

        if(dentroDoRaio != null)
        {
            dentroRaio = true;
        }
        else
        {
            dentroRaio = false;
        }
    }
    public void Conversar()
    {
        if (dentroRaio)
        {
            dialogoControl.Fala(personagem, fala, nomePersonagem);
        }
    }
}
