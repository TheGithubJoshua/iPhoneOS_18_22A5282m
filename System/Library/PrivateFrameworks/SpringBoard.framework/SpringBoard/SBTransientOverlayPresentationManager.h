@class SBBannerManager, SBCoverSheetPresentationManager, NSString, SBAlertItemsController, SBIdleTimerCoordinatorHelper, SBLockStateAggregator, SBReachabilityManager, SBWindowSceneManager, NSMapTable;
@protocol SBIdleTimerCoordinating, SBTransientOverlayScenePresenterDelegate;

@interface SBTransientOverlayPresentationManager : NSObject <SBIdleTimerCoordinating, SBIdleTimerProviding, SBButtonEventsHandler> {
    SBWindowSceneManager *_windowSceneManager;
    NSMapTable *_presentersByWindowScene;
    SBAlertItemsController *_alertItemsController;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBLockStateAggregator *_lockStateAggregator;
    SBReachabilityManager *_reachabilityManager;
}

@property (retain, nonatomic) SBBannerManager *bannerManager;
@property (retain, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (weak, nonatomic) id<SBTransientOverlayScenePresenterDelegate> presenterDelegate;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (weak, nonatomic) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (readonly, nonatomic) BOOL hasActivePresentation;
@property (readonly, nonatomic) BOOL canActivePresentationBecomeLocalFirstResponder;
@property (readonly, nonatomic) BOOL canActivePresentationBecomeFirstResponder;
@property (readonly, nonatomic) long long presentedViewControllerCount;
@property (readonly, nonatomic) BOOL shouldUseSceneBasedKeyboardFocusForActivePresentation;
@property (readonly, nonatomic) BOOL prefersStatusBarActivityItemVisible;
@property (readonly, nonatomic) BOOL shouldDisableControlCenter;
@property (readonly, nonatomic) BOOL shouldDisableCoverSheetGesture;
@property (readonly, nonatomic) BOOL shouldDisableSiri;
@property (readonly, nonatomic) BOOL activePresentationPreventsDragAndDrop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleVoiceCommandButtonPress;
- (void)windowSceneDidConnect:(id)a0;
- (void)windowSceneDidDisconnect:(id)a0;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)hasPresentationAboveWindowLevel:(double)a0;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleHomeButtonDoublePress;
- (id)topmostPresentedViewController;
- (BOOL)handleLockButtonPress;
- (void)performPresentationRequest:(id)a0;
- (BOOL)hasActivePresentationForWindowScene:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)isTopmostPresentedViewController:(id)a0;
- (BOOL)handleVolumeDownButtonPress;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)hasActivePresentationFromProcess:(id)a0;
- (id)defaultDisplayConfigurationForTransientOverlayPresentation;
- (void).cxx_destruct;
- (BOOL)hasActivePresentationFromBundleIdentifier:(id)a0;
- (id)initWithWindowSceneManager:(id)a0 alertItemsController:(id)a1 lockStateAggregator:(id)a2 reachabilityManager:(id)a3;
- (void)performDismissalRequest:(id)a0;
- (BOOL)isPresentingViewController:(id)a0;
- (void)dealloc;
- (BOOL)hasActiveSpotlightPresentation;
- (id)transientOverlayPresenterForWindowScene:(id)a0;

@end
