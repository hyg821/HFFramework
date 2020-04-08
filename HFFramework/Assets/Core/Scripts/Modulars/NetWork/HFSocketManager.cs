using BestHTTP;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 网络管理器
    /// </summary>
    public class HFSocketManager : MonoBehaviour, IManager
    {
        public static HFSocketManager Instance;

        /// <summary>
        ///  socket 缓存
        /// </summary>
        private Dictionary<string, HFSocket> socketCache = new Dictionary<string, HFSocket>();

        public void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  通过一个tag 获取对应的Socket
        /// </summary>
        /// <param name="socketTag"></param>
        /// <returns></returns>
        public HFSocket GetSocket(string socketTag)
        {
            HFSocket socket;
            if (!socketCache.TryGetValue(socketTag, out socket))
            {
                socket = gameObject.AddComponent<HFSocket>();
                socket.SetName(socketTag);
                socketCache.Add(socketTag, socket);
            }
            return socket;
        }

        /// <summary>
        ///  关闭所有的Socket
        /// </summary>
        public void CloseAllSocket()
        {
            foreach (var item in socketCache)
            {
                item.Value.Close();
            }
            socketCache.Clear();
        }

        public void DestroyManager()
        {
            HTTPManager.OnQuit();
            CloseAllSocket();
            Instance = null;
        }
    } 
}
