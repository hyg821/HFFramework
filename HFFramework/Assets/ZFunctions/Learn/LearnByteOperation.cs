using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace HFFramework.Functions
{
    public class LearnByteOperation : MonoBehaviour
    {
        int a;
        int b;
        // Use this for initialization
        void Start()
        {
           
            // |
            // ^
            // ~
            // <<
            // >>
            //  byte =  [0] [1] [2] [3] [4] [5] [6] [7]     

            AND();
            OR();
            XOR();
            NOT();
            SHIR();
            Test();
        }

        public void AND()
        {
            /*
             *  &  
             *  and运算通常用于二进制取位操作，
             *  例如一个数 and 1的结果就是取二进制的最末位。
             *  这可以用来判断一个整数的奇偶，
             *  二进制的最末位为0表示该数为偶数，
             *  最末位为1表示该数为奇数。
             */

            //因为没法使用 二进制 所以用16进制代替 正好 一个 16进制 f 等于 二进制 1111 4位  一个比特8位 等于 ff 
            a = 0xff; //二进制 [1][1][1][1] [1][1][1][1]  == ff
            b = 0x051;
            Print2(a & b);

            a = 0x23;
            b = 0x1;
            Print2(a & b);
        }

        public void OR()
        {
            /*
             * or运算通常用于二进制特定位上的无条件赋值，
             * 例如一个数or 1的结果就是把二进制最末位强行变成1。
             * 如果需要把二进制最末位变成0，对这个数or 1之后再减一就可以了，
             * 其实际意义就是把这个数强行变成最接近的偶数。
             * 相同位只要一个为1即为1。
             */

            a = 1;
            b = 0x10;
            Print2(a | b);
        }

        public void XOR()
        {
            /*
             * 异或的符号是^。
             * 按位异或运算, 
             * 对等长二进制模式按位或二进制数的每一位执行逻辑按位异或操作. 
             * 操作的结果是如果某位不同则该位为1, 否则该位为0.
             */

            a = 0xff;
            b = 0x10;
            Print2(a ^ b);
        }

        public void NOT()
        {
            /*
             * not运算的定义是把内存中的0和1全部取反。
             * 使用not运算时要格外小心，你需要注意整数类型有没有符号。
             * 如果not的对象是无符号整数（不能表示负数），
             * 那么得到的值就是它与该类型上界的差，
             * 因为无符号类型的数是用00到$FFFF依次表示的。
             */
            a = 0x0;
            b = 0x0;
            Print2(~a);
        }

        public void SHIR()
        {
            a = 0x123;
            b = 0x555;

            Print2(a << 3);
            Print2(b >> 5);
        }

        public void Test()
        {
            a = 125135243;
            b = 234657465;

            int temp = 0;
            int count = 0;
            while (a>0)
            {
                temp = a & 1;
                count += temp & 1;
                a = a >> 1;
            }
            print("xxxxxxxx  " + count);
        }

        public void Print2(int i)
        {
            print("a = "+ Convert.ToString(a, 2));
            print("b = "+Convert.ToString(b, 2));
            print("结果 = "+Convert.ToString(i, 2));
        }
    }
}
