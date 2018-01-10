using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using LitJson;
using UnityEngine;

public enum UnitEnum
{
    TenThousand,
    Billion
}

public class HATimeFormat
{
    public float day;
    public float hour;
    public float min;
    public float sec;
    public float msec;
}

public static class ExtensionMethod
{
    public static string AutoConvertUnit(this string str, UnitEnum eunu = UnitEnum.Billion, int retainCount = 3)
    {
        double end = 0;
        if (double.TryParse(str,out end))
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
        string str = end+"";
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
        return DateTime.Parse(DateTime.Now.ToString("1970-01-01 08:00:00")).AddSeconds(l/1000).ToString("yyyy/MM/dd/HH:mm");
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
        HATimeFormat format = new HATimeFormat();
        format.day = t / (1000 * 60 * 60 * 24);
        //计算小时,用毫秒总数除以(1000*60*24),后去掉小数点
        format.hour = t / (1000 * 60 * 24);
        //计算分钟,用毫秒总数减去小时乘以(1000*60*24)后,除以(1000*60),再去掉小数点
        format.min = (t - format.hour * (1000 * 60 * 24)) / (1000 * 60);
        //同上
        format.sec = (t - format.hour * (1000 * 60 * 24) - format.min * (1000 * 60)) / 1000;
        format.msec = t - format.hour * (1000 * 60 * 24) - format.min * (1000 * 60) - format.sec * 1000;
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

    public static JsonData JsonDataContains(this JsonData jsonData, object a)
    {
        JsonData j = null;
        if (((IDictionary)jsonData).Contains(a))
        {
            j = jsonData[a+""];
        }
        return j;
    }

    public static string FormattedName(this string str, int nameLength)
    {
        if (str.Length>nameLength)
        {
           str= str.Substring(0,nameLength);
            str += "...";
        }
        return str;
    }
}