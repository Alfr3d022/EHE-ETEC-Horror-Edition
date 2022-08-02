using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class player : MonoBehaviour
{
    [Header("Joystick")]
    public joystick joystick;

    public float playerSpeed;
    private Rigidbody2D rb2d;

    [Header("Animação")]
    private SpriteRenderer sprite;
    private Animator animacao;
    private float direcao;

    private bool vivo = true;

    [Header("Vida")]
    public int vidaMax = 3;
    public int vidaAtual;
    public bool invencivel = false;
    public GameObject vida3;
    public GameObject vida2;
    public GameObject vida1;

    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        animacao = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
        vidaAtual = vidaMax;

    }
    private void Update()
    {
        direcao = joystick.joysVec.x;
        MudarDirecao();
        Vida();
        RecebendoComida();
    }

    //Responsavel por movimentar o personagem
    void FixedUpdate()
    {
        if (vivo)
        {
            if (joystick.joysVec.y != 0)
            {
                rb2d.velocity = new Vector2(joystick.joysVec.x * playerSpeed, joystick.joysVec.y * playerSpeed);
            }

            else
            {
                rb2d.velocity = Vector2.zero;
            }
        }
        else
        {
            rb2d.velocity = Vector2.zero;
        }

    }
    //Responsavel por movimentar o personagem Fim

    //Responsavel por mudar a direção
    void MudarDirecao()
    {
        if (vivo)
        {
            if (direcao > 0)
            {
                animacao.SetBool("Correndo", true);
            }
            else
            {
                animacao.SetBool("Correndo", false);
            }
            if (direcao < 0)
            {
                animacao.SetBool("CorrendoE", true);
            }
            else
            {
                animacao.SetBool("CorrendoE", false);

            }
        }
    }
    //Responsavel por mudar a direção Fim

    public void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Cena26"))
        {
            Invoke("Cena26", 0.1F);
        }
        if (collision.gameObject.CompareTag("CenaCorre26"))
        {
            Invoke("CenaCorre26", 0.1F);
        }
        if (collision.gameObject.CompareTag("Cena26Antes"))
        {
            Invoke("Cena26Antes", 0.1F);
        }
        if (collision.gameObject.CompareTag("CenaCorreComeco"))
        {
            Invoke("CenaCorreComeco", 0.1F);
        }
        if (collision.gameObject.CompareTag("saida"))
        {
            Invoke("sair", 0.1F);
        }
        if (collision.gameObject.CompareTag("Dormir"))
        {
            Invoke("Dormir", 4F);
            animacao.SetBool("Morto", true);
            vivo = false;
        }
    }

    //Recarrgar
    private void RecarregarNivel()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    private void Cena26()
    {
        SceneManager.LoadScene("Cena26Corre");
    }

    private void CenaCorre26()
    {
        SceneManager.LoadScene("CenaCorre26");
    }
    private void Cena26Antes()
    {
        SceneManager.LoadScene("Cena26Antes");
    }
    private void CenaCorreComeco()
    {
        SceneManager.LoadScene("CenaCorreComeço26");
    }
    private void Dormir()
    {
        SceneManager.LoadScene("Cena26");
    }

    private void sair()
    {
        SceneManager.LoadScene("Final");
    }
    //Recarrgar Fim

    //efeito de dano
    IEnumerator Dano()
    {
        for(float i = 0f; i <1f; i += 0.1f)
        {
            sprite.enabled = false;
            yield return new WaitForSeconds(0.1f);
            sprite.enabled = true;
            yield return new WaitForSeconds(0.1f);
        }
        invencivel = false;
    }
    //efeito de dano Fim

    public void DanoPlayer()
    {
        invencivel = true;
        vidaAtual--;
        StartCoroutine(Dano());

        if (vidaAtual <= 0)
        {
            vivo = false;
            animacao.SetBool("Morto", true);
            Invoke("RecarregarNivel", 1.9f);
            vidaAtual = vidaMax;
            vida3.SetActive(true);
            vida2.SetActive(true);
            vida1.SetActive(true);
        }
    }
    //vida
    public void Vida()
    {
        if (vidaAtual == 2)
        {
            vida3.SetActive(false);
        }
        if (vidaAtual == 1)
        {
            vida2.SetActive(false);
        }
        if (vidaAtual < 1)
        {
            vida1.SetActive(false);
        }
    }
    //vida Fim

    //Recebendo vida
    public void Comendo()
    {
        vidaAtual += 1;
    }
    //Recebendo vida Fim

    public void RecebendoComida()
    {
        if(vidaAtual  >= 4)
        {
            vidaAtual--;
        }
        else
        {
            if (vidaAtual == 3)
            {
                vida3.SetActive(true);
            }
            if (vidaAtual == 2)
            {
                vida2.SetActive(true);
            }
        }
        
    }



}
