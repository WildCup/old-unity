using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class BuildLevel : MonoBehaviour
{
    public GameObject[] obstacles;
    public float distance = 8f;

    public NavMeshSurface surface;

    void Start()
    {
        for (int i = 0; i < 100/distance; i++)
        {
            Vector3 t = new Vector3(Random.Range(-8, 8), 1, 15 + i * distance);
            Instantiate(obstacles[Random.Range(0, obstacles.Length)], t, Quaternion.identity);
            Instantiate(obstacles[Random.Range(0, obstacles.Length)], new Vector3(-t.x,t.y,t.z), Quaternion.identity);
        }
        //update navmesh
        surface.BuildNavMesh();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
