namespace HFFramework
{
    public class LoginState : FSMBaseState
    {
        public LoginState(string stateName, FSMController controller) : base(stateName, controller)
        {
        }

        public override void OnStateEnter()
        {
            base.OnStateEnter();
            //创建控制器
            LoginController controller = UIManager.Instance.GetController<LoginController>();
            controller.Open();
        }

        public override void OnStateStay()
        {
            base.OnStateStay();
        }

        public override void OnStateExit()
        {
            base.OnStateExit();
        }
    }
}

