using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StatsManager : MonoBehaviour
{
    public float totalMoney;
    public float totalExp;
    public int totalLvl;
    public string[] myWeapons;
    //public string[] allWeapons;
    public static StatsManager instance;

    private void Awake()
    {
        if (instance == null) instance = this;
        else
        {
            Destroy(gameObject);
            return;
        }
        DontDestroyOnLoad(gameObject);

        myWeapons[0] = "pistol1";
        myWeapons[1] = "assault1";
        myWeapons[2] = "null1";
        LoadButton();
    }




    private void OnApplicationQuit()
    {
        SaveButton();
    }
    public void SaveButton()
    {
        Saving.Save();
        Debug.Log("saved");
    }
    public void LoadButton()
    {
        SaveData data = Saving.Load();
        totalMoney = data.totalMoney;
        totalExp = data.totalExp;
        totalLvl = data.totalLvl;
        myWeapons[0] = data.myWeapons[0];
        myWeapons[1] = data.myWeapons[1];
        myWeapons[2] = data.myWeapons[2];
        Debug.Log("loaded");
    }
}
