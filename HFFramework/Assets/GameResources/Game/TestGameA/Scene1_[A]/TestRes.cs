using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HFFramework;

public class TestRes : MonoBehaviour {

	public void 异步递归加载assetbundle()
    {
        HAResourceManager.self.LoadAssetBundleFromFileAsync("Prefab", delegate (AssetBundlePackage pg)
         {
             pg.LoadAssetWithCacheAsync<GameObject>("Cube1", delegate (GameObject gx)
              {
                  GameObject.Instantiate(gx);
              });
         });
    }
}
