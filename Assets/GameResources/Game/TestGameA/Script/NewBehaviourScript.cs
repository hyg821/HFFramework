using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{

	// Use this for initialization
	void Start () {
        HAResourceManager r = gameObject.AddComponent<HAResourceManager>();
        r.InitWithRootPath(Application.persistentDataPath+ "/AssetBundles", Application.streamingAssetsPath + "/AssetBundles", "AssetBundles");

        GameObject prefab = HAResourceManager.self.GetGameObject("49b74bc56e594f93c57dbbaca38df900", "Cube");
        GameObject.Instantiate(prefab);


        AssetBundlePackage ab = HAResourceManager.self.LoadAssetBundleFromFile("49b74bc56e594f93c57dbbaca38df900");
        GameObject g = ab.LoadAssetWithCache<GameObject>("Sphere");
        GameObject.Instantiate(g);

        HAResourceManager.self.UnloadAssetBundle(ab, false);
    }

}
