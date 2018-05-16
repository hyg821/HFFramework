using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class HASocketManager : MonoBehaviour
    {
        public static HASocketManager Instance;

        /// <summary>
        ///  socket 缓存
        /// </summary>
        private Dictionary<string, HASocket> socketCache = new Dictionary<string, HASocket>();

        public void Awake()
        {
            Instance = this;
        }

        /// <summary>
        ///  通过一个tag 获取对应的Socket
        /// </summary>
        /// <param name="socketTag"></param>
        /// <returns></returns>
        public HASocket GetSocket(string socketTag)
        {
            HASocket socket;
            if (!socketCache.TryGetValue(tag, out socket))
            {
                socket = gameObject.AddComponent<HASocket>();
                socket.SetName(tag);
                socketCache.Add(tag, socket);
            }
            return socket;
        }

        /// <summary>
        ///  关闭所有的Socket
        /// </summary>
        public void CloseAllSocket()
        {
            foreach (var item in socketCache.Values)
            {
                item.CloseSocket(true);
            }
        }

        public void DestroyManager()
        {
            CloseAllSocket();
            Instance = null;
        }
    }
}
