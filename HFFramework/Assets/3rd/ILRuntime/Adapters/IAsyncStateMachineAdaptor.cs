using System;
using System.Runtime.CompilerServices;
using ILRuntime.CLR.Method;
using ILRuntime.Runtime.Enviorment;
using ILRuntime.Runtime.Intepreter;

/// <summary>
/// 用于async await适配
/// </summary>
public class IAsyncStateMachineClassInheritanceAdaptor : CrossBindingAdaptor
{
    public override Type BaseCLRType
    {
        get
        {
            return typeof(IAsyncStateMachine);
        }
    }

    public override Type AdaptorType
    {
        get
        {
            return typeof(IAsyncStateMachineAdaptor);
        }
    }

    public override object CreateCLRInstance(ILRuntime.Runtime.Enviorment.AppDomain appdomain, ILTypeInstance instance)
    {
        return new IAsyncStateMachineAdaptor(appdomain, instance);
    }

    public class IAsyncStateMachineAdaptor : IAsyncStateMachine, CrossBindingAdaptorType
    {
        private ILTypeInstance instance;
        private ILRuntime.Runtime.Enviorment.AppDomain appDomain;

        private IMethod mMoveNext;
        private IMethod mSetStateMachine;
        private readonly object[] param1 = new object[1];

        public IAsyncStateMachineAdaptor()
        {
        }

        public IAsyncStateMachineAdaptor(ILRuntime.Runtime.Enviorment.AppDomain appDomain, ILTypeInstance instance)
        {
            this.appDomain = appDomain;
            this.instance = instance;
            mMoveNext = ILInstance.Type.GetMethod("MoveNext", 0);
            mSetStateMachine = ILInstance.Type.GetMethod("SetStateMachine", 1);
        }

        public ILTypeInstance ILInstance
        {
            get
            {
                return instance;
            }
        }

        public void MoveNext()
        {
            using (var ctx = appDomain.BeginInvoke(mMoveNext))
            {
                ctx.PushObject(ILInstance);
                ctx.Invoke();
            }
        }

        public void SetStateMachine(IAsyncStateMachine stateMachine)
        {
            using (var ctx = appDomain.BeginInvoke(mSetStateMachine))
            {
                ctx.PushObject(ILInstance);
                ctx.PushObject(stateMachine);
                ctx.Invoke();
            }
        }

        public override string ToString()
        {
            IMethod m = appDomain.ObjectType.GetMethod("ToString", 0);
            m = instance.Type.GetVirtualMethod(m);
            if (m == null || m is ILMethod)
            {
                return instance.ToString();
            }

            return instance.Type.FullName;
        }
    }
}
