@interface SBTransientOverlayDismissWorkspaceTransaction : SBMainWorkspaceTransaction

+ (BOOL)isValidForTransitionRequest:(id)a0;

- (void)_didComplete;
- (void)_begin;
- (void)_sendActivationResultWithError:(id)a0;

@end
