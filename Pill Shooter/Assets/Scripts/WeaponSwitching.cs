using UnityEngine;
using UnityEngine.UI;

public class WeaponSwitching : MonoBehaviour
{
    int selectedWeapon = 0;
    //graphisc
    public Image[] weaponSlots = new Image[3];
    public Image[] weaponSlotsChild = new Image[3];
    public Color selectedColor;

    void Start()
    {
        IHaveOnlyMyWeapons();
        SelectWeapon();
    }
    
    void Update()
    {
        int previousSelectedWeapon = selectedWeapon;
        if(Input.GetAxis("Mouse ScrollWheel") < 0f)
        {
            if (selectedWeapon == 2) //transform.childCount - 1
                selectedWeapon = 0;
            else selectedWeapon++;
        }
        if (Input.GetAxis("Mouse ScrollWheel") > 0f)
        {
            if (selectedWeapon == 0)
                selectedWeapon = 2; //transform.childCount - 1
            else selectedWeapon--;
        }
        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            selectedWeapon = 0;
        }
        if (Input.GetKeyDown(KeyCode.Alpha2) && transform.childCount >= 2)
        {
            selectedWeapon = 1;
        }
        if (Input.GetKeyDown(KeyCode.Alpha3) && transform.childCount >= 3)
        {
            selectedWeapon = 2;
        }/*
        if (Input.GetKeyDown(KeyCode.Alpha4) && transform.childCount >= 4)
        {
            selectedWeapon = 3;
        }*/
        if (previousSelectedWeapon != selectedWeapon) SelectWeapon();
    }

    void SelectWeapon()
    {
        int i = 0;
        foreach (Transform weapon in transform)
        {
            Color c = Color.white;
            c.a = .4f;
            if (i == selectedWeapon)
            {
                weapon.gameObject.SetActive(true);
                c = selectedColor;
            }
            else 
            {
                weapon.gameObject.SetActive(false);
            }
            //graphisc
            weaponSlots[i].color = c;

            i++;
            if (i > 2) return;
        }/*
        //graphisc
        for (int i = 0; i < 3; i++)
        {

        }*/
    }
    void IHaveOnlyMyWeapons()
    {
        StatsManager sm = StatsManager.instance;
        for (int i = 0; i < 3; i++)
        {
            foreach(Transform weapon in transform)
            {
                if (weapon.name == sm.myWeapons[i])
                {
                    weapon.SetSiblingIndex(i);
                    ShootingBullets w = weapon.GetComponent<ShootingBullets>();
                    if (w != null)
                    {
                        weaponSlotsChild[i].sprite = w.icon;
                        Color c = Color.white;
                        weaponSlotsChild[i].color = c;

                    }
                    break;
                }
            }
        }
    }
}
