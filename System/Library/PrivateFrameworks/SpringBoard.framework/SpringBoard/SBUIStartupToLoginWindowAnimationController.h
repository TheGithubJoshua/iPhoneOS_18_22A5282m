@class NSString, SBWindow, BKSDisplayRenderOverlay, BSTransaction;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController <SBLoginAppContainerViewControllerObserver> {
    SBWindow *_transitionWindow;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
    BSTransaction *_waitForLoginAppToFinishLaunchingTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationSettings;
- (void)loginAppDidFinishLaunching:(id)a0;
- (void)_cleanupAnimation;
- (void)_setHidden:(BOOL)a0;
- (id)_getTransitionWindow;
- (BOOL)_shouldDismissBanner;
- (id)initWithTransitionContextProvider:(id)a0;
- (id)initWithTransitionContextProvider:(id)a0 overlay:(id)a1;
- (void).cxx_destruct;
- (void)_startAnimation;

@end
