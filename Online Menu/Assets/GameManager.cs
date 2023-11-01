using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public GameObject playerPrefab;
    public GameObject gameCanvas;
    public GameObject sceneCamera;
    public Text textPing;

    private void Awake()
    {
        gameCanvas.SetActive(true);
    }

    private void Update()
    {
        textPing.text = "ping: " + PhotonNetwork.GetPing();
    }

    public void spawnPlayer()
    {
        float randomValue = Random.Range(-1f, 1f);
        
        Debug.Log("Spawn the player");
        PhotonNetwork.Instantiate(this.playerPrefab.name, new Vector3(this.transform.position.x * randomValue, this.transform.position.y, this.transform.position.z * randomValue), Quaternion.identity, 0);
        
        gameCanvas.SetActive(false);
        //sceneCamera.SetActive(false);
    }

}
