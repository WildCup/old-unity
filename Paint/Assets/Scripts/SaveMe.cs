using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class SaveMe : MonoBehaviour
{
    public void SaveAsPngIHope()
    {
        Texture2D picT = FreeDraw.Drawable.drawable_texture;
        NativeGallery.SaveImageToGallery(picT.EncodeToPNG(),"SimplePaint","ypurPic_"+ System.DateTime.Now.ToString("dd-MM-yyy_HH-mm-ss"));
        Debug.Log("Saved! I hope");

        string name = string.Format("{0}_Capture{1}_{2}.png", Application.productName, "{0}", System.DateTime.Now.ToString("yyyy-MM-dd_HH-mm-ss"));
        Debug.Log("Permission result: " + NativeGallery.SaveImageToGallery(picT, Application.productName + " Captures", name));
    }
}
