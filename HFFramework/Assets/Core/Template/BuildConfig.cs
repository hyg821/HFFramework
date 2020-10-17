using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    /// <summary>
    /// 项目配置 （内部编辑器设置 +外部jenkins设置）
    /// </summary>
    [CreateAssetMenu(menuName = "HFFramework/BuildConfig(打包配置文件)", fileName = "BuildConfig")]
    public class BuildConfig : ScriptableObject
    {
        public string ApplicationIdentifier;
        public string version = "1.0.0";
        public bool isLog = false;
        public bool isGenerateAssetbundle = false;
        public bool isPublish = false;
        public bool isObb = false;
        public bool isGenerateAPK = false;
        public bool isGenerateXcode = false;
        public bool isGenerateIPA= false;

        public void Refresh()
        {

        }

        public void Log()
        {
            Debug.Log("--------------------打包配置信息--------------------");
            Debug.Log("ApplicationIdentifier " + ApplicationIdentifier);
            Debug.Log("version " + version);
            Debug.Log("isLog " + isLog);
            Debug.Log("isGenerateAssetbundle " + isGenerateAssetbundle);
            Debug.Log("isPublish " + isPublish);
            Debug.Log("isObb " + isObb);
            Debug.Log("isGenerateAPK " + isGenerateAPK);
            Debug.Log("isGenerateXcode " + isGenerateXcode);
            Debug.Log("isGenerateIPA " + isGenerateIPA);
        }
    }
}


