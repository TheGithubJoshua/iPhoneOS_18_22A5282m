@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController {
    BSAnimationSettings *_animationSettings;
    id /* block */ _animationBlock;
}

- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)a0 animationSettings:(id)a1 animationBlock:(id /* block */)a2;
- (void)_didComplete;
- (void).cxx_destruct;
- (id)initWithWorkspaceTransitionRequest:(id)a0;
- (void)_startAnimation;

@end
