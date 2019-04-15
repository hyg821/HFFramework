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

        void Start()
        {
            closeBtn.onClick.AddListener(delegate()
            {
                Close();
            });
            Application.logMessageReceived += LogMessageReceived;
            StartCoroutine(Test());
        }

        IEnumerator Test()
        {
            for (int i = 0; i < 50; i++)
            {
                yield return null;
                print(i);
            }
        }

        public void LogMessageReceived(string condition, string stackTrace, LogType type)
        {
            logView.SetData(condition, stackTrace, type);
        }

        // Update is called once per frame
        void Update()
        {
            if (GameEnvironment.Instance.Platform==GamePlatform.Android|| GameEnvironment.Instance.Platform == GamePlatform.iOS)
            {
                if (Input.touchCount == 3)
                {
                    Open();
                }
            }
            else if (GameEnvironment.Instance.Platform == GamePlatform.Editor|| GameEnvironment.Instance.Platform == GamePlatform.Windows|| GameEnvironment.Instance.Platform == GamePlatform.Mac)
            {
                if (Input.GetKey(KeyCode.LeftControl)&& Input.GetKey(KeyCode.RightControl))
                {
                    Open();
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
