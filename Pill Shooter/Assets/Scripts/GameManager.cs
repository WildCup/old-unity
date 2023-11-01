using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public GameObject PlayPanel;
    public GameObject StoragePanel;
    public GameObject HeroPanel;
    public GameObject ExitPanel;
    bool sthIsOpen = false;

    private void Start()
    {
        AudioManager.instance.Play("ThemeMenu");
    }
    public void PlayTheGame()
    {
        SceneManager.LoadScene(1);
        AudioManager.instance.Stop();
        AudioManager.instance.Play("ThemeGame");
    }
    public void OpenPlay()
    {
        PlayPanel.SetActive(true);
        ClickSound();
        sthIsOpen = true;
    }
    public void OpenStorage()
    {
        StoragePanel.SetActive(true);
        ClickSound();
        sthIsOpen = true;
    }
    public void OpenHero()
    {
        HeroPanel.SetActive(true);
        ClickSound();
        sthIsOpen = true;
    }
    public void X()
    {
        if (sthIsOpen)
        {
            PlayPanel.SetActive(false);
            StoragePanel.SetActive(false);
            HeroPanel.SetActive(false);
            ExitPanel.SetActive(false);
            sthIsOpen = false;
        }
        else 
        { 
            ExitPanel.SetActive(true);
            sthIsOpen = true;
        }
        ClickSound();
    }
    public void GoToLevel(int i)
    {
        ClickSound();
        SceneManager.LoadScene("Level"+i);
        AudioManager.instance.StopAndPlay("ThemeGame");
    }
    public void ClickSound() 
    {
        AudioManager.instance.Play("Click");
    }
    public void UpgradeSound()
    {
        AudioManager.instance.Play("Upgrade");
    }
    public void ExitTheGame()
    {
        Application.Quit();
    }
}
