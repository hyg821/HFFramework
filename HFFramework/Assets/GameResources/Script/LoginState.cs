using UniRx.Async;

namespace HFFramework
{
    public class LoginState : FSMState
    {
        public async override void OnStateEnter()
        {
            base.OnStateEnter();

            // 游戏状态机流程 每一步都通过 await 不要使用callback 以免逻辑混乱
            // 打开loading 页面（下边每一步都会给loading 页面发送消息 同步进度）
            // 状态A 离开
            // 1.关闭UI
            // 2.卸载对应管理器的游戏对象 该清空的清空
            // 3.卸载场景
            // 状态B 进入
            // 4.异步加载场景 
            // 5.异步 资源预加载 
            // 6.异步 网络请求 
            // 7.异步 实例化 游戏物体 
            // 8.打开ui 
            // 9.关闭 loading 
            // 切换完成

            LoginController controller = await UIManager.Open<LoginController>(null, false, true);
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

