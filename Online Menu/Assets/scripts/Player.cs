using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Playerr : Photon.MonoBehaviour
{
    public GameObject playerCamera;
    private void Awake()
    {
        if (photonView.isMine)
        {
            playerCamera.SetActive(true);
        }
    }
}
