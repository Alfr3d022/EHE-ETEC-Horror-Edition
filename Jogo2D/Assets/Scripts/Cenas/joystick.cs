using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class joystick : MonoBehaviour
{
    public GameObject joys;
    public GameObject joysFundo;
    public Vector2 joysVec;
    private Vector2 joysPosTouch;
    private Vector2 joysPosOiginal;
    private float joysRaio;

    void Start()
    {
        joysPosOiginal = joysFundo.transform.position;
        joysRaio = joysFundo.GetComponent<RectTransform>().sizeDelta.y / 4;

    }

    public void PointerDown()
    {
        joys.transform.position = Input.mousePosition;
        
        joysPosTouch = Input.mousePosition;
    }

    public void arrastar(BaseEventData baseEventData)
    {
        PointerEventData pointerEventData = baseEventData as PointerEventData;
        Vector2 arrastPos = pointerEventData.position;
        joysVec = (arrastPos - joysPosTouch).normalized;

        float joysDist = Vector2.Distance(arrastPos, joysPosOiginal);

        if(joysDist < joysRaio)
        {
            joys.transform.position = joysPosOiginal + joysVec * joysDist;
        }

        else
        {
            joys.transform.position = joysPosOiginal + joysVec * joysRaio;
        }
    }
    
    public void PointerUp()
    {
        joysVec = Vector2.zero;
        joys.transform.position = joysPosOiginal;
        joysFundo.transform.position = joysPosOiginal;
    }

}
