using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreateMesh : MonoBehaviour
{
    public MeshFilter meshFilter;
    public MeshRenderer meshRenderer;

    public Mesh mesh;
    public List<Vector3> vex = new List<Vector3>();
    public List<int> tri = new List<int>();
    public List<Vector2> uv = new List<Vector2>();

    public HashSet<Vector2> indexCache = new HashSet<Vector2>();

    
    public List<Vector2> uvList = new List<Vector2>();

    public Texture2D tex;
    
    // Start is called before the first frame update
    void Start()
    {

        meshFilter = gameObject.AddComponent<MeshFilter>();
        
        meshRenderer = gameObject.AddComponent<MeshRenderer>();
        
        
        mesh = new Mesh();

        List<Vector2> posList = new List<Vector2>();

        
        for (int i = 0; i < 2600; i++)
        {
            float x = Random.Range(-50, 50);
            float y = Random.Range(-50, 50);
            posList.Add(new  Vector2(x,y));
        }
        
        /*
        posList.Add(new  Vector2(0,0));
        
        posList.Add(new  Vector2(0,1));
        posList.Add(new  Vector2(0,2));
        posList.Add(new  Vector2(1,2));
        posList.Add(new  Vector2(2,2));
        
        posList.Add(new  Vector2(2,1));
        posList.Add(new  Vector2(2,0));
        posList.Add(new  Vector2(1, 0));
        
        posList.Add(new  Vector2(-1, 0));
        posList.Add(new  Vector2(-1, 1));
        posList.Add(new  Vector2(-1, 2));
        
        
        posList.Add(new  Vector2(0, 3));
        posList.Add(new  Vector2(1, 3));
        posList.Add(new  Vector2(2, 3));
        
        posList.Add(new  Vector2(3, 0));
        posList.Add(new  Vector2(3, 1));
        posList.Add(new  Vector2(3, 2));
        
        posList.Add(new  Vector2(0 ,-1));
        posList.Add(new  Vector2(1, -1));
        posList.Add(new  Vector2(2, -1));
        */
        
        
     
        
        /*
        posList.Add(new  Vector2(-1 ,-1));
        posList.Add(new  Vector2(3, -1));
        posList.Add(new  Vector2(3, 3));
        posList.Add(new  Vector2(-1, 3));
        */
        
        //posList.Add(new Vector2(1, 1));
        


        for (int i = 0; i < posList.Count; i++)
        {
            indexCache.Add(posList[i]);
        }
        
        for (int i = 0; i < posList.Count; i++)
        {
            DrawSquare(posList[i],i);
        }
        
 

        mesh.vertices = vex.ToArray();
        mesh.triangles = tri.ToArray();
        mesh.uv = uv.ToArray();

        meshFilter.mesh = mesh;
        
        Material mat = new Material( Shader.Find("Test/CustomMesh"));
        mat.SetTexture("_MainTex",tex);

        meshRenderer.material = mat;
    }


    public void DrawSquare(Vector2 pos,int i)
    {
        /*
        A(5)(7)                        B(8)(10)                                       C(11)(13)



        D(2)(4)                        E(0)(3)(6)(9)(12)(15)(18) (21)                 F(14)(16)



        G(1)(23)                       H (20)(22)                                      I(17)(19)
        */

        
        Vector2 vE = pos + Vector2.one / 2;

        
        Vector2 vG = pos;
        
        Vector2 vD = pos+new  Vector2(0,0.5f);
        
        Vector2 vA= pos + new  Vector2(0,1);
        
        
        Vector2 vB= pos + new  Vector2(0.5f,1);
        
        Vector2 vC = pos+new  Vector2(1,1);
        
        Vector2 vF = pos + new  Vector2(1,0.5f);
        
        Vector2 vI = pos + new  Vector2(1,0);
        
        Vector2 vH = pos + new  Vector2(0.5f,0);

        

        
        vex.Add(vE);
        tri.Add(i*24+0);
        
        vex.Add(vG);
        tri.Add(i*24+1);
        
        vex.Add(vD);
        tri.Add(i*24+2);
        
        
        
        vex.Add(vE);
        tri.Add(i*24+3);
        
        vex.Add(vD);
        tri.Add(i*24+4);
        
        vex.Add(vA);
        tri.Add(i*24+5);
        
        
        vex.Add(vE);
        tri.Add(i*24+6);
        
        vex.Add(vA);
        tri.Add(i*24+7);
        
        vex.Add(vB);
        tri.Add(i*24+8);
        
        //-------------------
        
        vex.Add(vE);
        tri.Add(i*24+9);
        
        vex.Add(vB);
        tri.Add(i*24+10);
        
        vex.Add(vC);
        tri.Add(i*24+11);
        
        //-------------------
        
        vex.Add(vE);
        tri.Add(i*24+12);
        
        vex.Add(vC);
        tri.Add(i*24+13);
        
        vex.Add(vF);
        tri.Add(i*24+14);
        
        //-------------------
        
        vex.Add(vE);
        tri.Add(i*24+15);
        
        vex.Add(vF);
        tri.Add(i*24+16);
        
        vex.Add(vI);
        tri.Add(i*24+17);
        
        //-------------------
        
        vex.Add(vE);
        tri.Add(i*24+18);
        
        vex.Add(vI);
        tri.Add(i*24+19);
        
        vex.Add(vH);
        tri.Add(i*24+20);
        
        //-------------------
        
        vex.Add(vE);
        tri.Add(i*24+21);
        
        vex.Add(vH);
        tri.Add(i*24+22);
        
        vex.Add(vG);
        tri.Add(i*24+23);
        

        uvList.Clear();
     



        for (int j = 0; j < 24; j++)
        {
            uvList.Add(new Vector2(0,0));
        }

        bool contains = false;

        //上
        contains = indexCache.Contains(pos + new Vector2(0, 1));
        if (!contains)
        {
            uvList[5] = Vector2.one;
            uvList[7] = Vector2.one;
            uvList[8] = Vector2.one;
            uvList[10] = Vector2.one;
            uvList[11] = Vector2.one;
            uvList[13] = Vector2.one;
        }
        
        //左
        contains = indexCache.Contains(pos + new Vector2(-1, 0));
        if (!contains)
        {
            uvList[5] = Vector2.one;
            uvList[7] = Vector2.one;
            uvList[2] = Vector2.one;
            uvList[4] = Vector2.one;
            uvList[1] = Vector2.one;
            uvList[23] = Vector2.one;
        }
        
        //下
        contains = indexCache.Contains(pos + new Vector2(0, -1));
        if (!contains)
        {
            uvList[1] = Vector2.one;
            uvList[23] = Vector2.one;
            uvList[20] = Vector2.one;
            uvList[22] = Vector2.one;
            uvList[17] = Vector2.one;
            uvList[19] = Vector2.one;
        }
        
        //右
        contains = indexCache.Contains(pos + new Vector2(1, 0));
        if (!contains)
        {
            uvList[11] = Vector2.one;
            uvList[13] = Vector2.one;
            uvList[14] = Vector2.one;
            uvList[16] = Vector2.one;
            uvList[17] = Vector2.one;
            uvList[19] = Vector2.one;
        }
        
        //左上
        contains = indexCache.Contains(pos + new Vector2(-1, 1));
        if (!contains)
        {
            uvList[5] = Vector2.one;
            uvList[7] = Vector2.one;
        }
        
        //右上
        contains = indexCache.Contains(pos + new Vector2(1, 1));
        if (!contains)
        {
            uvList[11] = Vector2.one;
            uvList[13] = Vector2.one;
        }
        
        //右下
        contains = indexCache.Contains(pos + new Vector2(1, -1));
        if (!contains)
        {
            uvList[17] = Vector2.one;
            uvList[19] = Vector2.one;
        }
        
        //左下
        contains = indexCache.Contains(pos + new Vector2(-1, -1));
        if (!contains)
        {
            uvList[1] = Vector2.one;
            uvList[23] = Vector2.one;
        }
        

        uv.AddRange(uvList);
    }
}
