using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public delegate void NotificationCallBack(NotificationMessage msg) ;

public class ObserverDelegate
{
	public object receiver;

	public int msgID;

	public NotificationCallBack callBack;

	public ObserverDelegate (object receiver,int msgID, NotificationCallBack call)
    {
		this.receiver = receiver;
		this.msgID = msgID;
		callBack += call;
	}
}
	
public class NotificationCenter : MonoBehaviour
{
	private static NotificationCenter self;

	private Dictionary<int , List<ObserverDelegate>> dic = new Dictionary<int, List<ObserverDelegate>>();

	public static NotificationCenter DefaultCenter()
    {
		if (self==null) {
            self = new NotificationCenter();
            self.dic = new Dictionary<int, List<ObserverDelegate>>();
        }
		return self;
	}

    private NotificationCenter()
    {

    }

	public void AddObserver(object receiver,int msgID,NotificationCallBack callback)
    {
        ObserverDelegate o = new ObserverDelegate(receiver, msgID, callback);
        List<ObserverDelegate> list;
        if (dic.TryGetValue(msgID, out list))
        {
            if (list!=null)
            {
                list.Add(o);
            }
        }
        else
        {
            List<ObserverDelegate> l = new List<ObserverDelegate>();
            l.Add(o);
            dic.Add(msgID, l);
        }
	}
		
	public void PostNotification(NotificationMessage msg)
    {
        List<ObserverDelegate> l;
        if (dic.TryGetValue(msg.msgID, out l))
        {
            for (int i = 0; i < l.Count; i++)
            {
                ObserverDelegate o = l[i];
                if (o.receiver != null || o.callBack != null)
                {
                    o.callBack(msg);
                }
                else
                {
                    l.Remove(o);
                }
            }
        }
	}

    public void RemoveObserver(object receiver, int msgID)
    {
        List<ObserverDelegate> l;
        if (dic.TryGetValue(msgID, out l))
        {
            if (l != null)
            {
                int i = 0;
                while (true)
                {
                    if (i < l.Count)
                    {
                        ObserverDelegate o = l[i];
                        if (o.receiver == receiver)
                        {
                            o.receiver = null;
                            o.callBack = null;
                            o.msgID = 0;
                            l.Remove(o);
                            break;
                        }
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }

    public void Destory()
    {
        self = null;
        dic.Clear();
        dic = null;
    }
}



