using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 网络管理器
    /// </summary>
    public class SocketManager : MonoBehaviour, IManager
    {
        public static SocketManager Instance;

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
        public HFSocket GetSocket(string name)
        {
            HFSocket socket;
            if (!socketCache.TryGetValue(name, out socket))
            {
                GameObject go = new GameObject();
                go.name = name;
                go.transform.SetParent(gameObject.transform);
                socket = go.AddComponent<HFSocket>();
                socket.SetName(name);
                socketCache.Add(name, socket);
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

        public void Dispose()
        {
            CloseAllSocket();
            Instance = null;
        }
    } 
}
