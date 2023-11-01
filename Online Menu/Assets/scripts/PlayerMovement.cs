using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerMovement : Photon.MonoBehaviour
{
    public CharacterController controller;
    public float speed = 12f;
    public float gravity = -39.24f  ;
    public float jumpHeight = 3f;

    public Transform groundCheck;
    public float groundDistance = 0.4f;
    public LayerMask groundMask;

    //photon
    public PhotonView photonView;
    public GameObject playerCamera;
    public Text playerNameText;

    bool isGrounded;

    Vector3 velocity;


    private void Awake()
    {
        photonView = GetComponent<PhotonView>();
        if (photonView.isMine)
        {
            playerCamera.SetActive(true);
            playerNameText.text = ""; // PhotonNetwork.playerName;
        }
        else
        {
            playerNameText.text = photonView.owner.NickName;
        }
        
    }

    void Update()
    {
        if(photonView.isMine) moving();
    }

    private void moving()
    {
        //x y moving
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        Vector3 move = transform.right * x + transform.forward * z;

        //jumping
        isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
        if (isGrounded && velocity.y < -2f) velocity.y = -2f;

        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
        }

        velocity.y += gravity * Time.deltaTime;

        //actually move
        controller.Move(((move * speed) + velocity) * Time.deltaTime);
    }
}
