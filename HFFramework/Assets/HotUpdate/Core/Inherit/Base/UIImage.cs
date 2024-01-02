using System.Collections;
using System.Collections.Generic;
using System.Resources;
using UnityEngine;

namespace HFFramework
{
    public class UIImage : UnityEngine.UI.Image
    {
        public void SetSprite(string packageName,string spriteName)
        {
            sprite = AssetManager.Instance.GetSprite(packageName, spriteName);
        }
        
        public void SetSprite(string packageName, string atlasName, string spriteName)
        {
            sprite = AssetManager.Instance.GetSpriteByAtlas(packageName, atlasName, spriteName);
        }
    }
}
