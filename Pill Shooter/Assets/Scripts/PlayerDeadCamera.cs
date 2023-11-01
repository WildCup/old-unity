using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDeadCamera : MonoBehaviour
{
    public Animator animator;
    void Start()
    {
        if (transform.position.x < 0) animator.Play("CameraDeadAnimationLeft", -1, 0);
        else animator.Play("CameraDeadAnimationRight", -1, 0);
    }
}
