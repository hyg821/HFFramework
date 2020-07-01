using UnityEngine;

namespace HFFramework.Functions
{
    [RequireComponent(typeof(MeshFilter))]
    [RequireComponent(typeof(MeshRenderer))]
    public class CombineMesh : MonoBehaviour
    {
        public Texture2D targetTexture;

        public MeshRenderer meshRender;
        public MeshFilter meshFilter;

        void Start()
        {
            meshRender = GetComponent<MeshRenderer>();
            meshFilter = GetComponent<MeshFilter>();

            targetTexture = new Texture2D(1024, 1024, TextureFormat.ETC2_RGBA1, false);

            MeshFilter[] meshFilters = GetComponentsInChildren<MeshFilter>();
            CombineInstance[] combine = new CombineInstance[meshFilters.Length];
            Texture2D[] tempTextures = new Texture2D[meshFilters.Length];

            for (int i = 0; i < meshFilters.Length; i++)
            {
                Texture2D temp = meshFilters[i].GetComponent<MeshRenderer>().material.GetTexture("_MainTex") as Texture2D;
                tempTextures[i] = temp;
            }

            //打包散图到图集 返回每一张图的uv
            Rect[] rects = targetTexture.PackTextures(tempTextures, 0);
            meshRender.material.SetTexture("_MainTex", targetTexture);

            for (int i = 0; i < meshFilters.Length; i++)
            {
                CombineInstance cb = combine[i];
                MeshFilter mf = meshFilters[i];
                //不能使用shareMesh
                cb.mesh = mf.mesh;
                if (mf.transform.parent != null)
                {
                    cb.transform = mf.transform.localToWorldMatrix * mf.transform.parent.worldToLocalMatrix;
                }
                else
                {
                    cb.transform = Matrix4x4.identity;
                }

                Rect baseUV = rects[i];
                Vector2[] uvs = new Vector2[cb.mesh.uv.Length];
                for (int j = 0; j < cb.mesh.uv.Length; j++)
                {
                    float xxx = baseUV.x + cb.mesh.uv[j].x * baseUV.width;
                    float yyy = baseUV.y + cb.mesh.uv[j].y * baseUV.height;
                    uvs[j] = new Vector2(xxx, yyy);
                }

                cb.mesh.uv = uvs;
                combine[i] = cb;
                mf.gameObject.SetActive(false);
            }

            meshFilter.mesh = new Mesh();
            meshFilter.mesh.CombineMeshes(combine, true, true);

            transform.gameObject.SetActive(true);
        }
    }

}

