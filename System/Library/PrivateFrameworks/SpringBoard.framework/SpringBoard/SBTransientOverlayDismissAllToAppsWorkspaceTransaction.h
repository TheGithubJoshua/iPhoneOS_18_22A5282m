@class NSArray, SBAutoPIPWorkspaceTransaction;
@protocol BSInvalidatable;

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    id<BSInvalidatable> _pipWindowLevelOverrideAssertionInvalidatable;
    BOOL _isUsingSwitcherAnimation;
    BOOL _beganDismissingTransientOverlays;
}

- (id)initWithTransitionRequest:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (unsigned long long)_concurrentOverlayDismissalOptions;
- (void)_performDismissal;
- (void)_begin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_logForInterruptAttemptReason:(id)a0;
- (id)_setupAnimation;
- (void).cxx_destruct;
- (BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)a0;
- (void)dealloc;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (BOOL)_shouldResignActiveForAnimation;
- (BOOL)_shouldAnimateTransition;
- (void)_handleDismissOverlaysCompletion;

@end
