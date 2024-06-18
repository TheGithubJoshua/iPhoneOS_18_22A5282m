@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject

@property (weak, nonatomic) UIScene *_scene;
@property (readonly, nonatomic) long long currentActivationState;

- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)didEnterBackground;
- (void)didResignActive;
- (void)willEnterForeground;
- (void)willConnect;
- (void).cxx_destruct;
- (void)willDisonnect;
- (void)willEnterBackground;
- (void)didDisonnect;
- (void)didEnterForeground;
- (id)initWithScene:(id)a0;
- (void)didConnect;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;

@end
