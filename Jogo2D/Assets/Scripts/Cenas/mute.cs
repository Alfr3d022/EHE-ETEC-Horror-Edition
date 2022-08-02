using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mute : MonoBehaviour
{
    public AudioSource girolli;
    public GameObject desmute;
    public GameObject mutar;
    public void parar()
    {
        girolli.Pause();
        desmute.SetActive(true);
        mutar.SetActive(false);
    }
    public void tocar()
    {
        girolli.Play();
        desmute.SetActive(false);
        mutar.SetActive(true);
    }
}
