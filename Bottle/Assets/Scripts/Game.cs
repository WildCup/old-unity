using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;

public class Game : MonoBehaviour
{
    public static Game instance;
    public List<Quest> quests = new List<Quest>();
    public List<Player> players = new List<Player>();

    List<int> q1 = new List<int>();
    List<int> q2 = new List<int>();
    List<int> q3 = new List<int>();
    List<int> q4 = new List<int>();
    List<int> q5 = new List<int>();

    public TextMeshProUGUI text;
    public TextMeshProUGUI debugText;
    public TextMeshProUGUI restartText;
    public Image image;

    int current = -1;
    float chanse5 = 0.01f;//%
    float chanse4 = 0.09f ; //%
    float chanse3 = 1.9f; //%
    float chanse2 = 10f; //%
    float chanse1 = 88f; //%

    private void Awake()
    {
        instance = this;
        SaveLoad.Load();
    }
    private void Start()
    {
        updateQuests();
        RollNextQuestion();
        Sort();
    }

    public void updateQuests()
    {
        q1.Clear();
        q2.Clear();
        q3.Clear();
        q4.Clear();
        q5.Clear();

        for (int i = 0; i < quests.Count; i++)
        {
            if (!quests[i].used)
            {
                switch (quests[i].lvl)
                {
                    case 1: q1.Add(i); break;
                    case 2: q2.Add(i); break;
                    case 3: q3.Add(i); break;
                    case 4: q4.Add(i); break;
                    case 5: q5.Add(i); break;
                }
            }
            else
            {
                float total = chanse5 + chanse4 + chanse3 + chanse2;
                chanse5 = Mathf.Min(50f, chanse5 + chanse5 / total); //0.01f + (0.01f / 12 * used)%
                chanse4 = Mathf.Min(50f, chanse4 + chanse4 / total); //0.09f + (0.09f / 12 * used)%
                chanse3 = Mathf.Min(70f, chanse3 + chanse3 / total); //1.9f  + (1.9f / 12 * used)%
                chanse2 = Mathf.Min(80f, chanse2 + chanse2 / total); //10f + (10f / 12 * used)%
                chanse1 = Mathf.Max(30f, chanse1 - 1f);              //88 - used%
            }
        }
    }

    public void RollNextQuestion()
    {
        current++;
        float total = chanse5 + chanse4 + chanse3 + chanse2;
        chanse5 = Mathf.Min(50f, chanse5 + chanse5 / total); //0.01f + (0.01f / 12 * used)%
        chanse4 = Mathf.Min(50f, chanse4 + chanse4 / total); //0.09f + (0.09f / 12 * used)%
        chanse3 = Mathf.Min(70f, chanse3 + chanse3 / total); //1.9f  + (1.9f / 12 * used)%
        chanse2 = Mathf.Min(80f, chanse2 + chanse2 / total); //10f + (10f / 12 * used)%
        chanse1 = Mathf.Max(30f, chanse1 - 1f);              //88 - used%

        if (q1.Count == 0) chanse1 = 0f;
        if (q2.Count == 0) chanse2 = 0f;
        if (q3.Count == 0) chanse3 = 0f;
        if (q4.Count == 0) chanse4 = 0f;
        if (q5.Count == 0) chanse5 = 0f;

        float random = Random.Range(0, 100);
        if (random < chanse5 || chanse4 == 0)
        {
            int i = Random.Range(0, q5.Count);
            current = q5[i];
        }
        else if (random < chanse4 || chanse3 == 0)
        {
            int i = Random.Range(0, q4.Count);
            current = q4[i];
        }
        else if (random < chanse3 || chanse2 == 0)
        {
            int i = Random.Range(0, q3.Count);
            current = q3[i];
        }
        else if (random < chanse2 || chanse1 == 0)
        {
            int i = Random.Range(0, q2.Count);
            current = q2[i];
        }
        else if (chanse1 > 0)
        {
            int i = Random.Range(0, q1.Count);
            current = q1[i];
        }
        else
        {
            text.text = "You finished the game.\nPlease restart your profress.";
            return;
        }
        
        text.text = quests[current].quest;

        switch (quests[current].lvl)
        {
            case 1: image.color = Colors.instance.cLvl1; break;
            case 2: image.color = Colors.instance.cLvl2; break;
            case 3: image.color = Colors.instance.cLvl3; break;
            case 4: image.color = Colors.instance.cLvl4; break;
            case 5: image.color = Colors.instance.cLvl5; break;
        }

        debugText.text =
            "lvl 1: " + q1.Count + "  =>  " + Mathf.Max(0, 100f - chanse2).ToString("f2") + "%\n" +
            "lvl 2: " + q2.Count + "  =>  " + Mathf.Max(0, chanse2 - chanse3).ToString("f2") + "%\n" +
            "lvl 3: " + q3.Count + "  =>  " + Mathf.Max(0, chanse3 - chanse4).ToString("f2") + "%\n" +
            "lvl 4: " + q4.Count + "  =>  " + Mathf.Max(0, chanse4 - chanse5).ToString("f2") + "%\n" +
            "lvl 5: " + q5.Count + "  =>  " + chanse5.ToString("f2") + "%";
        Debug.Log(chanse1 + "   " + chanse2.ToString("f2") + "   " + chanse3.ToString("f2") + "   " + chanse4.ToString("f2") + "   " + chanse5.ToString("f2") + "\n\n");
    }

    public void Done()
    {
        quests[current].used = true;
        switch (quests[current].lvl)
        {
            case 1: q1.Remove(current); break;
            case 2: q2.Remove(current); break;
            case 3: q3.Remove(current); break;
            case 4: q4.Remove(current); break;
            case 5: q5.Remove(current); break;
        }
        RollNextQuestion();
    }
    public void Reject()
    {
        RollNextQuestion();
    }

    private void OnApplicationQuit()
    {
        SaveLoad.Save();
    }
    public void ResetProgres()
    {
        foreach(Quest q in quests)
            q.used = false;

        updateQuests();
        restartText.text = "Done!";

        chanse5 = 0.01f;//%
        chanse4 = 0.09f; //%
        chanse3 = 1.9f; //%
        chanse2 = 10f; //%
        chanse1 = 88f; //%

        RollNextQuestion();
        StartCoroutine(RestartText());
    }
    public void Sort()
    {
        quests.Sort(delegate(Quest a, Quest b) {
            if (a.lvl != b.lvl) return a.lvl.CompareTo(b.lvl);
            else return a.quest.CompareTo(b.quest);
        });
        updateQuests();
    }
    IEnumerator RestartText()
    {
        yield return new WaitForSeconds(1);
        restartText.text = "Restart progress";
    }
}
