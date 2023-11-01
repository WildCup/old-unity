using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletDealsDamage : MonoBehaviour
{
    //refrences
    public GameObject bulletParticle;
    public Rigidbody rb;
    public LayerMask whatIsEnemy;
    //stats
    public bool iDontLikePlayer;
    public float damage = 1f;
    //diffrent stats
    [Range(0f,1f)]
    public float bounciness;
    public float explosionRange;
    //lifetime
    public int maxCollisions;
    public float maxLifetime;
    public bool explodeOnTouch;

    int collisions = 0;
    PhysicMaterial material;


    private void Start()
    {
        if(maxCollisions > 0) Setup();
    }
    private void Update()
    {
        //when to explode
        maxLifetime -= Time.deltaTime;
        if (maxLifetime <= 0) Explode();
    }
    void Setup()
    {
        //create a new physic material
        material = new PhysicMaterial();
        material.bounciness = bounciness;
        material.frictionCombine = PhysicMaterialCombine.Minimum;
        material.bounceCombine = PhysicMaterialCombine.Maximum;
        GetComponent<SphereCollider>().material = material;

    }
    void Explode()
    {
        GameObject bulletParticleInst = Instantiate(bulletParticle, transform.position, transform.rotation);
        Destroy(bulletParticleInst, 2f);

        //explosion
        if (explosionRange > 0)
        {
            Collider[] enemies = Physics.OverlapSphere(transform.position, explosionRange, whatIsEnemy);
            for (int i = 0; i < enemies.Length; i++)
            {
                //take damage
                if (!iDontLikePlayer)
                {
                    Enemy e = enemies[i].GetComponent<Enemy>();
                    if (e != null) e.TakeDamage(damage);
                }
                else 
                {
                    PlayerStats p = enemies[i].GetComponent<PlayerStats>();
                    if (p != null) p.TakeDamage(damage);
                }
            }
        }



        Destroy(gameObject);
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (explosionRange == 0 || explodeOnTouch) 
        { 
            if (iDontLikePlayer && collision.collider.tag == "Player")
            {
                collision.collider.GetComponent<PlayerStats>().TakeDamage(damage);
                Explode();
            }
            else if (!iDontLikePlayer && collision.collider.tag == "Enemy")
            {
                Enemy e = collision.collider.GetComponent<Enemy>();
                if (e != null) e.TakeDamage(damage);
                Explode();
            }
            else
            {
                collisions++;
                if (collisions > maxCollisions) Explode();
            }
        }
        else
        {
            collisions++;
            if (collisions >= maxCollisions) Explode();
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, explosionRange);
    }
}
