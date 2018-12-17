using System;

namespace HFFramework
{
    public static class ExtensionMethod
    { 
        /// <summary>
        ///  自动区分大小端
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public static byte[] BitConverterGetBytes(int value)
        {
            byte[] temp = BitConverter.GetBytes(value);
            if (BitConverter.IsLittleEndian)
            {
                Array.Reverse(temp);
            }
            return temp;
        }

        /// <summary>
        ///  BitConverter 判断大小端 自动转换
        /// </summary>
        /// <param name="value"></param>
        /// <param name="startIndex"></param>
        /// <returns></returns>
        public static int BitConverterToInt32(byte[] value, int startIndex)
        {
            if (BitConverter.IsLittleEndian)
            {
                Array.Reverse(value);
            }
            return BitConverter.ToInt32(value, startIndex);
        }

    }
}