using LitJson;
using Spine;
using Spine.Unity;
using Spine.Unity.Modules.AttachmentTools;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework
{
    public class SpineExchangeManager
    {
        public const string RepackConst = "RepackedSkin";

        public static SpineExchangeManager instance;
        public static SpineExchangeManager Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new SpineExchangeManager();
                    instance.Awake();
                }
                return instance;
            }
        }

        public Dictionary<string, EquipmentItem> equipmentInfoDic = new Dictionary<string, EquipmentItem>();

        void Awake()
        {
            AnalysisConfig();
        }

        public void AnalysisConfig()
        {
            AssetBundlePackage pp = HAResourceManager.self.LoadAssetBundleFromFile("Common_Config");
            TextAsset tt = pp.LoadAssetWithCache<TextAsset>("SpineExchangeConfig");
            SpineEquipment ex = JsonMapper.ToObject<SpineEquipment>(tt.text);
            for (int i = 0; i < ex.Equipment.Count; i++)
            {
                EquipmentItem item = ex.Equipment[i];
                equipmentInfoDic.Add(item.ID, item);
            }
        }

        public void SetSkin(SkeletonAnimation skeletonAnimation, string skin)
        {
            // 设置皮肤
            skeletonAnimation.Skeleton.SetSkin(skin);
            // 设置姿势
            skeletonAnimation.Skeleton.SetSlotsToSetupPose();
        }

        public void ExchangeEquipment(SkeletonAnimation skeletonAnimation, List<EquipmentItem> infos)
        {
            if (skeletonAnimation.skeleton.Skin.Name == RepackConst)
            {
                Skin repackedSkin = skeletonAnimation.skeleton.Skin;
                repackedSkin.Clear();
                repackedSkin = null;
                SetSkin(skeletonAnimation, infos[0].defaultSkinName);
            }
            ExchangeEquipmentAndMerge(skeletonAnimation, infos);
            Resources.UnloadUnusedAssets();
        }

        /// <summary>
        ///  换装备并且合并材质球
        /// </summary>
        /// <param name="skeletonAnimation">spine 组件</param>
        /// <param name="atlasAsset"> 图片+atlas 生成的图集文件 </param>
        /// <param name="regionName">  图集文件中的具体的一张图片 最好一个图片一个图集  </param>
        /// <param name="e"> 装备类型 </param>
        public void ExchangeEquipmentAndMerge(SkeletonAnimation skeletonAnimation, List<EquipmentItem> infos)
        {
            for (int i = 0; i < infos.Count; i++)
            {
                EquipmentItem info = infos[i];
                string regionName = info.equipmentImageName;
                string defaultSkinName = info.defaultSkinName;
                string spineEquipmentType = info.spineEquipmentTypeName;
                AssetBundlePackage assetbundle = HAResourceManager.self.LoadAssetBundleFromFile(info.equipmentAssetbundleName);
                AtlasAsset atlasAsset = assetbundle.LoadAssetWithCache<AtlasAsset>(info.equipmentAtlasAssetName);
                float scale = skeletonAnimation.skeletonDataAsset.scale;
                Atlas atlas = atlasAsset.GetAtlas();
                AtlasRegion region = atlas.FindRegion(regionName);
                Slot slot = skeletonAnimation.skeleton.FindSlot(info.slotName);
                Attachment originalAttachment = slot.Attachment;
                if (region == null)
                {
                    slot.Attachment = null;
                }
                else if (originalAttachment != null)
                {
                    slot.Attachment = originalAttachment.GetRemappedClone(region, true, true, 1);
                }
                else
                {
                    var newRegionAttachment = region.ToRegionAttachment(region.name, scale);
                    slot.Attachment = newRegionAttachment;
                }
                slot.Skeleton.Skin.SetAttachment(slot.Data.Index, info.slotPlaceholderName, slot.Attachment);
            }

            Skin repackedSkin = new Skin(RepackConst);
            repackedSkin.Append(skeletonAnimation.Skeleton.Data.DefaultSkin); // Include the "default" skin. (everything outside of skin placeholders)
            repackedSkin.Append(skeletonAnimation.Skeleton.Skin); // Include your new custom skin.
            Texture2D runtimeAtlas = null;
            Material runtimeMaterial = null;
            repackedSkin = repackedSkin.GetRepackedSkin(RepackConst, skeletonAnimation.SkeletonDataAsset.atlasAssets[0].materials[0], out runtimeMaterial, out runtimeAtlas); // Pack all the items in the skin.
            skeletonAnimation.Skeleton.SetSkin(repackedSkin); // Assign the repacked skin to your Skeleton.
            skeletonAnimation.skeleton.SetSlotsToSetupPose(); // Use the pose from setup pose.
            skeletonAnimation.Update(0); // Use the pose in the currently active animation.
        }

        public void SetSkinUI(SkeletonGraphic skeletonAnimation, string skin)
        {
            // 设置皮肤
            skeletonAnimation.Skeleton.SetSkin(skin);
            // 设置姿势
            skeletonAnimation.Skeleton.SetSlotsToSetupPose();
        }

        public void ExchangeEquipmentUI(SkeletonGraphic skeletonAnimation, List<EquipmentItem> infos)
        {
            if (skeletonAnimation.Skeleton.Skin.Name == RepackConst)
            {
                Skin repackedSkin = skeletonAnimation.Skeleton.Skin;
                repackedSkin.Clear();
                repackedSkin = null;
                SetSkinUI(skeletonAnimation, infos[0].defaultSkinName);
            }
            ExchangeEquipmentAndMergeUI(skeletonAnimation, infos);
            Resources.UnloadUnusedAssets();
        }

        public void ExchangeEquipmentAndMergeUI(SkeletonGraphic skeletonAnimation, List<EquipmentItem> infos)
        {
            for (int i = 0; i < infos.Count; i++)
            {
                EquipmentItem info = infos[i];
                string regionName = info.equipmentImageName;
                string defaultSkinName = info.defaultSkinName;
                string spineEquipmentType = info.spineEquipmentTypeName;
                AssetBundlePackage assetbundle = HAResourceManager.self.LoadAssetBundleFromFile(info.equipmentAssetbundleName);
                AtlasAsset atlasAsset = assetbundle.LoadAssetWithCache<AtlasAsset>(info.equipmentAtlasAssetName);
                float scale = skeletonAnimation.skeletonDataAsset.scale;
                Atlas atlas = atlasAsset.GetAtlas();
                AtlasRegion region = atlas.FindRegion(regionName);
                Slot slot = skeletonAnimation.Skeleton.FindSlot(info.slotName);
                Attachment originalAttachment = slot.Attachment;
                if (region == null)
                {
                    HFLog.C("没有找到图集里的 ： 图片  " + regionName);
                    slot.Attachment = null;
                }
                else if (originalAttachment != null)
                {
                    slot.Attachment = originalAttachment.GetRemappedClone(region, true, true, 1);
                }
                else
                {
                    var newRegionAttachment = region.ToRegionAttachment(region.name, scale);
                    slot.Attachment = newRegionAttachment;
                }
                slot.Skeleton.Skin.SetAttachment(slot.Data.Index, info.slotPlaceholderName, slot.Attachment);
            }

            Skin repackedSkin = new Skin(RepackConst);
            repackedSkin.Append(skeletonAnimation.Skeleton.Data.DefaultSkin); // Include the "default" skin. (everything outside of skin placeholders)
            repackedSkin.Append(skeletonAnimation.Skeleton.Skin); // Include your new custom skin.
            Texture2D runtimeAtlas = null;
            Material runtimeMaterial = null;
            repackedSkin = repackedSkin.GetRepackedSkin(RepackConst, skeletonAnimation.SkeletonDataAsset.atlasAssets[0].materials[0], out runtimeMaterial, out runtimeAtlas); // Pack all the items in the skin.
            skeletonAnimation.Skeleton.SetSkin(repackedSkin); // Assign the repacked skin to your Skeleton.
            skeletonAnimation.Skeleton.SetSlotsToSetupPose(); // Use the pose from setup pose.
            skeletonAnimation.Update(0); // Use the pose in the currently active animation.
            skeletonAnimation.OverrideTexture = runtimeAtlas;
        }


        
        /// <summary>
        ///  替换spine部件 但是不合并材质球
        /// </summary>
        /// <param name="skeletonAnimation"></param>
        /// <param name="item"></param>
        public void ExchangeEquipment(SkeletonAnimation skeletonAnimation, EquipmentItem item)
        {
            AssetBundlePackage pg = HAResourceManager.self.LoadAssetBundleFromFile(item.equipmentAssetbundleName);
            Texture2D equipmentTexture = pg.LoadAssetWithCache<Texture2D>(item.equipmentImageName);
            // 找到具体的一个 插槽
            Slot slot = skeletonAnimation.skeleton.FindSlot(item.slotName);
            // 通过插槽和一张图片创建对应插槽下的附件
            Attachment attachment = null;
            if (item.attachmentType == (int)AttachmentType.Region)
            {
                attachment = CreateRegionAttachmentByTexture(slot, equipmentTexture);
            }
            else if (item.attachmentType == (int)AttachmentType.Mesh)
            {
                attachment = CreateMeshAttachmentByTexture(slot, equipmentTexture);
            }

            // 设置新的附件到插槽
            slot.Skeleton.Skin.SetAttachment(slot.Data.index, item.slotPlaceholderName, attachment);
        }



        /// <summary>  
        /// Creates the region attachment by texture.  
        /// </summary>  
        /// <returns>The region attachment by texture.</returns>  
        /// <param name="slot">Slot.</param>  
        /// <param name="texture">Texture.</param>  
        private Attachment CreateRegionAttachmentByTexture(Spine.Slot slot, Texture2D texture)
        {
            if (slot == null)
            {
                return null;
            }

            Spine.RegionAttachment oldAtt = slot.Attachment as Spine.RegionAttachment;
            if (oldAtt == null || texture == null)
            {
                return null;
            }

            Spine.RegionAttachment att = new Spine.RegionAttachment(oldAtt.Name);
            att.RendererObject = CreateRegion(texture);
            att.Width = oldAtt.Width;
            att.Height = oldAtt.Height;
            att.offset = oldAtt.offset;
            att.Path = oldAtt.Path;

            att.R = oldAtt.R;
            att.G = oldAtt.G;
            att.B = oldAtt.B;
            att.A = oldAtt.A;

            att.X = oldAtt.X;
            att.y = oldAtt.Y;
            att.Rotation = oldAtt.Rotation;
            att.ScaleX = oldAtt.ScaleX;
            att.ScaleY = oldAtt.ScaleY;

            att.SetUVs(0f, 1f, 1f, 0f, false);

            Material mat = new Material(Shader.Find("Sprites/Default"));
            mat.mainTexture = texture;
            (att.RendererObject as Spine.AtlasRegion).page.rendererObject = mat;

            slot.Attachment = att;

            return slot.Attachment;
        }

        /// <summary>  
        /// Creates the mesh attachment by texture.  
        /// </summary>  
        /// <returns>The mesh attachment by texture.</returns>  
        /// <param name="slot">Slot.</param>  
        /// <param name="texture">Texture.</param>  
        private Attachment CreateMeshAttachmentByTexture(Spine.Slot slot, Texture2D texture)
        {
            if (slot == null) return null;
            Spine.MeshAttachment oldAtt = slot.Attachment as Spine.MeshAttachment;
            if (oldAtt == null || texture == null) return null;

            Spine.MeshAttachment att = new Spine.MeshAttachment(oldAtt.Name);
            att.RendererObject = CreateRegion(texture);
            att.Path = oldAtt.Path;

            att.Bones = oldAtt.Bones;
            att.Edges = oldAtt.Edges;
            att.Triangles = oldAtt.triangles;
            att.Vertices = oldAtt.Vertices;
            att.WorldVerticesLength = oldAtt.WorldVerticesLength;
            att.HullLength = oldAtt.HullLength;
            att.RegionRotate = false;

            att.RegionU = 0f;
            att.RegionV = 1f;
            att.RegionU2 = 1f;
            att.RegionV2 = 0f;
            att.RegionUVs = oldAtt.RegionUVs;

            att.UpdateUVs();
            Material mat = new Material(Shader.Find("Sprites/Default"));
            mat.mainTexture = texture;
            (att.RendererObject as Spine.AtlasRegion).page.rendererObject = mat;

            slot.Attachment = att;

            return slot.Attachment;
        }

        private Spine.AtlasRegion CreateRegion(Texture2D texture)
        {
            Spine.AtlasRegion region = new Spine.AtlasRegion();
            region.width = texture.width;
            region.height = texture.height;
            region.originalWidth = texture.width;
            region.originalHeight = texture.height;
            region.rotate = false;
            region.page = new Spine.AtlasPage();
            region.page.name = texture.name;
            region.page.width = texture.width;
            region.page.height = texture.height;
            region.page.uWrap = Spine.TextureWrap.ClampToEdge;
            region.page.vWrap = Spine.TextureWrap.ClampToEdge;
            return region;
        }

    }
}