using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

public class Demo : MonoBehaviour
{

    public void AssetBundleTest()
    {
        GameObject prefab = HAResourceManager.self.GetGameObject("Prefab", "Cube");
        GameObject.Instantiate(prefab);

        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("Prefab");
        GameObject g = ab.LoadAssetWithCache<GameObject>("Sphere");
        GameObject.Instantiate(g);

        HAResourceManager.self.UnloadAssetBundle(ab, false);

        GameObject ob = new GameObject();
        HFLog.L(ob.GetInstanceID().ToString());
    }

    public void HotFixJump()
    {
        AppDomainManager.self.Jump(0, "HotFixDll", "HFFrameworkHotFix", "HotFixEnter");
    }

}
