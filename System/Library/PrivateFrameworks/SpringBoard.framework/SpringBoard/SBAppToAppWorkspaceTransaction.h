@class NSObject, SBUIAnimationController, SBAutoPIPWorkspaceTransaction;
@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
}

@property (nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete;

- (id)initWithTransitionRequest:(id)a0;
- (BOOL)_canBeInterrupted;
- (BOOL)_transitionWasCancelled;
- (void)_didComplete;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_performPreAnimationTasksWithCompletion:(id /* block */)a0;
- (BOOL)_hasPostAnimationTasks;
- (void)_performPostAnimationTasksWithCompletion:(id /* block */)a0;
- (void)_begin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (BOOL)_hasPreAnimationTasks;
- (void)_animationWillBegin:(BOOL)a0;
- (id)_setupAnimation;
- (void).cxx_destruct;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)a0;
- (id)debugDescription;
- (void)_beginTransition;
- (BOOL)shouldAnimateOrientationChangeOnCompletion;
- (void)_clearAnimation;
- (void)_handleApplicationDidNotChange:(id)a0;
- (void)dealloc;
- (void)_animationDidRevealApplication;
- (id)_setupAnimationFrom:(id)a0 to:(id)a1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (void)_cleanUpAfterAnimation;
- (BOOL)_shouldResignActiveForAnimation;

@end
