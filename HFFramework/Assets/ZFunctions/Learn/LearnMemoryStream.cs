using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;

namespace HFFramework.Functions
{
    public class LearnMemoryStream : MonoBehaviour
    {
        public MemoryStream stream = new MemoryStream(1024);

        public byte[] cache = new byte[1024];
        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Mouse0))
            {
                string str = Time.realtimeSinceStartup.ToString();
                byte[] bytes = Encoding.UTF8.GetBytes(str);
                Debug(bytes);
                stream.Read(bytes, 0, bytes.Length);

                stream.Write(cache, 0, 2);
                Debug(cache);
            }
        }

        public void Debug(byte[] b)
        {
            string str = string.Empty;
            foreach (var item in b)
            {
                str += " " + item;
            }
            print(str);
        }

    }

}

