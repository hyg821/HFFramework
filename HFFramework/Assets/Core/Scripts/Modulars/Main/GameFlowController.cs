using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace HFFramework
{
    public class GameFlowController : MonoBehaviour
    {
        public static GameFlowController Instance;

        private void Awake()
        {
            Instance = this;
            SceneManager.sceneLoaded += SceneLoaded;
            SceneManager.sceneUnloaded += SceneUnloaded;
        }

        public void SceneLoaded(Scene scene, LoadSceneMode mode)
        {

        }

        public void SceneUnloaded(Scene scene)
        {

        }

        private void OnDestroy()
        {
            SceneManager.sceneLoaded -= SceneLoaded;
            SceneManager.sceneUnloaded -= SceneUnloaded;
        }

    }
}

