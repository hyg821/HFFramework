using UniRx.Async;

namespace HFFramework
{
    public class LoginScene : GameScene
    {
        public async override UniTaskVoid OpenUI()
        {
            await UIManager.Open<FunctionController>(null, false, true);
        }
    }
}

