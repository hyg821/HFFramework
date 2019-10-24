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
            camera.cullingMask = 1 << LayerMask.NameToLayer("UI");
            camera.orthographic = true;
            camera.orthographicSize = GameEnvironment.Instance.ServerSceneWidth / 2 / 100;
            camera.clearFlags = CameraClearFlags.Depth;
            camera.depth = 10;
            AudioListener audioListener = camera.GetComponent<AudioListener>();
            if (audioListener!=null)
            {
                GameObject.Destroy(audioListener);
            }
            //camera.aspect = GameEnvironment.Instance.setting.ServerSceneWidth / GameEnvironment.Instance.setting.ServerSceneHeight;
        }
    }
}

