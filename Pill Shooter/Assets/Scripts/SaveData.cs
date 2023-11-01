using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveData
{
    public float totalMoney;
    public float totalExp;
    public int totalLvl;
    public string[] myWeapons;
    //public string[] allWeapons;

    public SaveData()
    {
        StatsManager stats = StatsManager.instance;

        totalMoney = stats.totalMoney;
        totalExp = stats.totalExp;
        totalLvl = stats.totalLvl;
        myWeapons = new string[3];
        myWeapons[0] = stats.myWeapons[0];
        myWeapons[1] = stats.myWeapons[1];
        myWeapons[2] = stats.myWeapons[2];
    }
}
