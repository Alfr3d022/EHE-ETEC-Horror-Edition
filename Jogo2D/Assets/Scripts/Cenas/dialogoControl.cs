using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class dialogoControl : MonoBehaviour
{
    [Header("Objetos")]
    public GameObject Dialogo;
    public Image perfil;
    public Text Falas;
    public Text nomePersonagem;

    [Header("Configurações")]
    public float velocidade;
    private string[] sentencas;
    private int index;


    public void Fala( Sprite p, string[] txt, string personagemNome)
    {
        Dialogo.SetActive(true);
        perfil.sprite = p;
        sentencas = txt;
        nomePersonagem.text = personagemNome;
        StartCoroutine(TempoEspera());
    }

    IEnumerator TempoEspera()
    {
        foreach( char falas in sentencas[index].ToCharArray())
        {
            Falas.text += falas;
            yield return new WaitForSeconds(velocidade);
        }
    }

    public void ProximaFala()
    {
        if(Falas.text == sentencas[index])
        {
            if(index < sentencas.Length - 1)
            {
                index++;
                Falas.text = "";
                StartCoroutine(TempoEspera());
            }
            else
            {
                Falas.text = "";
                index = 0;
                Dialogo.SetActive(false);
            }
        }
    }
}
