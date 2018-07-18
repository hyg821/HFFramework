using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using LitJson;
using UnityEngine;

namespace HFFramework
{
    public enum UnitEnum
    {
        TenThousand,
        Billion
    }

    public class HATimeFormat
    {
        public float day;
        public float hour;
        public float extraHour;
        public float min;
        public float extraMin;
        public float sec;
        public float extraSec;
    }

    public static class ExtensionMethod
    {
        public static string AutoConvertUnit(this string str, UnitEnum eunu = UnitEnum.Billion, int retainCount = 3)
        {
            double end = 0;
            if (double.TryParse(str, out end))
            {
                if (eunu == UnitEnum.TenThousand)
                {
                    if (end > 9999)
                    {
                        end /= 10000;
                        end = Math.Round(end, retainCount);
                        str = end + "万";
                    }
                }

                if (eunu == UnitEnum.Billion)
                {
                    if (end > 99999999)
                    {
                        end /= 100000000;
                        end = Math.Round(end, retainCount);
                        str = end + "亿";
                    }
                }
            }
            return str;
        }

        public static string AutoConvertUnit(this long l, UnitEnum eunu = UnitEnum.Billion, int retainCount = 3)
        {
            double end = l;
            string str = end + "";
            if (eunu == UnitEnum.TenThousand)
            {
                if (end > 9999)
                {
                    end /= 10000.0f;
                    end = Math.Round(end, retainCount);
                    str = end + "万";
                }
            }

            if (eunu == UnitEnum.Billion)
            {
                if (end > 99999999)
                {
                    end /= 100000000.0f;
                    end = Math.Round(end, retainCount);
                    str = end + "亿";
                }
            }
            return str;
        }

        public static string AutoConvertUnit(this int l, UnitEnum eunu = UnitEnum.Billion, int retainCount = 3)
        {
            double end = l;
            string str = end + "";
            if (eunu == UnitEnum.TenThousand)
            {
                if (end > 9999)
                {
                    end /= 10000.0f;
                    end = Math.Round(end, retainCount);
                    str = end + "万";
                }
            }

            if (eunu == UnitEnum.Billion)
            {
                if (end > 99999999)
                {
                    end /= 100000000.0f;
                    end = Math.Round(end, retainCount);
                    str = end + "亿";
                }
            }
            return str;
        }

        public static string TimestampConvertTime(this long l)
        {
            return DateTime.Parse(DateTime.Now.ToString("1970-01-01 08:00:00")).AddSeconds(l / 1000).ToString("yyyy/MM/dd/HH:mm");
        }

        public static string TimestampConvertTimeMM(this long l)
        {
            return DateTime.Parse(DateTime.Now.ToString("1970-01-01 08:00:00")).AddSeconds(l / 1000).ToString("yyyy/MM");
        }

        public static string TimestampConvertTimeDD(this long l)
        {
            return DateTime.Parse(DateTime.Now.ToString("1970-01-01 08:00:00")).AddSeconds(l / 1000).ToString("yyyy/MM/dd");
        }

        public static string TimestampConvertTimeHH(this long l)
        {
            return DateTime.Parse(DateTime.Now.ToString("1970-01-01 08:00:00")).AddSeconds(l / 1000).ToString("yyyy/MM/dd/HH");
        }
        public static string TimestampConvertTimeMM1(this long l)
        {
            return DateTime.Parse(DateTime.Now.ToString("1970-01-01 08:00:00")).AddSeconds(l / 1000).ToString("（MM月dd日）");
        }

        public static HATimeFormat MillisecondConvertToTimeFormat(this long t)
        {
            //1000 毫秒->秒
            //60     秒->分钟
            //60     分钟->小时
            //24     小时->天
            HATimeFormat format = new HATimeFormat();
            format.day = t / (1000 * 60 * 60 * 24);
            format.hour = t / (1000 * 60 * 60);
            format.extraHour = format.hour - format.day * 24;
            format.min = t / (1000 * 60);
            format.extraMin = format.min - format.hour * 60;
            format.sec = t / (1000);
            format.extraSec = format.sec - format.min * 60;
            return format;
        }

        /// <summary>
        /// 秒数转  10：19  倒计时
        /// </summary>
        /// <param name="time"></param>
        /// <returns></returns>
        public static string TimeConversion(this int time)
        {
            int m = time / 60;
            int s = time % 60;
            string mm = m.ToString();
            string ss = s.ToString();
            if (m < 10)
            {
                mm = "0" + mm;
            }
            if (s < 10)
            {
                ss = "0" + ss;
            }
            return mm + ":" + ss;
        }

        public static string FormattedName(this string str, int nameLength)
        {
            if (str.Length > nameLength)
            {
                str = str.Substring(0, nameLength);
                str += "...";
            }
            return str;
        }
    }
}