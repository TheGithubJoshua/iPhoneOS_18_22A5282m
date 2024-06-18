@class SAAssertion, FBSceneWorkspace, SBSystemApertureSceneElementConfiguration, SBSystemApertureSceneElementAccessoryView, FBScene, SBSystemApertureSceneElementScenePresenterView, SBUISystemApertureAlertingAction, UIColor, SBDeviceApplicationSceneHandle, NSSet, NSString, NSHashTable, SBSystemApertureSettings, NSArray, SBApplication;
@protocol SAAlertHosting, SAElement, SAAutomaticallyInvalidatable, SAElementHosting, SAUILayoutHosting, SBSystemApertureGestureHandling, SBSystemApertureStatusBarStyleOverridesSuppressing, BNPresentable, BSInvalidatable, SAActivityHosting, SBSystemApertureSceneElementLaunchActionHandling;

@interface SBSystemApertureSceneElement : NSObject <SAActivityBehavior, SAAlertBehavior, SBSystemApertureContextProviding, SBSystemApertureContextAccepting, SAUIElementViewProviding, SAUIContentTransitioning, SBSystemApertureElementAssertionObserving, SBSystemApertureStatusBarStyleOverridesRepresenting, SBSystemApertureElementVisibilityObserving, FBSceneObserver, FBSceneLayerManagerObserver, SBBacklightControllerObserver, SBPresentableElement, SBSystemApertureLayoutCustomizing, SBSystemApertureGestureCustomizing, SBButtonEventsHandler>

@property (class, readonly, nonatomic) FBSceneWorkspace *sceneWorkspace;
@property (class, readonly, nonatomic) NSSet *scenesForBacklightSession;
@property (class, readonly, nonatomic) NSArray *activeElements;

@property (retain, nonatomic) FBScene *scene;
@property (weak, nonatomic) id<SBSystemApertureStatusBarStyleOverridesSuppressing> statusBarStyleOverridesSuppresser;
@property (retain, nonatomic) SBSystemApertureSceneElementScenePresenterView *sceneView;
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *leadingView;
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *trailingView;
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *minimalView;
@property (retain, nonatomic) SBSystemApertureSceneElementAccessoryView *detachedMinimalView;
@property (nonatomic, getter=isReadyForPresentation) BOOL readyForPresentation;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (nonatomic) BOOL requiresSuppressionFromSystemAperture;
@property (readonly, nonatomic) id /* block */ readyHandler;
@property (copy, nonatomic) id /* block */ deactivationHandler;
@property (readonly, nonatomic) id /* block */ transitionRequestHandler;
@property (readonly, nonatomic) NSHashTable *_layoutObservers;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _obstructedAreaFrame;
@property (readonly, nonatomic, getter=_alertingActivityAssertion) id<SAAutomaticallyInvalidatable> alertingActivityAssertion;
@property (readonly, nonatomic) long long alertingSource;
@property (readonly, nonatomic, getter=_sessionMonitorAssertion) id<SAAutomaticallyInvalidatable> sessionMonitorAssertion;
@property (retain, nonatomic, getter=_alertingAction, setter=_setAlertingAction:) SBUISystemApertureAlertingAction *alertingAction;
@property (nonatomic) BOOL wantsLayoutPassForClientUpdate;
@property (nonatomic) long long mostRecentLayoutModeChangeReason;
@property (readonly, nonatomic) unsigned long long activationAttributes;
@property (retain, nonatomic) id<BSInvalidatable> statusBarStyleOverridesSuppressionAssertion;
@property (retain, nonatomic) id<BSInvalidatable> activeApplicationElementAssertion;
@property (nonatomic) BOOL wantsSpecialFlowerBoundsResizingAnimationForWallet;
@property (readonly, nonatomic) SBSystemApertureSettings *settings;
@property (retain, nonatomic) SAAssertion *elementHostPrefersSuppressionAssertion;
@property (nonatomic) int elementAppearState;
@property (retain, nonatomic) SBApplication *associatedApplication;
@property (nonatomic) BOOL hasHandledLaunchAction;
@property (nonatomic) BOOL hasCompletedInitialPresentation;
@property (nonatomic) BOOL backlightIsOrWillBecomeActive;
@property (readonly, nonatomic, getter=isDeactivating) BOOL deactivating;
@property (copy, nonatomic) SBSystemApertureSceneElementConfiguration *configuration;
@property (retain, nonatomic) id<BNPresentable> presentable;
@property (copy, nonatomic) id /* block */ clientInvalidationRequestHandler;
@property (copy, nonatomic) id /* block */ sceneInvalidationHandler;
@property (weak, nonatomic) id<SBSystemApertureSceneElementLaunchActionHandling> launchActionHandler;
@property (nonatomic) BOOL alwaysAllowTapToAppForBodyTaps;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *associatedApplicationSceneHandle;
@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SAAlertHosting> alertHost;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (nonatomic, getter=isAlerting) BOOL alerting;
@property (nonatomic) BOOL elementProviderPrefersSuppression;
@property (nonatomic) unsigned long long obstructionEdge;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) unsigned long long representedStatusBarStyleOverrides;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic) long long systemApertureCustomLayout;
@property (readonly, nonatomic) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property (weak, nonatomic) id<SBSystemApertureGestureHandling> gestureHandler;

+ (id)sceneWorkspaceIdentifier;
+ (void)addActiveElement:(id)a0;
+ (id)defaultAnimationParameters;
+ (void)hostedScenesDidChange;
+ (void)removeActiveElement:(id)a0;

- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)sceneDidInvalidate:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonLongPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)a0;
- (void)backlightController:(id)a0 didTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (id)succinctDescription;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)viewProvider;
- (id)sceneSettings;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (BOOL)_canShowWhileLocked;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)backlightController:(id)a0 willTransitionToBacklightState:(long long)a1 source:(long long)a2;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)a0;
- (id)requestAlertingAssertion;
- (long long)_clientLayoutModeForLayoutMode:(long long)a0;
- (void)_handleAlertingAssertionRequest;
- (long long)_layoutModeForClientLayoutMode:(long long)a0;
- (void)_setupSceneViewInContainerView:(id)a0;
- (void)_acquireOrUpdateAppStatusBarSessionsAssertionIfNeeded;
- (BOOL)_activateCorrespondingAppSceneIfPossible;
- (void)_addActivationAttribute:(unsigned long long)a0;
- (void)_applyTransitionParameters:(id)a0;
- (id)_bundleIdForLaunchTarget;
- (BOOL)_calculateRequiresSuppressionFromSystemAperture;
- (id)_existingAlertingAssertion;
- (void)_finishDeactivationIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSceneViewInContainerView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInSceneContainerForView:(id)a0;
- (BOOL)_handleAction:(id)a0;
- (BOOL)_handleLaunchAction;
- (BOOL)_hasActivationAttribute:(unsigned long long)a0;
- (BOOL)_hasPresentationBehavior:(unsigned long long)a0;
- (id)_inferredElementIdentifier;
- (BOOL)_isAssociatedWithBundleIdentifier:(id)a0;
- (BOOL)_isAssociatedWithSceneWithPersistenceIdentifier:(id)a0;
- (BOOL)_isValidAlertingSource:(long long)a0;
- (void)_layoutHostMayNotPerformLayoutUpdate;
- (void)_layoutSceneViewInContainerView:(id)a0;
- (BOOL)_ownsScene;
- (id)_proposeTransitionParametersForTransitionToFrameInSceneView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 excludingParametersAssociatedWithReasons:(unsigned long long)a1 usingCurrentAnimationParameters:(BOOL)a2;
- (BOOL)_requiresForegroundScene;
- (BOOL)_shouldHandleLaunchAction;
- (struct CGSize { double x0; double x1; })_sizeForSceneView;
- (BOOL)_supportsMenuPresentations;
- (void)_updateActiveElementsAndAssociatedApplication;
- (void)_updateAlertAssertionIfNecessary;
- (void)_updateMutableSceneSettings:(id)a0 withParameters:(id)a1;
- (void)_updatePortalViews;
- (void)_updateReadyForPresentationIfNeeded;
- (unsigned long long)_updateReasonsForTransitionWithProposedParameters:(id)a0;
- (unsigned long long)_updateReasonsForTransitionWithProposedParameters:(id)a0 excludingReasons:(unsigned long long)a1;
- (BOOL)_updateRequiresSuppressionFromSystemAperture;
- (void)_updateScene:(id)a0 activatingIfNeeded:(BOOL)a1 settingsWithTransitionBlock:(id /* block */)a2;
- (void)_updateSceneBackgroundStateIfNeeded;
- (void)_updateSceneWithTransitionParameters:(id)a0;
- (BOOL)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)a0 ofBundleId:(id)a1;
- (void)activateWithInitialOtherClientSettings:(id)a0;
- (void)activateWithInitialOtherClientSettings:(id)a0 transitionRequestHandler:(id /* block */)a1;
- (void)addElementLayoutSpecifierObserver:(id)a0;
- (double)concentricPaddingOverrideForView:(id)a0 inLayoutMode:(long long)a1;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (void)deactivateWhenRemovedWithHandler:(id /* block */)a0;
- (void)element:(id)a0 visibilityDidChange:(BOOL)a1;
- (void)element:(id)a0 visibilityWillChange:(BOOL)a1;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasActivityBehavior;
- (BOOL)hasAlertBehavior;
- (id)initWithScene:(id)a0 statusBarStyleOverridesSuppresser:(id)a1 readyForPresentationHandler:(id /* block */)a2;
- (id)initWithSceneSpecification:(id)a0 sceneClientIdentity:(id)a1 statusBarStyleOverridesSuppresser:(id)a2 readyForPresentationHandler:(id /* block */)a3;
- (BOOL)isBiometricKit;
- (BOOL)isFixedInOrientation;
- (BOOL)isRequestingLayoutUpdateForHostedClient;
- (BOOL)overridesConcentricPaddingForView:(id)a0 inLayoutMode:(long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)removeElementLayoutSpecifierObserver:(id)a0;
- (id)sceneClientSettings;
- (void)setAffiliatedWithSessionMonitor:(BOOL)a0;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (BOOL)shouldSuppressElementWhileOnCoversheet;
- (BOOL)shouldSuppressElementWhilePresentingAppWithBundleId:(id)a0;
- (BOOL)shouldSuppressElementWhilePresentingSceneWithIdentifier:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })a0 forProvidedView:(id)a1 inLayoutMode:(long long)a2;
- (void)systemApertureElementAssertionAcquired;
- (void)systemApertureElementAssertionInvalidated;

@end