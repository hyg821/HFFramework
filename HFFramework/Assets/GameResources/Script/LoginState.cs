using UniRx.Async;

namespace HFFramework
{
    public class LoginState : FSMState
    {
        public async override void OnStateEnter(object param = null)
        {
            base.OnStateEnter(param);
            LoginController controller = await UIManager.Open<LoginController>(null, false, true);
        }

        public override void OnStateStay()
        {
            base.OnStateStay();
        }

        public override void OnStateExit(object param = null)
        {
            base.OnStateExit(param);
        }
    }
}

