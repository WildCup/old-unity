using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AddPlayer : MonoBehaviour
{
    public TextMeshProUGUI gender;
    public Color cMan;
    public Color cWoman;

    public Image image;
    public Button genderButton;

    public Sprite manSprite;
    public Sprite womanSprite;

    public TMP_InputField inputField;

    public Player player;

    public void ChangeGender()
    {
        if (player.isMale)
        {
            gender.text = "Woman";
            image.color = cWoman;
            genderButton.image.sprite = womanSprite;
        } else
        {
            gender.text = "Man";
            image.color = cMan;
            genderButton.image.sprite = manSprite;
        }
        player.isMale = !player.isMale;
    }
    public void ChangeName()
    {
        player.name = inputField.text;
    }
    public void DeletePlayer()
    {
        Destroy(gameObject);
    }
    public void UpdatePlayer()
    {
        if (!player.isMale)
        {
            player.isMale = true;
            ChangeGender();
        }
        inputField.text = player.name;
    }
}
