namespace HFFramework
{
    public class LoginState : FSMBaseState
    {
        public LoginState(string stateName, FSMController controller) : base(stateName, controller)
        {
        }

        public async override void OnStateEnter()
        {
            base.OnStateEnter();
            //创建控制器
            LoginController controller = await UIManager.Instance.Open<LoginController>(true);
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

