using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    public string Cena;

    public void CarregarCena()
    {
        SceneManager.LoadScene(Cena);
    }

    public void Sair()
    {
        Application.Quit();
    }
}
