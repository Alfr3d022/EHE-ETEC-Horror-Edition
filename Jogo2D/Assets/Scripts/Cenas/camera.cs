using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class camera : MonoBehaviour
{
    public Transform player;

    private void Update()
    {
        transform.position = Vector2.Lerp(transform.position, player.position, 0.5f);
    }
}
