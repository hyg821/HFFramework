using UniRx.Async;

namespace HFFramework
{
    public class LoginScene : GameScene
    {
        public async override UniTask OpenUI()
        {
            await base.OpenUI();
            await UIManager.Open<FunctionController>(null, false, true);
        }
    }
}

