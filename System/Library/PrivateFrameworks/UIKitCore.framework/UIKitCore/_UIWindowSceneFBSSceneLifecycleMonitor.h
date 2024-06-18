@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {
    NSNumber *_transitioningState;
    BOOL _transitioning;
    BOOL _connected;
}

- (void)willBecomeActive;
- (void)didEnterBackground;
- (long long)currentActivationState;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (id)_windowScene;

@end
