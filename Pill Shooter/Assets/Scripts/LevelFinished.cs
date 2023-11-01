using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelFinished : MonoBehaviour
{
    
    void Start()
    {
        Cursor.lockState = CursorLockMode.Confined;
        AudioManager.instance.StopAndPlay("Win");
        //calculate killed erned itp;
    }

    public void Continue()
    {
        SceneManager.LoadScene(0);
    }
}
