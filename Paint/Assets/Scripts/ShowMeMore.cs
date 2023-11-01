using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShowMeMore : MonoBehaviour
{
    public GameObject pensilPanel;
    public GameObject eraserPanel;

    public Animator copyAnimator;
    public Animator saveAnimator;

    public GameObject circle;
    public Transform pensilTransform;
    public Transform eraserTransform;

    void Start()
    {
        pensilPanel.SetActive(false);
        eraserPanel.SetActive(false);
    }

    public void ActivePensilPanel()
    {
        eraserPanel.SetActive(false);
        if(circle.transform.position == pensilTransform.position)
            pensilPanel.SetActive(true);
        else circle.transform.position = pensilTransform.position;
    }
    public void ActiveEraserPanel()
    {
        pensilPanel.SetActive(false);
        if(circle.transform.position == eraserTransform.position)
            eraserPanel.SetActive(true);
        else circle.transform.position = eraserTransform.position;
    }
    public void ActiveCopyPanel()
    {
        copyAnimator.Play("panelDisappear", -1, 0f);
        //copy
    }
    public void ActiveSavePanel()
    {
        saveAnimator.Play("panelDisappear", -1, 0f);
        //save
    }
}
