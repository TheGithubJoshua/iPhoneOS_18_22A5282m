@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction {
    SBApplicationSceneEntity *_fromAppSceneEntity;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
}

- (void)_didComplete;
- (void)_animationWillBegin:(BOOL)a0;
- (id)_setupAnimation;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)a0 toLockScreenEnvironment:(id)a1;
- (void)_animationDidFinish;
- (unsigned long long)_serialOverlayPreDismissalOptions;

@end
