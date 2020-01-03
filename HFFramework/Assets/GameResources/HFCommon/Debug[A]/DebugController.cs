using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace HFFramework
{
    public class DebugController : UIController
    {
        public LogView logView;
        public Button closeBtn;
        public Button refCountBtn;
        #region
        public override void FindElement()
        {
            logView = AutoFind<LogView>("LogView");
            closeBtn = AutoFind<Button>("CloseButton");
            refCountBtn = AutoFind<Button>("RefCountButton");
        }
        #endregion


        GamePlatform pf;

        public override void Awake()
        {
            base.Awake();
        }

        public override void ElementInit()
        {
            base.ElementInit();
            pf = GameEnvironment.Instance.Platform;

            refCountBtn.onClick.AddListener(delegate ()
            {
                HFResourceManager.Instance.Debug();
            });

            closeBtn.onClick.AddListener(delegate ()
            {
                Close();
            });
            Application.logMessageReceived += LogMessageReceived;

            IsNeedUpdate = true;
        }

        public override void OnEnable()
        {
            base.OnEnable();
            BringSelfToFront();
        }

        public void LogMessageReceived(string condition, string stackTrace, LogType type)
        {
            logView.SetData(condition, stackTrace, type);
        }

        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);

            if (pf == GamePlatform.Android || pf == GamePlatform.iOS)
            {
                if (Input.touchCount == 3)
                {
                    IsShow = true;
                }
                else if (Input.touchCount == 4)
                {
                    IsShow = false;
                }
            }
            else if (pf == GamePlatform.Editor || pf == GamePlatform.Windows || pf == GamePlatform.Mac)
            {
                if (Input.GetKeyDown(KeyCode.Mouse1))
                {
                    IsShow = !IsShow;
                }
            }
        }

        public override void Destroy()
        {
            base.Destroy();
            Application.logMessageReceived -= LogMessageReceived;
        }
    }
}
