namespace HFFramework
{
    public class BattleState : FSMBaseState
    {
        public BattleState(string stateName, FSMController controller) : base(stateName, controller)
        {
        }

        public override void OnStateEnter()
        {
            base.OnStateEnter();
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

