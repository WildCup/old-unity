using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

namespace FreeDraw
{
    // Helper methods used to set drawing settings
    public class DrawingSettings : MonoBehaviour
    {
        public static bool isCursorOverUI = false;
        Color lastColor;
        int lastMarkerSize;
        int lastEraserSize;
        //change them
        public Image pensilImage;
        public Slider pensilSlider;
        public Slider eraserSlider;

        // Changing pen settings is easy as changing the static properties Drawable.Pen_Colour and Drawable.Pen_Width
        public void SetMarkerColour(Color new_color)
        {
            Drawable.Pen_Colour = new_color;
            pensilImage.color = lastColor;
        }
        // new_width is radius in pixels
        public void SetMarkerWidth(int new_width)
        {
            Drawable.Pen_Width = new_width;
        }
        public void SetMarkerWidth(float new_width)
        {
            SetMarkerWidth((int)new_width);
            lastMarkerSize = (int)new_width;
        }
        public void SetEraseWidth(float new_width)
        {
            SetMarkerWidth((int)new_width);
            lastEraserSize = (int)new_width;
        }

        // Call these these to change the pen settings

        public void SetMarker()
        {
            SetMarkerWidth(lastMarkerSize);
            SetMarkerColour(lastColor);
        }
        public void SetMarkerBlack()
        {
            Color c = Color.black;
            lastColor = c;
            SetMarkerColour(c);
        }
        public void SetMarkerRed()
        {
            Color c = Color.red;
            lastColor = c;
            SetMarkerColour(c);
        }
        public void SetMarkerGreen()
        {
            Color c = Color.green;
            lastColor = c;
            SetMarkerColour(c);
        }
        public void SetMarkerBlue()
        {
            Color c = Color.blue;
            lastColor = c;
            SetMarkerColour(c);
        }
        public void SetEraser()
        {
            SetMarkerWidth(lastEraserSize);
            SetMarkerColour(Color.white);
        }

        public void SaveAsPng()
        {
            byte[] bytes = Drawable.drawable_texture.EncodeToPNG();
            string fileName = string.Format("{0}/SavedImages/yourPic {1}.png", Application.dataPath, System.DateTime.Now.ToString("dd-MM-yyy_HH-mm-ss"));
            System.IO.File.WriteAllBytes(fileName, bytes);
            Debug.Log("Saved!");
        }


        private void Start()
        {
            float eSize = PlayerPrefs.GetFloat("lastEraserSize", 10f);
            float mSize = PlayerPrefs.GetFloat("lastMarkerSize", 10f);

            SetEraseWidth(eSize);
            SetMarkerWidth(mSize);
            lastColor.a = PlayerPrefs.GetFloat("lastColor.a", 0f);
            lastColor.b = PlayerPrefs.GetFloat("lastColor.b", 0f);
            lastColor.g = PlayerPrefs.GetFloat("lastColor.g", 255f);
            SetMarkerColour(lastColor);

            pensilImage.color = lastColor;
            eraserSlider.value = eSize;
            pensilSlider.value = mSize;
        }
        private void OnApplicationQuit()
        {
            PlayerPrefs.SetFloat("lastMarkerSize", lastMarkerSize);
            PlayerPrefs.SetFloat("lastEraserSize", lastEraserSize);
            PlayerPrefs.SetFloat("lastColor.a", lastColor.a);
            PlayerPrefs.SetFloat("lastColor.b", lastColor.b);
            PlayerPrefs.SetFloat("lastColor.g", lastColor.g);
        }
    }
}