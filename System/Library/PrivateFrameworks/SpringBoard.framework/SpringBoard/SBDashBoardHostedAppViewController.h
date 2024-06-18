@class _SBDashBoardHostedAppStatusBarStateProxy, NSString, SBAppViewController, SBMainDisplaySceneLayoutStatusBarView, NSSet, SBApplicationSceneView, SBFAuthenticationAssertion, UIApplicationSceneDeactivationAssertion, SBApplicationSceneHandle, UIApplicationSceneClientSettingsDiffInspector;
@protocol SBScenePlaceholderContentContext, SBDashBoardHostedAppViewControllerDelegate, CSAppHostContextProviding, BSInvalidatable;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <SBAppViewControllerDelegate, SBApplicationSceneHandleUpdateContributing, SBSceneHandleObserver, SBMainDisplaySceneLayoutStatusBarViewDataSource, SBDeviceApplicationSceneStatusBarStateObserver, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationHosting, BSInvalidatable> {
    SBAppViewController *_appViewController;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBFAuthenticationAssertion *_authenticationAssertion;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
    NSString *_cachedBasicPublicDescription;
    BOOL _invalidated;
    BOOL _wantsIdleTimerDisabled;
    BOOL _waitingToDeactivateAfterDisappearance;
    SBMainDisplaySceneLayoutStatusBarView *_statusBarView;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
}

@property (readonly, nonatomic) _SBDashBoardHostedAppStatusBarStateProxy *statusBarDescriber;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (weak, nonatomic) id<SBDashBoardHostedAppViewControllerDelegate> delegate;
@property (readonly, nonatomic) SBApplicationSceneHandle *applicationSceneHandle;
@property (readonly, nonatomic) SBApplicationSceneView *appView;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (weak, nonatomic) id<CSAppHostContextProviding> hostContextProvider;
@property (nonatomic) long long mode;
@property (retain, nonatomic) NSSet *actionsToDeliver;
@property (nonatomic) BOOL intentToTransitionFromSecureAppToFull;
@property (nonatomic) BOOL placeholderContentEnabled;
@property (nonatomic) BOOL interfaceOrientationLocked;
@property (nonatomic) long long overrideIdleWarnMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHostAnApp;
- (void)_addStatusBarViewIfNeeded;
- (void)_setMode:(long long)a0 fromClient:(BOOL)a1 forReason:(id)a2;
- (void)setHostedAppReferenceSize:(struct CGSize { double x0; double x1; })a0 withInterfaceOrientation:(long long)a1;
- (id)hostedAppSceneHandle;
- (void)aggregateBehavior:(id)a0;
- (BOOL)_shouldInvalidateUponDeactivation;
- (BOOL)allowsConfiguringIndividualStatusBarParts;
- (BOOL)appViewControllerIsInNonRotatingWindow:(id)a0;
- (void)appViewControllerWillActivateApplication:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)presentationStyle;
- (id)initWithApplicationSceneEntity:(id)a0;
- (long long)presentationType;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)viewDidLoad;
- (void)_deactivateIfAppropriateForReason:(id)a0;
- (void)setSupplementalActivationSettings:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (void)appViewController:(id)a0 didTransitionFromMode:(long long)a1 toMode:(long long)a2;
- (id)_appViewController;
- (void)_setResignActiveAssertionEnabled:(BOOL)a0;
- (id)appearanceIdentifier;
- (void)sceneWithIdentifier:(id)a0 didChangeSceneInterfaceOrientationTo:(long long)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)appViewControllerShouldHideHomeGrabberView:(id)a0;
- (void)applicationSceneHandle:(id)a0 appendToSceneSettings:(id)a1 fromRequestContext:(id)a2 entity:(id)a3;
- (long long)presentationPriority;
- (id)statusBarDescriberForStatusBarPart:(id)a0;
- (long long)containerInterfaceOrientation;
- (long long)contentInterfaceOrientation;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_endShowingStatusBarView;
- (void)_beginShowingStatusBarView;
- (id)hostedAppSceneHandles;
- (void)aggregateAppearance:(id)a0;
- (void)applicationSceneViewController:(id)a0 didUpdateStatusBarSettings:(id)a1;
- (void)appViewControllerDidDeactivateApplication:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)_newDisplayLayoutElement;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)_updateDisplayLayoutElementForActivation:(id)a0;
- (BOOL)isHostingAnApp;
- (void)willMoveToParentViewController:(id)a0;
- (void)conformsToSBApplicationHosting;
- (BOOL)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)a0;
- (BOOL)_shouldDelayDeactivationUntilAfterDisappearance;
- (void)_updateStatusBarContainerOrientation;
- (void)appViewControllerDidFailToActivateApplication:(id)a0;
- (BOOL)appViewControllerShouldReactivateApplicationOnDestruction:(id)a0;
- (id)_deviceApplicationSceneHandle;
- (id)statusBarDescribers;
- (long long)statusBarOrientation;

@end