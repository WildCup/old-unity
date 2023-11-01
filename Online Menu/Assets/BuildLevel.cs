using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildLevel : MonoBehaviour
{
    public GameObject[] cubes;
    GameObject currentCube;
    int i;

    int numberToSpawn = 70;
    float minX = -21f;
    float maxX = 19f;
    float minY = -6f;
    float maxY = 20f;
    float minZ = 9f;
    float maxZ = 200f;
    Vector3 position;

    // Start is called before the first frame update
    void Start()
    {
        int spawned = 0;
        while(spawned < numberToSpawn)
        {
            i = Random.Range(0, cubes.Length - 1);
            currentCube = cubes[i];

            //center
            position = new Vector3(Random.Range(minX, maxX), Random.Range(minY, maxY), Random.Range(minZ, maxZ));
            Instantiate(currentCube, position, Quaternion.identity);
            //bottom
            position = new Vector3(Random.Range(minX, maxX), Random.Range(minY, minY + 10f), Random.Range(minZ, maxZ));
            Instantiate(currentCube, position, Quaternion.identity);
            //left
            position = new Vector3(Random.Range(minX, minX + 10f), Random.Range(minY, maxY), Random.Range(minZ, maxZ));
            Instantiate(currentCube, position, Quaternion.identity);
            spawned++;
            //right
            position = new Vector3(Random.Range(maxX-10f, maxX), Random.Range(minY, maxY), Random.Range(minZ, maxZ));
            Instantiate(currentCube, position, Quaternion.identity);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
