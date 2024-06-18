@class SBDisableActiveInterfaceOrientationChangeAssertion;
@protocol SBLockScreenEnvironment;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    id<SBLockScreenEnvironment> _lockScreenEnvironment;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (void)_didComplete;
- (void)_lockScreenDidActivate;
- (void)_begin;
- (void).cxx_destruct;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (void)_activateLockScreen;
- (void)_setupAndActivate;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)a0 lockScreenEnvironment:(id)a1;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;

@end
