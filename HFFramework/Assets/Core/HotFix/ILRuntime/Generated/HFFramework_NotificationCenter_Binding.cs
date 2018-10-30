using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices;

using ILRuntime.CLR.TypeSystem;
using ILRuntime.CLR.Method;
using ILRuntime.Runtime.Enviorment;
using ILRuntime.Runtime.Intepreter;
using ILRuntime.Runtime.Stack;
using ILRuntime.Reflection;
using ILRuntime.CLR.Utils;

namespace ILRuntime.Runtime.Generated
{
    unsafe class HFFramework_NotificationCenter_Binding
    {
        public static void Register(ILRuntime.Runtime.Enviorment.AppDomain app)
        {
            BindingFlags flag = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static | BindingFlags.DeclaredOnly;
            MethodBase method;
            FieldInfo field;
            Type[] args;
            Type type = typeof(HFFramework.NotificationCenter);
            args = new Type[]{typeof(HFFramework.NotificationMessage)};
            method = type.GetMethod("PostNotification", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, PostNotification_0);
            args = new Type[]{typeof(System.Object), typeof(System.Int32), typeof(System.Action<HFFramework.NotificationMessage>)};
            method = type.GetMethod("AddObserver", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, AddObserver_1);
            args = new Type[]{typeof(System.Object), typeof(System.Int32)};
            method = type.GetMethod("RemoveObserver", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, RemoveObserver_2);

            field = type.GetField("Instance", flag);
            app.RegisterCLRFieldGetter(field, get_Instance_0);
            app.RegisterCLRFieldSetter(field, set_Instance_0);


        }


        static StackObject* PostNotification_0(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            HFFramework.NotificationMessage @msg = (HFFramework.NotificationMessage)typeof(HFFramework.NotificationMessage).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);


            HFFramework.NotificationCenter.PostNotification(@msg);

            return __ret;
        }

        static StackObject* AddObserver_1(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 4);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.Action<HFFramework.NotificationMessage> @callback = (System.Action<HFFramework.NotificationMessage>)typeof(System.Action<HFFramework.NotificationMessage>).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            System.Int32 @msgID = ptr_of_this_method->Value;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 3);
            System.Object @receiver = (System.Object)typeof(System.Object).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 4);
            HFFramework.NotificationCenter instance_of_this_method = (HFFramework.NotificationCenter)typeof(HFFramework.NotificationCenter).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            instance_of_this_method.AddObserver(@receiver, @msgID, @callback);

            return __ret;
        }

        static StackObject* RemoveObserver_2(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 3);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.Int32 @msgID = ptr_of_this_method->Value;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            System.Object @receiver = (System.Object)typeof(System.Object).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 3);
            HFFramework.NotificationCenter instance_of_this_method = (HFFramework.NotificationCenter)typeof(HFFramework.NotificationCenter).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            instance_of_this_method.RemoveObserver(@receiver, @msgID);

            return __ret;
        }


        static object get_Instance_0(ref object o)
        {
            return HFFramework.NotificationCenter.Instance;
        }
        static void set_Instance_0(ref object o, object v)
        {
            HFFramework.NotificationCenter.Instance = (HFFramework.NotificationCenter)v;
        }


    }
}
