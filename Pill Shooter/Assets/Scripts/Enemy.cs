using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public float health = 100f;
    public float worth = 1f;
    public float exp = 1f;
    NavMeshAgent agent;
    Transform player;
    public LayerMask whatIsGround, whatIsPlayer;

    //patroling 
    public Vector3 walkPoint;
    bool walkPointSet;
    public float walkPointRange;

    //atacking
    public float timeBetweenAtack;
    bool alreadyAttacked;
    public GameObject bulletPref;
    public Transform attackPoint;
    public float shootForce = 1f, damage = 10f;

    //states
    public float sightRange, attackRange;
    public bool playerInSightRange, playerInAttackRange;

    //die
    public GameObject dieParticle;
    public GameObject[] moneyPref;

    private void Awake()
    {
        player = GameObject.Find("Player").transform;
        agent = GetComponent<NavMeshAgent>();
    }

    private void Update()
    {
        //  check for sight and attack rage
        playerInSightRange = Physics.CheckSphere(transform.position,sightRange,whatIsPlayer);
        playerInAttackRange = Physics.CheckSphere(transform.position, attackRange, whatIsPlayer);

        if (!playerInSightRange && !playerInAttackRange) Patroling();
        else if (playerInSightRange && !playerInAttackRange) ChasePlayer();
        else if (playerInSightRange && playerInAttackRange) AttackPlayer();
    }
    void Patroling()
    {
        if (!walkPointSet) SearchWalkPoint();
        else agent.SetDestination(walkPoint);

        Vector3 distanceToWalkPoint = transform.position - walkPoint;
        if (distanceToWalkPoint.magnitude < 1f)
            walkPointSet = false;
    }
    void SearchWalkPoint()
    {
        //calculate random point in range
        float randomX = Random.Range(-walkPointRange, walkPointRange);
        float randomZ = Random.Range(-walkPointRange, walkPointRange);
        walkPoint = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
        if (Physics.Raycast(walkPoint, -transform.up, 2f, whatIsGround))
            walkPointSet = true;
    }

    void ChasePlayer()
    {
        agent.SetDestination(player.position);  
    }

    void AttackPlayer()
    {
        agent.SetDestination(transform.position);
        transform.LookAt(player);

        if (!alreadyAttacked)
        {
            //atack Shooting code
            GameObject currentBullet = Instantiate(bulletPref, attackPoint.position,transform.rotation);
            Vector3 attackDirection = (player.position - attackPoint.position).normalized;
            currentBullet.GetComponent<Rigidbody>().AddForce(attackDirection * shootForce, ForceMode.Impulse);
            currentBullet.GetComponent<BulletDealsDamage>().damage = damage;

            // la la la
            alreadyAttacked = true;
            Invoke(nameof(ResetAtack), timeBetweenAtack);
        }
    }
    private void ResetAtack()
    {
        alreadyAttacked = false;
    }

    public void TakeDamage(float damage)
    {
        health -= damage;
        if (health <= 0)
        {
            Die();
        }
    }

    void Die()
    {
        player.GetComponent<PlayerStats>().Killed();
        //graphics
        GameObject dieParticleInst = (GameObject)Instantiate(dieParticle, transform.position, transform.rotation);
        Destroy(dieParticleInst, 2f);
        //money[]
        float[] value = new float[] {1f, 10f, 50f, 100f, 500f, 5000f };
        float f = 0f;
        for (int i = 5; i >= 0; i--)
        {
            bool done = false;
            while(!done)
            {
                if (worth >= value[i])
                {
                    float randomX = Random.Range(-f,f);
                    float randomZ = Random.Range(-f,f);
                    Instantiate(moneyPref[i], transform.position + new Vector3(randomX,0f,randomZ), Quaternion.Euler(0, 0, 0));
                    f += .4f;
                    f = Mathf.Min(f,4f);
                    worth -= value[i];
                }
                else done = true;
            }
        }
        //exp
        player.GetComponent<PlayerStats>().LevelUp(exp);
        Destroy(gameObject);
    }


}
