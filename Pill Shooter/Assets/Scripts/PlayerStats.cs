using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerStats : MonoBehaviour
{
    public int killed = 0;
    public float myMoney = 0f;
    public float myExp = 0f;
    public int myLvl = 1;
    float expNeeded = 100f;

    float hp = 10f;
    public LevelManager levelManager;
    public GameObject deadParticle;

    public int[] myChest;
    //public Text moneyErnedText;
    //public Animator moneyErnedAnimator;
    public GameObject earnedPref;
    public GameObject parentCanvas;
    public Transform earnedPosition;

    public HealthBar healthBar;
    public HealthBar levelBar;

    private void Start()
    {
        myChest = new int[4];
        myChest[0] = 0;
        myChest[1] = 0;
        myChest[2] = 0;
        myChest[3] = 0;

        myLvl = StatsManager.instance.totalLvl;
        myExp = StatsManager.instance.totalExp;
        myMoney = StatsManager.instance.totalMoney;
        LevelUp(0f);

        healthBar.SetMaxHealth(hp);

    }
    

    public void Earn(float amount)
    {
        myMoney += amount;
        //moneyErnedText.text = "+" + amount + "$";
        //moneyErnedAnimator.Play("ErnedTextAnimation",-1,0);
        float randomX = Random.Range(-70f, 0f);
        float randomY = Random.Range(-30f, 0f);
        GameObject e = Instantiate(earnedPref, earnedPosition);
        e.transform.position += new Vector3(randomX, randomY, 0f);
        e.transform.parent = parentCanvas.transform;
        e.GetComponent<Text>().text = "+" + amount + "$";
        //e.GetComponent<Animator>().Play("ErnedTextAnimation", -1, 0);
        //Destroy(e, 1f);

        AudioManager.instance.Play("Coin");
        StatsManager.instance.totalMoney = myMoney;
    }

    public void ErnedChest(int quality)
    {
        switch(quality)
        {
            case 0: myChest[0]++; break;
            case 1: myChest[1]++; break;
            case 2: myChest[2]++; break;
            case 3: myChest[3]++; break;
            default: Debug.Log("error"); break;
        }
        Debug.Log(string.Format("I have 0:{0}, 1:{1}, 2:{2}, 3:{3} chests", myChest[0], myChest[1], myChest[2], myChest[3]));
        AudioManager.instance.Play("Chest");
    }
    public void Killed()
    {
        killed++;
    }
    public void LevelUp(float amount)
    {
        //exp needed for each lvl
        //2: 100
        //3: 200
        //4: 400
        //5: 800
        //6: 1600
        //7: 3200
        expNeeded = 100 * Mathf.Pow(2f, myLvl - 1);
        myExp += amount;
        if (myExp >= expNeeded)
        {
            myExp -= expNeeded;
            myLvl++;
            AudioManager.instance.Play("LevelUp");
        }

        StatsManager.instance.totalLvl = myLvl;
        StatsManager.instance.totalExp = myExp;

        levelBar.SetMaxHealth(expNeeded);
        levelBar.SetHealth(myExp);
        levelBar.SetText(myLvl);
    }

    public void TakeDamage(float damage)
    {
        hp -= damage;
        healthBar.SetHealth(hp);
        if (hp <= 0)
        {
            Die();
        }
    }
    void Die()
    {
        //Destroy(transform.gameObject);
        GameObject p = Instantiate(deadParticle, transform.position, Quaternion.identity);
        Destroy(p, 5f);
        levelManager.YouLose();
    }
}
