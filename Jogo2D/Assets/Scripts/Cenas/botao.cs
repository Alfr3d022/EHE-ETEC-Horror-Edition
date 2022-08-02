using System.Collections;
using System.Collections.Generic;
using UnityEngine.EventSystems;
using UnityEngine;

public class botao : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public float input;
    public float sensibilidade = 3;
    public bool pressionando;    
    public void OnPointerDown(PointerEventData dataEnvento)
    {
        pressionando = true;
    }

    public void OnPointerUp(PointerEventData dataEnvento)
    {
        pressionando = false;
    }

    private void Update()
    {
        if (pressionando)
        {
            input += Time.deltaTime * sensibilidade;
        }
        else
        {
            input -= Time.deltaTime * sensibilidade;
        }
        input = Mathf.Clamp(input, 0, 1);
        
    }
}

