using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Player : MonoBehaviour
{
    [SerializeField]
    private float speed;

    private float xMovement;

    private Rigidbody2D myBody;

    private SpriteRenderer sr;

    private Animator anim;

    [SerializeField]
    private float jumpForce;

    private bool isGrounded = true;

    private string WALK_ANIMATION = "walk";

    private string GROUND_TAG = "ground";

    private string ENEMY_TAG = "enemy";

    public static bool playerDeath = false;

    public Joystick joystick;

    public static float survivalTime;



    private void Awake()
    {
        survivalTime = 0f;

        myBody = GetComponent<Rigidbody2D>();
        sr = GetComponent<SpriteRenderer>();
        anim = GetComponent<Animator>();

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        playerMoveKeyboard();
        AnimatePlayer();
        jumpPlayer();
        survivalTime += Time.deltaTime;
    }




    private void playerMoveKeyboard()
    {
        //xMovement = Input.GetAxisRaw("Horizontal");
        xMovement = joystick.Horizontal;

        transform.position += new Vector3(xMovement, 0f, 0f) * Time.deltaTime* speed;

    }

    private void AnimatePlayer()
    {
        if (xMovement > 0)
        {
            anim.SetBool(WALK_ANIMATION, true);
            sr.flipX = false;
        }
        else if (xMovement < 0)
        {
            anim.SetBool(WALK_ANIMATION, true);
            sr.flipX = true;
        }
        else
        {
            anim.SetBool(WALK_ANIMATION, false);
        }
   
    }

    private void jumpPlayer()
    {
        //if (Input.GetButtonDown("Jump") && isGrounded)
        if (joystick.Vertical >= 0.5f && isGrounded)

        {
            isGrounded = false;
            myBody.AddForce(new Vector2(0f, jumpForce), ForceMode2D.Impulse);
        }
    
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag(GROUND_TAG))
        {
            isGrounded = true;
        }

        if (collision.gameObject.CompareTag(ENEMY_TAG))
        {
            playerDeath = true;
            Destroy(gameObject);

            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }


    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag(ENEMY_TAG))
        {
            Destroy(gameObject);
        }
    }









} //class
