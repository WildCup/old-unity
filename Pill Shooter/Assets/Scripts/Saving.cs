using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization.Json;
public static class Saving 
{
    public static void Save()
    {
        //BinaryFormatter formatter = new BinaryFormatter();
        string path = Application.persistentDataPath + "/PlayerStats.fuckyou";
        SaveData data = new SaveData();
        
        //binary
        //FileStream stream = new FileStream(path, FileMode.Create);
        //formatter.Serialize(stream, data);
        //stream.Close();

        //json
        string jsonstring = JsonUtility.ToJson(data);
        System.IO.File.WriteAllText(path, jsonstring);
    }
    public static SaveData Load()
    {
        string path = Application.persistentDataPath + "/PlayerStats.fuckyou";
        if (File.Exists(path))
        {
            //binary
            //BinaryFormatter formatter = new BinaryFormatter();
            //SaveData data = formatter.Deserialize(stream) as SaveData;
            //FileStream stream = new FileStream(path, FileMode.Open);
            //stream.Close();

            //json
            string jsonstring = System.IO.File.ReadAllText(path);
            SaveData data = JsonUtility.FromJson<SaveData>(jsonstring);

            return data;
        }
        else
        {
            Debug.Log("no file found");
            return null;
        }
        
    }
}
