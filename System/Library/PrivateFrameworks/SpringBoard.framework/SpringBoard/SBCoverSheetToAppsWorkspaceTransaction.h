@class SBDismissOverlaysAnimationController, SBAutoPIPWorkspaceTransaction, SBTransientOverlayDismissAllWorkspaceTransaction;

@interface SBCoverSheetToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBDismissOverlaysAnimationController *_dismissOverlaysAnimationController;
    SBTransientOverlayDismissAllWorkspaceTransaction *_transientOverlayTransaction;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
}

@property (nonatomic) BOOL preservesBanners;

- (id)initWithTransitionRequest:(id)a0;
- (unsigned long long)_dismissOverlaysOptions;
- (void)_didComplete;
- (void)_begin;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_autoPIPIfNeeded;
- (void)_dismissOverlaysIfNeeded;

@end
