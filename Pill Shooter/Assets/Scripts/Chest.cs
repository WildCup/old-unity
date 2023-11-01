using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chest : MonoBehaviour
{
    public GameObject chestParticle;
    public Animator animator;
    public int quality = 0;
    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("collided");
        if(collision.transform.tag == "Player")
        {
            Debug.Log("collided with Player");
            collision.collider.GetComponent<PlayerStats>().ErnedChest(quality);
            GameObject cp = Instantiate(chestParticle, transform.position, transform.rotation);
            Destroy(cp, 2f);
            Destroy(gameObject);
        }
        if (collision.transform.tag == "Enemy")
        {
            Debug.Log("collided with Enemy");
            GameObject cp = Instantiate(chestParticle, transform.position, transform.rotation);
            Destroy(cp, 2f);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.transform.tag == "Player")
        {
            other.GetComponent<PlayerStats>().ErnedChest(quality);
            GameObject cp = Instantiate(chestParticle, transform.position, transform.rotation);
            Destroy(cp, 2f);
            //animator.Play("Open", -1, 0);
            Destroy(gameObject);
        }
    }
}
