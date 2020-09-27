using System;
using System.Collections.Generic;
using System.Linq;
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
            args = new Type[]{typeof(System.UInt16), typeof(System.Int32)};
            method = type.GetMethod("ConvertToKey", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, ConvertToKey_1);
            args = new Type[]{typeof(System.Object), typeof(System.UInt16), typeof(System.Int32), typeof(System.Action<HFFramework.NotificationMessage>)};
            method = type.GetMethod("AddObserver", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, AddObserver_2);
            args = new Type[]{typeof(System.Object), typeof(System.UInt64)};
            method = type.GetMethod("RemoveObserver", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, RemoveObserver_3);

            field = type.GetField("Instance", flag);
            app.RegisterCLRFieldGetter(field, get_Instance_0);
            app.RegisterCLRFieldSetter(field, set_Instance_0);
            app.RegisterCLRFieldBinding(field, CopyToStack_Instance_0, AssignFromStack_Instance_0);


        }


        static StackObject* PostNotification_0(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            HFFramework.NotificationMessage @msg = (HFFramework.NotificationMessage)typeof(HFFramework.NotificationMessage).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);


            HFFramework.NotificationCenter.Post(@msg);

            return __ret;
        }

        static StackObject* ConvertToKey_1(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 2);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.Int32 @msgID = ptr_of_this_method->Value;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            System.UInt16 @moduleID = (ushort)ptr_of_this_method->Value;


            var result_of_this_method = HFFramework.NotificationCenter.ConvertToKey(@moduleID, @msgID);

            __ret->ObjectType = ObjectTypes.Long;
            *(ulong*)&__ret->Value = result_of_this_method;
            return __ret + 1;
        }

        static StackObject* AddObserver_2(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 5);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.Action<HFFramework.NotificationMessage> @callback = (System.Action<HFFramework.NotificationMessage>)typeof(System.Action<HFFramework.NotificationMessage>).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            System.Int32 @msgID = ptr_of_this_method->Value;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 3);
            System.UInt16 @moduleID = (ushort)ptr_of_this_method->Value;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 4);
            System.Object @receiver = (System.Object)typeof(System.Object).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 5);
            HFFramework.NotificationCenter instance_of_this_method = (HFFramework.NotificationCenter)typeof(HFFramework.NotificationCenter).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            instance_of_this_method.AddObserver(@receiver, @moduleID, @msgID, @callback);

            return __ret;
        }

        static StackObject* RemoveObserver_3(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 3);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.UInt64 @key = *(ulong*)&ptr_of_this_method->Value;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            System.Object @receiver = (System.Object)typeof(System.Object).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 3);
            HFFramework.NotificationCenter instance_of_this_method = (HFFramework.NotificationCenter)typeof(HFFramework.NotificationCenter).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            instance_of_this_method.RemoveObserver(@receiver, @key);

            return __ret;
        }


        static object get_Instance_0(ref object o)
        {
            return HFFramework.NotificationCenter.Instance;
        }

        static StackObject* CopyToStack_Instance_0(ref object o, ILIntepreter __intp, StackObject* __ret, IList<object> __mStack)
        {
            var result_of_this_method = HFFramework.NotificationCenter.Instance;
            object obj_result_of_this_method = result_of_this_method;
            if(obj_result_of_this_method is CrossBindingAdaptorType)
            {    
                return ILIntepreter.PushObject(__ret, __mStack, ((CrossBindingAdaptorType)obj_result_of_this_method).ILInstance);
            }
            return ILIntepreter.PushObject(__ret, __mStack, result_of_this_method);
        }

        static void set_Instance_0(ref object o, object v)
        {
            HFFramework.NotificationCenter.Instance = (HFFramework.NotificationCenter)v;
        }

        static StackObject* AssignFromStack_Instance_0(ref object o, ILIntepreter __intp, StackObject* ptr_of_this_method, IList<object> __mStack)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            HFFramework.NotificationCenter @Instance = (HFFramework.NotificationCenter)typeof(HFFramework.NotificationCenter).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            HFFramework.NotificationCenter.Instance = @Instance;
            return ptr_of_this_method;
        }



    }
}
