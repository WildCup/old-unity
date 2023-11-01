using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Money : MonoBehaviour
{
    public float amount = 1f;
    public float rotateSpeed = 20f;

    private void OnTriggerEnter(Collider other)
    {
        PlayerStats ps =  other.GetComponent<PlayerStats>();
        if (ps != null) ps.Earn(amount);
        Debug.Log("earned: " + amount);
        Destroy(gameObject);
    }

    private void Update()
    {
        transform.RotateAround(transform.position, Vector3.up, rotateSpeed * Time.deltaTime);
    }
}
