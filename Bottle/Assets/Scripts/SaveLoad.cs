using UnityEngine;
using System.IO;

public class SaveLoad : MonoBehaviour
{
    static string path = Application.streamingAssetsPath + "\\All Questions.txt"; //"Assets\\StreamingAssets\\All Questions.txt";

    //Load a text file (Assets/Resources/Text/textFile01.txt)
    //var textFile = Resources.Load<TextAsset>("Text/textFile01");
    public static void Save()
    {
        SaveData sd = new SaveData();
        string json = JsonUtility.ToJson(sd);
        File.WriteAllText(path, json);
        Debug.Log("Saved");
    }
    public static void Load()
    {
        if (File.Exists(path))
        {
            string json = File.ReadAllText(path);
            SaveData sd = JsonUtility.FromJson<SaveData>(json);

            Game.instance.quests = sd.quests;
            Game.instance.players = sd.players;
            Debug.Log("Loaded");
        }
        else
        {
            Debug.Log("File was not found");
        }
    }
}
