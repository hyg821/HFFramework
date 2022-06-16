using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace HFFramework
{
    public class URPCameraSetting : MonoBehaviour
    {
        public Camera camera;
        private void Awake()
        {
            camera = gameObject.GetComponent<Camera>();
            UniversalAdditionalCameraData urpCamera = camera.GetUniversalAdditionalCameraData();
            if (urpCamera!=null)
            {
                urpCamera.cameraStack.Add(UIManager.Instance.UICamera.camera);
            }
        }
    }
}

