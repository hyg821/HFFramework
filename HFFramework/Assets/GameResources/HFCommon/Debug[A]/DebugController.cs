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

        GamePlatform pf;

        void Start()
        {
            pf = GameEnvironment.Instance.Platform;
            closeBtn.onClick.AddListener(delegate()
            {
                Close();
            });
            Application.logMessageReceived += LogMessageReceived;
        }

        public void LogMessageReceived(string condition, string stackTrace, LogType type)
        {
            logView.SetData(condition, stackTrace, type);
        }

        // Update is called once per frame
        void Update()
        {
            if (pf == GamePlatform.Android|| pf == GamePlatform.iOS)
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
            else if (pf == GamePlatform.Editor|| pf == GamePlatform.Windows|| pf == GamePlatform.Mac)
            {
                if (Input.GetKeyDown(KeyCode.LeftControl)&& Input.GetKeyDown(KeyCode.RightControl))
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
