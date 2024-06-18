@interface SBTransientOverlayDismissToAppsWorkspaceTransaction : SBMainWorkspaceTransaction

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (BOOL)_canBeInterrupted;
- (void)_didComplete;
- (void)_begin;
- (BOOL)canInterruptForTransitionRequest:(id)a0;
- (void)_sendActivationResultWithError:(id)a0;

@end
