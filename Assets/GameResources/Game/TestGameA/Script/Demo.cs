using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Demo : MonoBehaviour
{
    public void AssetBundleTest()
    {
        GameObject prefab = HAResourceManager.self.GetGameObject("49b74bc56e594f93c57dbbaca38df900", "Cube");
        GameObject.Instantiate(prefab);

        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("49b74bc56e594f93c57dbbaca38df900");
        GameObject g = ab.LoadAssetWithCache<GameObject>("Sphere");
        GameObject.Instantiate(g);

        HAResourceManager.self.UnloadAssetBundle(ab, false);
    }

    public void HotFixJump()
    {
        AppDomainManager.self.Jump(0, "c5c51fee13ff5bbdca8a5f2f65c68d07", "HFFrameworkHotFix", "HotFixEnter");
    }

}
