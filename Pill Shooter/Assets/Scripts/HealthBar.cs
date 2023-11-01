using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    public Slider slider;
    public Text lvlText;
    //public Animator animator;
    
    public void SetMaxHealth(float health)
    {
        slider.maxValue = health;
        SetHealth(health);
    }

    public void SetHealth(float health)
    {
        slider.value = health;
        //hpText.text = "HP:" + health.ToString("0");
        //PlayAnimationDamage();
    }/*
    public void PlayAnimationDamage()
    {
        animator.Play("HealthBarDamage",-1,0f);
    }*/
    public void SetText(int lvl)
    {
        lvlText.text = lvl.ToString();
    }
}
