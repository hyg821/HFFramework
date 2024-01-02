using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace HFFramework
{
    public class UICamera : BaseBehaviour
    {
        public new Camera camera;

        public void Awake()
        {
            camera = gameObject.GetComponent<Camera>();
            UniversalAdditionalCameraData urpCamera = camera.GetUniversalAdditionalCameraData();
            if (urpCamera!=null)
            {
                urpCamera.renderType = CameraRenderType.Overlay;
            }
            camera.cullingMask = 1 << LayerMask.NameToLayer("UI");
            camera.orthographic = true;
            camera.orthographicSize = GameEnvironment.Instance.config.SceneSize.x / 2 / 100;
            camera.clearFlags = CameraClearFlags.Depth;
            camera.depth = 10;
            AudioListener audioListener = camera.GetComponent<AudioListener>();
            if (audioListener != null)
            {
                GameObject.Destroy(audioListener);
            }
            //camera.aspect = GameEnvironment.Instance.setting.ServerSceneWidth / GameEnvironment.Instance.setting.ServerSceneHeight;
        }
    }
}

