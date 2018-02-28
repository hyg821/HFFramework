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
    unsafe class HFFramework_AudioManager_Binding
    {
        public static void Register(ILRuntime.Runtime.Enviorment.AppDomain app)
        {
            BindingFlags flag = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static | BindingFlags.DeclaredOnly;
            MethodBase method;
            FieldInfo field;
            Type[] args;
            Type type = typeof(HFFramework.AudioManager);
            args = new Type[]{};
            method = type.GetMethod("GetFreeAudioPlayer", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, GetFreeAudioPlayer_0);

            field = type.GetField("self", flag);
            app.RegisterCLRFieldGetter(field, get_self_0);
            app.RegisterCLRFieldSetter(field, set_self_0);


        }


        static StackObject* GetFreeAudioPlayer_0(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);
            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            HFFramework.AudioManager instance_of_this_method;
            instance_of_this_method = (HFFramework.AudioManager)typeof(HFFramework.AudioManager).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            var result_of_this_method = instance_of_this_method.GetFreeAudioPlayer();

            object obj_result_of_this_method = result_of_this_method;
            if(obj_result_of_this_method is CrossBindingAdaptorType)
            {    
                return ILIntepreter.PushObject(__ret, __mStack, ((CrossBindingAdaptorType)obj_result_of_this_method).ILInstance);
            }
            return ILIntepreter.PushObject(__ret, __mStack, result_of_this_method);
        }


        static object get_self_0(ref object o)
        {
            return HFFramework.AudioManager.self;
        }
        static void set_self_0(ref object o, object v)
        {
            HFFramework.AudioManager.self = (HFFramework.AudioManager)v;
        }


    }
}
