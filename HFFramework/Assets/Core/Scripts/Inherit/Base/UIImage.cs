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
            if (Game.Instance == null)
            {
                return;
            }
            sprite = AssetManager.Instance.GetSprite(packageName, spriteName);
        }
        
        public void SetSprite(string packageName, string atlasName, string spriteName)
        {
            if (Game.Instance == null)
            {
                return;
            }
            sprite = AssetManager.Instance.GetSpriteByAtlas(packageName, atlasName, spriteName);
        }
    }
}
