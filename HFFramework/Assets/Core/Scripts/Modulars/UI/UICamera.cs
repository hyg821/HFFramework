using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class UICamera : BaseMonoBehaviour
    {
        public new Camera camera;

        public override void OnAwake()
        {
            base.OnAwake();
            camera = gameObject.GetComponent<Camera>();
        }

        public void Start()
        {
            camera.orthographicSize = GameSetter.Instance.ServerSceneWidth / 2 / 100;
            camera.aspect = GameSetter.Instance.ServerSceneWidth / GameSetter.Instance.ServerSceneHeight;
        }
    }
}

