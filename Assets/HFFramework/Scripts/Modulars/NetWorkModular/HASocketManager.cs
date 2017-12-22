using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HASocketManager : MonoBehaviour {

    private static HASocketManager instance = null;
    public static HASocketManager Instance
    {
        set
        {
            instance = value;
        }
        get
        {
            return instance;
        }
    }

    public GameObject socketManagerGameObject;

    public Dictionary<string, HASocket> socketCache = new Dictionary<string, HASocket>();   

    public void Awake()
    {
        Instance = this;
    }

    public HASocket GetSocket(string tag)
    {
        HASocket socket;
        if (!socketCache.TryGetValue(tag, out socket))
        {
            socket = socketManagerGameObject.AddComponent<HASocket>();
            socket.SetName(tag);
            socketCache.Add(tag, socket);
        }
        return socket;
    }  

    public void CloseAllSocket()
    {
        foreach (var item in socketCache.Values)
        {
            item.CloseSocket(true);
        }
    }

}
