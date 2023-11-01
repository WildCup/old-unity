using UnityEngine;
using UnityEngine.UI;

public class ShootingBullets : MonoBehaviour
{
    //bullet
    public GameObject bulletPref;
    public float shootForce;

    //gun stats
    public float timeBetweenShooting, spread, reloadTime, damage;
    public int magazingeSize, bulletsPerTap;
    public bool automatic;

    int bulletsLeft, bulletsShot;
    bool shooting, readyToShoot, reloading;
    
    //refrences
    public Camera fpsCam;
    public Transform attackPoint;
    public LayerMask myLayerMask;
    //graphics
    public ParticleSystem muzzleFlash;
    public Text bulletsText;
    public string soundName;
    public Sprite icon;

    bool allowInvoke = true;

    private void Awake()
    {
        bulletsLeft = magazingeSize;
        readyToShoot = true;
    }

    private void Update()
    {
        MyInput();
        //graphisc
        bulletsText.text = bulletsLeft + "/" + magazingeSize;
    }

    void MyInput()
    {
        if (automatic) shooting = Input.GetKey(KeyCode.Mouse0);
        else shooting = Input.GetKeyDown(KeyCode.Mouse0);

        if(readyToShoot && shooting && !reloading && bulletsLeft > 0)
        {
            Shoot();
        }
        //reloading
        if (Input.GetKeyDown(KeyCode.R) && bulletsLeft < magazingeSize && !reloading) Reload();
        if (readyToShoot && shooting && !reloading && bulletsLeft <= 0) Reload();
    }

    void Shoot()
    {
        readyToShoot = false;

        //find the hitting position using a raycast
        Ray ray = fpsCam.ViewportPointToRay(new Vector3(0.5f,0.5f,0f));
        RaycastHit hit;
        //check if raycast hits sth
        Vector3 targetPoint;
        if (Physics.Raycast(ray, out hit, 50f,  myLayerMask))
        {
            targetPoint = hit.point;
            //Debug.Log(hit.transform.name);
        }
        else targetPoint = ray.GetPoint(75); //a point far away from the player 

        bulletsShot = bulletsPerTap; //if shotgun
        while (bulletsShot > 0)
        {
            //calculate direction
            Vector3 direction = targetPoint - attackPoint.position;
            //calculate spreat
            float randomX = Random.Range(-spread, spread);
            float randomY = Random.Range(-spread, spread);
            direction += new Vector3(randomX, randomY, 0);
            //instantiate bullet    
            GameObject bulletInst = Instantiate(bulletPref, attackPoint.position, Quaternion.identity);
            bulletInst.transform.forward = direction.normalized;
            bulletInst.GetComponent<BulletDealsDamage>().damage = damage;
            //add force
            bulletInst.GetComponent<Rigidbody>().AddForce(direction.normalized * shootForce, ForceMode.Impulse);
            bulletsShot--;
        }

        //effects
        muzzleFlash.Play();
        AudioManager.instance.Play(soundName);

        bulletsLeft--;

        if (allowInvoke) 
        {
            Invoke("ResetShoot", timeBetweenShooting);
            allowInvoke = false;
        }
    }

        void ResetShoot()
    {
        readyToShoot = true;
        allowInvoke = true;
    }

    void Reload()
    {
        reloading = true;
        Invoke("ReloadFinish", reloadTime);
    }
    void ReloadFinish()
    {
        bulletsLeft = magazingeSize;
        reloading = false;
    }
}
