using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class CameraSizeFitter : MonoBehaviour
    {

        private Camera m_Camera;

        public void Awake()
        {
            m_Camera = GetComponent<Camera>();
        }

        void Start()
        {
            if (m_Camera != null)
            {
                m_Camera.orthographicSize = GameSetter.Instance.ServerSceneWidth / 2 / 100;
                m_Camera.aspect = GameSetter.Instance.ServerSceneWidth / GameSetter.Instance.ServerSceneHeight;
            }
        }
    }

}