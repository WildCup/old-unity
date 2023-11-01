using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    public GameObject levelFinishedPanel;
    public GameObject LosePanel;
    public GameObject player;
    public GameObject playerDead;

    private void OnTriggerEnter(Collider other)
    {
        if (other.transform.tag == "Player")
        {
            LevelFinished();
            Debug.Log("level finished");
        }
    }
    void LevelFinished()
    {
        //levelFinishedPanel.SetActive(true);
        SceneManager.LoadScene("LevelFinished");
    }
    public void YouLose()
    {
        LosePanel.SetActive(true);
        player = GameObject.Find("Player");
        playerDead.SetActive(true);
        Transform t = player.transform;
        playerDead.transform.position = t.position;
        player.SetActive(false);
        AudioManager.instance.StopAndPlay("Lose");
        Cursor.lockState = CursorLockMode.Confined;
    }
    public void EndLevel() 
    {
        SceneManager.LoadScene(0);
    }
}
