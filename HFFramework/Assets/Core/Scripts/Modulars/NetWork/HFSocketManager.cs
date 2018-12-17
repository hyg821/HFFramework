using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
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
            if (!socketCache.TryGetValue(tag, out socket))
            {
                socket = gameObject.AddComponent<HFSocket>();
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
            foreach (var item in socketCache)
            {
                item.Value.Close();
            }
            socketCache.Clear();
        }

        public void DestroyManager()
        {
            CloseAllSocket();
            Instance = null;
        }
    }
}
