using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun : MonoBehaviour
{
    public float damage;
    public float shootingSpeed; //how many shoots per sec if 0 ten is manual
    float delayMax; //how many sec between shoots
    float delay = 0;

    public Camera fpsCam;
    public ParticleSystem muzzleFlash;

    private void Start()
    {
        delayMax = 1f / shootingSpeed;
    }
    void Update()
    {
        if (shootingSpeed == 0)
        {
            if(Input.GetButtonDown("Fire1"))
                ShootWithRaycast();
        } else if(Input.GetButton("Fire1") && delay <= 0)
        {
            ShootWithRaycast();
            delay = delayMax;
        }
        delay -= Time.deltaTime;
    }

    void ShootWithRaycast()
    {
        muzzleFlash.Play();
        AudioManager.instance.Play("Pistol1");

        RaycastHit hit;
        if(Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit))
        {
            Debug.Log(hit.transform.name);
            Enemy enemy = hit.transform.GetComponent<Enemy>();
            if (enemy != null)
            {
                enemy.TakeDamage(damage);
            }
        }
    }
}
