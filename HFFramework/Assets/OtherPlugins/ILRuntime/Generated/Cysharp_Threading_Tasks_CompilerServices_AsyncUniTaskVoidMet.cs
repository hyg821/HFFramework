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
    unsafe class Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder_Binding
    {
        public static void Register(ILRuntime.Runtime.Enviorment.AppDomain app)
        {
            BindingFlags flag = BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static | BindingFlags.DeclaredOnly;
            MethodBase method;
            Type[] args;
            Type type = typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder);
            args = new Type[]{};
            method = type.GetMethod("Create", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, Create_0);
            Dictionary<string, List<MethodInfo>> genericMethods = new Dictionary<string, List<MethodInfo>>();
            List<MethodInfo> lst = null;                    
            foreach(var m in type.GetMethods())
            {
                if(m.IsGenericMethodDefinition)
                {
                    if (!genericMethods.TryGetValue(m.Name, out lst))
                    {
                        lst = new List<MethodInfo>();
                        genericMethods[m.Name] = lst;
                    }
                    lst.Add(m);
                }
            }
            args = new Type[]{typeof(global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor)};
            if (genericMethods.TryGetValue("Start", out lst))
            {
                foreach(var m in lst)
                {
                    if(m.MatchGenericParameters(args, typeof(void), typeof(global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor).MakeByRefType()))
                    {
                        method = m.MakeGenericMethod(args);
                        app.RegisterCLRMethodRedirection(method, Start_1);

                        break;
                    }
                }
            }
            args = new Type[]{};
            method = type.GetMethod("get_Task", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, get_Task_2);
            args = new Type[]{typeof(Cysharp.Threading.Tasks.UniTask.Awaiter), typeof(global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor)};
            if (genericMethods.TryGetValue("AwaitUnsafeOnCompleted", out lst))
            {
                foreach(var m in lst)
                {
                    if(m.MatchGenericParameters(args, typeof(void), typeof(Cysharp.Threading.Tasks.UniTask.Awaiter).MakeByRefType(), typeof(global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor).MakeByRefType()))
                    {
                        method = m.MakeGenericMethod(args);
                        app.RegisterCLRMethodRedirection(method, AwaitUnsafeOnCompleted_3);

                        break;
                    }
                }
            }
            args = new Type[]{typeof(System.Exception)};
            method = type.GetMethod("SetException", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, SetException_4);
            args = new Type[]{};
            method = type.GetMethod("SetResult", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, SetResult_5);
            args = new Type[]{typeof(System.Runtime.CompilerServices.IAsyncStateMachine)};
            method = type.GetMethod("SetStateMachine", flag, null, args, null);
            app.RegisterCLRMethodRedirection(method, SetStateMachine_6);

            app.RegisterCLRCreateDefaultInstance(type, () => new Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder());


        }

        static void WriteBackInstance(ILRuntime.Runtime.Enviorment.AppDomain __domain, StackObject* ptr_of_this_method, IList<object> __mStack, ref Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method)
        {
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            switch(ptr_of_this_method->ObjectType)
            {
                case ObjectTypes.Object:
                    {
                        __mStack[ptr_of_this_method->Value] = instance_of_this_method;
                    }
                    break;
                case ObjectTypes.FieldReference:
                    {
                        var ___obj = __mStack[ptr_of_this_method->Value];
                        if(___obj is ILTypeInstance)
                        {
                            ((ILTypeInstance)___obj)[ptr_of_this_method->ValueLow] = instance_of_this_method;
                        }
                        else
                        {
                            var t = __domain.GetType(___obj.GetType()) as CLRType;
                            t.SetFieldValue(ptr_of_this_method->ValueLow, ref ___obj, instance_of_this_method);
                        }
                    }
                    break;
                case ObjectTypes.StaticFieldReference:
                    {
                        var t = __domain.GetType(ptr_of_this_method->Value);
                        if(t is ILType)
                        {
                            ((ILType)t).StaticInstance[ptr_of_this_method->ValueLow] = instance_of_this_method;
                        }
                        else
                        {
                            ((CLRType)t).SetStaticFieldValue(ptr_of_this_method->ValueLow, instance_of_this_method);
                        }
                    }
                    break;
                 case ObjectTypes.ArrayReference:
                    {
                        var instance_of_arrayReference = __mStack[ptr_of_this_method->Value] as Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder[];
                        instance_of_arrayReference[ptr_of_this_method->ValueLow] = instance_of_this_method;
                    }
                    break;
            }
        }

        static StackObject* Create_0(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* __ret = ILIntepreter.Minus(__esp, 0);


            var result_of_this_method = Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder.Create();

            return ILIntepreter.PushObject(__ret, __mStack, result_of_this_method);
        }

        static StackObject* Start_1(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 2);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor @stateMachine = (global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor)typeof(global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor).CheckCLRTypes(__intp.RetriveObject(ptr_of_this_method, __mStack));

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method = (Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder)typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));

            instance_of_this_method.Start<global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor>(ref @stateMachine);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            switch(ptr_of_this_method->ObjectType)
            {
                case ObjectTypes.StackObjectReference:
                    {
                        var ___dst = ILIntepreter.ResolveReference(ptr_of_this_method);
                        object ___obj = @stateMachine;
                        if (___dst->ObjectType >= ObjectTypes.Object)
                        {
                            if (___obj is CrossBindingAdaptorType)
                                ___obj = ((CrossBindingAdaptorType)___obj).ILInstance;
                            __mStack[___dst->Value] = ___obj;
                        }
                        else
                        {
                            ILIntepreter.UnboxObject(___dst, ___obj, __mStack, __domain);
                        }
                    }
                    break;
                case ObjectTypes.FieldReference:
                    {
                        var ___obj = __mStack[ptr_of_this_method->Value];
                        if(___obj is ILTypeInstance)
                        {
                            ((ILTypeInstance)___obj)[ptr_of_this_method->ValueLow] = @stateMachine;
                        }
                        else
                        {
                            var ___type = __domain.GetType(___obj.GetType()) as CLRType;
                            ___type.SetFieldValue(ptr_of_this_method->ValueLow, ref ___obj, @stateMachine);
                        }
                    }
                    break;
                case ObjectTypes.StaticFieldReference:
                    {
                        var ___type = __domain.GetType(ptr_of_this_method->Value);
                        if(___type is ILType)
                        {
                            ((ILType)___type).StaticInstance[ptr_of_this_method->ValueLow] = @stateMachine;
                        }
                        else
                        {
                            ((CLRType)___type).SetStaticFieldValue(ptr_of_this_method->ValueLow, @stateMachine);
                        }
                    }
                    break;
                 case ObjectTypes.ArrayReference:
                    {
                        var instance_of_arrayReference = __mStack[ptr_of_this_method->Value] as global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor[];
                        instance_of_arrayReference[ptr_of_this_method->ValueLow] = @stateMachine;
                    }
                    break;
            }

            __intp.Free(ptr_of_this_method);
            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            WriteBackInstance(__domain, ptr_of_this_method, __mStack, ref instance_of_this_method);

            __intp.Free(ptr_of_this_method);
            return __ret;
        }

        static StackObject* get_Task_2(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method = (Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder)typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));

            var result_of_this_method = instance_of_this_method.Task;

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            WriteBackInstance(__domain, ptr_of_this_method, __mStack, ref instance_of_this_method);

            __intp.Free(ptr_of_this_method);
            return ILIntepreter.PushObject(__ret, __mStack, result_of_this_method);
        }

        static StackObject* AwaitUnsafeOnCompleted_3(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 3);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor @stateMachine = (global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor)typeof(global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor).CheckCLRTypes(__intp.RetriveObject(ptr_of_this_method, __mStack));

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            Cysharp.Threading.Tasks.UniTask.Awaiter @awaiter = (Cysharp.Threading.Tasks.UniTask.Awaiter)typeof(Cysharp.Threading.Tasks.UniTask.Awaiter).CheckCLRTypes(__intp.RetriveObject(ptr_of_this_method, __mStack));

            ptr_of_this_method = ILIntepreter.Minus(__esp, 3);
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method = (Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder)typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));

            instance_of_this_method.AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask.Awaiter, global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor>(ref @awaiter, ref @stateMachine);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            switch(ptr_of_this_method->ObjectType)
            {
                case ObjectTypes.StackObjectReference:
                    {
                        var ___dst = ILIntepreter.ResolveReference(ptr_of_this_method);
                        object ___obj = @stateMachine;
                        if (___dst->ObjectType >= ObjectTypes.Object)
                        {
                            if (___obj is CrossBindingAdaptorType)
                                ___obj = ((CrossBindingAdaptorType)___obj).ILInstance;
                            __mStack[___dst->Value] = ___obj;
                        }
                        else
                        {
                            ILIntepreter.UnboxObject(___dst, ___obj, __mStack, __domain);
                        }
                    }
                    break;
                case ObjectTypes.FieldReference:
                    {
                        var ___obj = __mStack[ptr_of_this_method->Value];
                        if(___obj is ILTypeInstance)
                        {
                            ((ILTypeInstance)___obj)[ptr_of_this_method->ValueLow] = @stateMachine;
                        }
                        else
                        {
                            var ___type = __domain.GetType(___obj.GetType()) as CLRType;
                            ___type.SetFieldValue(ptr_of_this_method->ValueLow, ref ___obj, @stateMachine);
                        }
                    }
                    break;
                case ObjectTypes.StaticFieldReference:
                    {
                        var ___type = __domain.GetType(ptr_of_this_method->Value);
                        if(___type is ILType)
                        {
                            ((ILType)___type).StaticInstance[ptr_of_this_method->ValueLow] = @stateMachine;
                        }
                        else
                        {
                            ((CLRType)___type).SetStaticFieldValue(ptr_of_this_method->ValueLow, @stateMachine);
                        }
                    }
                    break;
                 case ObjectTypes.ArrayReference:
                    {
                        var instance_of_arrayReference = __mStack[ptr_of_this_method->Value] as global::IAsyncStateMachineClassInheritanceAdaptor.IAsyncStateMachineAdaptor[];
                        instance_of_arrayReference[ptr_of_this_method->ValueLow] = @stateMachine;
                    }
                    break;
            }

            __intp.Free(ptr_of_this_method);
            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            switch(ptr_of_this_method->ObjectType)
            {
                case ObjectTypes.StackObjectReference:
                    {
                        var ___dst = ILIntepreter.ResolveReference(ptr_of_this_method);
                        object ___obj = @awaiter;
                        if (___dst->ObjectType >= ObjectTypes.Object)
                        {
                            if (___obj is CrossBindingAdaptorType)
                                ___obj = ((CrossBindingAdaptorType)___obj).ILInstance;
                            __mStack[___dst->Value] = ___obj;
                        }
                        else
                        {
                            ILIntepreter.UnboxObject(___dst, ___obj, __mStack, __domain);
                        }
                    }
                    break;
                case ObjectTypes.FieldReference:
                    {
                        var ___obj = __mStack[ptr_of_this_method->Value];
                        if(___obj is ILTypeInstance)
                        {
                            ((ILTypeInstance)___obj)[ptr_of_this_method->ValueLow] = @awaiter;
                        }
                        else
                        {
                            var ___type = __domain.GetType(___obj.GetType()) as CLRType;
                            ___type.SetFieldValue(ptr_of_this_method->ValueLow, ref ___obj, @awaiter);
                        }
                    }
                    break;
                case ObjectTypes.StaticFieldReference:
                    {
                        var ___type = __domain.GetType(ptr_of_this_method->Value);
                        if(___type is ILType)
                        {
                            ((ILType)___type).StaticInstance[ptr_of_this_method->ValueLow] = @awaiter;
                        }
                        else
                        {
                            ((CLRType)___type).SetStaticFieldValue(ptr_of_this_method->ValueLow, @awaiter);
                        }
                    }
                    break;
                 case ObjectTypes.ArrayReference:
                    {
                        var instance_of_arrayReference = __mStack[ptr_of_this_method->Value] as Cysharp.Threading.Tasks.UniTask.Awaiter[];
                        instance_of_arrayReference[ptr_of_this_method->ValueLow] = @awaiter;
                    }
                    break;
            }

            __intp.Free(ptr_of_this_method);
            ptr_of_this_method = ILIntepreter.Minus(__esp, 3);
            WriteBackInstance(__domain, ptr_of_this_method, __mStack, ref instance_of_this_method);

            __intp.Free(ptr_of_this_method);
            return __ret;
        }

        static StackObject* SetException_4(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 2);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.Exception @exception = (System.Exception)typeof(System.Exception).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method = (Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder)typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));

            instance_of_this_method.SetException(@exception);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            WriteBackInstance(__domain, ptr_of_this_method, __mStack, ref instance_of_this_method);

            __intp.Free(ptr_of_this_method);
            return __ret;
        }

        static StackObject* SetResult_5(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 1);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method = (Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder)typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));

            instance_of_this_method.SetResult();

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            WriteBackInstance(__domain, ptr_of_this_method, __mStack, ref instance_of_this_method);

            __intp.Free(ptr_of_this_method);
            return __ret;
        }

        static StackObject* SetStateMachine_6(ILIntepreter __intp, StackObject* __esp, IList<object> __mStack, CLRMethod __method, bool isNewObj)
        {
            ILRuntime.Runtime.Enviorment.AppDomain __domain = __intp.AppDomain;
            StackObject* ptr_of_this_method;
            StackObject* __ret = ILIntepreter.Minus(__esp, 2);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 1);
            System.Runtime.CompilerServices.IAsyncStateMachine @stateMachine = (System.Runtime.CompilerServices.IAsyncStateMachine)typeof(System.Runtime.CompilerServices.IAsyncStateMachine).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));
            __intp.Free(ptr_of_this_method);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            ptr_of_this_method = ILIntepreter.GetObjectAndResolveReference(ptr_of_this_method);
            Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder instance_of_this_method = (Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder)typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder).CheckCLRTypes(StackObject.ToObject(ptr_of_this_method, __domain, __mStack));

            instance_of_this_method.SetStateMachine(@stateMachine);

            ptr_of_this_method = ILIntepreter.Minus(__esp, 2);
            WriteBackInstance(__domain, ptr_of_this_method, __mStack, ref instance_of_this_method);

            __intp.Free(ptr_of_this_method);
            return __ret;
        }



    }
}