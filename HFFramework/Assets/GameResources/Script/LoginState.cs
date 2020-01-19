namespace HFFramework
{
    public class LoginState : FSMState
    {
        public async override void OnStateEnter()
        {
            base.OnStateEnter();
            //创建控制器
            LoginController controller = await UIManager.Open<LoginController>(true);
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

