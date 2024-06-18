@class SBWindowSceneContext, SBWindowHidingManager, SBModalLibraryController, SBCoverSheetPresentationManager, SBSystemPointerInteractionManager, SBModalUIFluidDismissGestureManager, SBFZStackParticipant, SBFTraitsArbiter, SBMedusaHostedKeyboardWindowController, SBLayoutStateTransitionCoordinator, SBWallpaperController, SBControlCenterController, SBLockScreenManager, SBSceneLayoutStateProvider, SBRecordingIndicatorManager, SBTransientUIInteractionManager, SBDisplayAppInteractionEventSource, SBHardwareButtonZStackClient, UIWindow, SBSystemApertureController, SBLockedPointerManager, SBWindowScene, SBFloatingDockController, SBReachabilitySceneController, SBWindowScenePIPManager, NSString, SBModalAlertPresentationCoordinator, SBAlertItemsController, SBSystemGestureManager, SBFZStackResolver, SBTraitsPipelineManager, SBSceneManager, SBSwitcherController, CSCoverSheetViewController, BNBannerController, SBMainDisplayLayoutStateManager;
@protocol SBAssistantSceneControlling, FBSDisplayLayoutPublishing, SBTransientOverlayPresenting, SBUILockStateProviding, BSInvalidatable;

@interface SBAbstractWindowSceneDelegate : NSObject <SBWindowSceneContextProviding, SBFZStackParticipantDelegate, SBWindowSceneDelegate> {
    SBFTraitsArbiter *_traitsArbiter;
    SBTraitsPipelineManager *_pipelineManager;
    SBHardwareButtonZStackClient *_hardwareButtonZStackClient;
    SBFZStackParticipant *_keyShortcutHUDZStackParticipant;
    SBWindowSceneContext *_windowSceneContext;
    id<BSInvalidatable> _pointerAssertion;
    BOOL _invalidated;
}

@property (readonly, nonatomic) SBAlertItemsController *alertItemsController;
@property (readonly, nonatomic) SBDisplayAppInteractionEventSource *appInteractionEventSource;
@property (readonly, nonatomic) id<SBAssistantSceneControlling> assistantController;
@property (readonly, nonatomic) BNBannerController *bannerController;
@property (readonly, nonatomic) SBControlCenterController *controlCenterController;
@property (readonly, nonatomic) SBCoverSheetPresentationManager *coverSheetPresentationManager;
@property (readonly, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly, nonatomic) id<FBSDisplayLayoutPublishing> displayLayoutPublisher;
@property (readonly, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly, nonatomic) SBSceneLayoutStateProvider *layoutStateProvider;
@property (readonly, nonatomic) SBMainDisplayLayoutStateManager *layoutStateManager;
@property (readonly, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (readonly, nonatomic) SBLockedPointerManager *lockedPointerManager;
@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;
@property (readonly, nonatomic) SBMedusaHostedKeyboardWindowController *medusaHostedKeyboardWindowController;
@property (readonly, nonatomic) id<SBUILockStateProviding> uiLockStateProvider;
@property (readonly, nonatomic) SBModalAlertPresentationCoordinator *modalAlertPresentationCoordinator;
@property (readonly, nonatomic) SBModalLibraryController *modalLibraryController;
@property (readonly, nonatomic) SBModalUIFluidDismissGestureManager *modalUIFluidDismissGestureManager;
@property (readonly, nonatomic) SBWindowScenePIPManager *pictureInPictureManager;
@property (readonly, nonatomic) SBReachabilitySceneController *reachabilityController;
@property (readonly, nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (readonly, nonatomic) SBSwitcherController *switcherController;
@property (readonly, nonatomic) SBSystemApertureController *systemApertureController;
@property (readonly, nonatomic) SBSystemGestureManager *systemGestureManager;
@property (readonly, nonatomic) SBSystemPointerInteractionManager *systemPointerInteractionManager;
@property (readonly, nonatomic) SBFTraitsArbiter *traitsArbiter;
@property (readonly, nonatomic) SBTraitsPipelineManager *traitsPipelineManager;
@property (readonly, nonatomic) id<SBTransientOverlayPresenting> transientOverlayPresenter;
@property (readonly, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly, nonatomic) SBWindowHidingManager *windowHidingManager;
@property (readonly, nonatomic) SBFZStackResolver *zStackResolver;
@property (readonly, nonatomic) SBTransientUIInteractionManager *transientUIInteractionManager;
@property (readonly, nonatomic) SBSceneManager *sceneManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (retain, nonatomic) UIWindow *window;

- (void)zStackParticipantDidChange:(id)a0;
- (id)init;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (id)_acquireParticipantForWindow:(id)a0 reason:(id)a1;
- (id)_sbWindowSceneContext;
- (BOOL)_shouldManageParticipantWithRole:(id)a0;
- (void)sceneDidDisconnect:(id)a0;
- (void)_windowScene:(id)a0 windowWillBecomeHidden:(id)a1;
- (id)_traitsDelegateForWindowRole:(id)a0;
- (void)_setParticipant:(id)a0 forWindow:(id)a1;
- (BOOL)isInvalidated;
- (BOOL)_shouldHandleWindowWillBecomeHiddenForRole:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (id)_participantForWindow:(id)a0;
- (void)_handleKeyShortcutHUDVisibilityDidPresent;
- (void)_windowScene:(id)a0 windowWillBecomeVisible:(id)a1;
- (void).cxx_destruct;
- (id)_createTraitsArbiterWithPipelineManager:(id)a0;
- (id)_pipelineManager;
- (void)_handleKeyShortcutHUDVisibilityDidDismiss;
- (void)windowScene:(id)a0 didUpdateCoordinateSpace:(id)a1 interfaceOrientation:(long long)a2 traitCollection:(id)a3;
- (void)_windowScene:(id)a0 window:(id)a1 didUpdateSupportedInterfaceOrientations:(unsigned long long)a2 preferredOrientation:(long long)a3;
- (void)_windowScene:(id)a0 windowWillAttach:(id)a1;
- (void)_windowScene:(id)a0 windowWillDetach:(id)a1;
- (BOOL)_isWindowContentVisible:(id)a0;
- (void)_commonSceneSetupForScene:(id)a0;
- (void)_configureForConnectingWindowScene:(id)a0 windowSceneContext:(id)a1;
- (void)_windowScene:(id)a0 windowDidBecomeVisible:(id)a1;
- (void)setInvalidated:(BOOL)a0;
- (double)_windowScene:(id)a0 levelForWindow:(id)a1 preferredLevel:(double)a2;

@end