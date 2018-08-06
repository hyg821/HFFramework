using Google.Protobuf;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MessageConverter
{
    private static MessageConverter ins;
    public static MessageConverter Ins
    {
        get
        {
            if (ins==null)
            {
                ins = new MessageConverter();
            }
            return ins;
        }
    }

    public Dictionary<int, MessageParser> dic = new Dictionary<int, MessageParser>();

    public static void AddMessageParser(int messageCode , MessageParser parser)
    {
        if (!Ins.dic.ContainsKey(messageCode))
        {
            Ins.dic.Add(messageCode, parser);
        }
    }

    public static byte[] Serialize(IMessage msg)
    {
        return msg.ToByteArray();
    }

    public static IMessage Deserialize(int messageCode, byte[] bytes) 
    {
        return Ins.dic[messageCode].ParseFrom(bytes);
    }

} 
