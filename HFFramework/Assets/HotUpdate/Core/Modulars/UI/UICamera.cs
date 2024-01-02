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
            //CameraData

            Debug.LogError("aaaaaaaaaa");
            
            camera = gameObject.GetComponent<Camera>();
            Debug.LogError("camera == null" +(camera == null));
            UniversalAdditionalCameraData urpCamera = camera.GetUniversalAdditionalCameraData();
            
            
            Debug.LogError("bbbbbbbbbbbb");
            
            if (urpCamera!=null)
            {
                urpCamera.renderType = CameraRenderType.Overlay;
            }
            camera.cullingMask = 1 << LayerMask.NameToLayer("UI");
            camera.orthographic = true;

            Debug.LogError("xxxxxGameEnvironment.Instance" + (GameEnvironment.Instance));
            
            Debug.LogError("GameEnvironment.Instance.config" + (GameEnvironment.Instance.config == null));
            
            camera.orthographicSize = GameEnvironment.Instance.config.SceneSize.x / 2 / 100;
      ;
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

