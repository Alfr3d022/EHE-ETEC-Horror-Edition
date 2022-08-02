using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class pause : MonoBehaviour
{
    public GameObject pauseMenu;
    public string Menu;

    public void pausar()
    {
        if(Time.timeScale == 1)
        {
            pauseMenu.SetActive(true);
            Time.timeScale = 0;
        }
        
    }
    public void resume()
    {
        
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
        
    }
    public void sair()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
        SceneManager.LoadScene(Menu);
    }



}
