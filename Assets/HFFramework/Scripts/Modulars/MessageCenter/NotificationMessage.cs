using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NotificationMessage
{
	public int msgID;

	public object sender;

    public object obj;

	public NotificationMessage(){
		
	}

	public NotificationMessage(int msgID,Object sender ,object obj)
    {
		this.msgID = msgID;
		this.sender = sender;
        this.obj = obj;
	}
}
