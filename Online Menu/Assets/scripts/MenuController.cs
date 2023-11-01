using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MenuController : MonoBehaviour
{
    [SerializeField] private string versionName = "0.1";
    [SerializeField] private GameObject panelMainMenu;
    [SerializeField] private GameObject panelUserName;

    [SerializeField] private InputField InputJoin;
    [SerializeField] private InputField inputCreate;
    [SerializeField] private InputField inputUserName;

    [SerializeField] private GameObject buttonStart;

    private void Awake()
    {
        PhotonNetwork.ConnectUsingSettings(versionName);
    }

    private void Start()
    {
        panelUserName.SetActive(true);
        buttonStart.SetActive(false);
    }

    private void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby(TypedLobby.Default);
        Debug.Log("connected");
    }
    
    public void ChangeUserNameInput()
    {
        if(inputUserName.text.Length >= 3) 
            buttonStart.SetActive(true);
        else buttonStart.SetActive(false);
    }
    
    public void SetUserName()
    {
        PhotonNetwork.playerName = inputUserName.text;
        panelUserName.SetActive(false);
    }

    public void CreareGame()
    {
        PhotonNetwork.CreateRoom(inputCreate.text, new RoomOptions() { MaxPlayers = 5 }, null);
    }

    public void JoinGame()
    {
        PhotonNetwork.JoinRoom(InputJoin.text);
    }

    private void OnJoinedRoom()
    {
        PhotonNetwork.LoadLevel("Game");
    }
}
