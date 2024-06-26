@class MTLumaDodgePillSettings, SBStatusBarReusePool, SBSceneViewStatusBarAssertion, UITapGestureRecognizer, SBHomeGrabberView, NSMutableArray, UIView, SBDeviceApplicationSceneHandle, NSString, UIStatusBar, NSHashTable, UIApplicationSceneDeactivationAssertion, SBDeviceApplicationSceneView, SBOrientationTransformWrapperView, SBFHomeGrabberSettings, _SBStatusBarChanges, SBFTraitsParticipant;
@protocol BSInvalidatable, UIStatusBarStyleDelegate_SpringBoardOnly, SBScenePlaceholderContentContext, SBDeviceApplicationSceneViewControllerDelegate, SBApplicationSceneViewControllingStatusBarDelegate, SBApplicationSceneBackgroundView;

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSceneViewDelegate, UIStatusBarStyleDelegate_SpringBoardOnly, SBSceneViewStatusBarAssertionObserver, SBDeviceApplicationSceneOverlayViewProviderDelegate, SBDeviceApplicationSceneViewControlling> {
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSMutableArray *_overlayViewProviders;
    NSMutableArray *_activeOverlayViewProviders;
    SBFTraitsParticipant *_traitsParticipantForOverlayContainer;
    SBSceneViewStatusBarAssertion *_activeOverlayStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_placeholderStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_insetForHomeAffordanceStatusBarAssertion;
    UIStatusBar *_statusBar;
    SBStatusBarReusePool *_statusBarReusePool;
    UIView *_statusBarWrapperView;
    SBOrientationTransformWrapperView *_statusBarTransformView;
    UITapGestureRecognizer *_scrollToTopGestureRecognizer;
    UITapGestureRecognizer *_showDebugGestureRecognizer;
    id<BSInvalidatable> _liveContentDisableAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    id<UIStatusBarStyleDelegate_SpringBoardOnly> _realStatusBarStyleDelegate;
    struct { unsigned char styleDelegateWants_statusBar_effectiveStyleOverridesForRequestedStyle_overrides : 1; unsigned char styleDelegateWants_overriddenRequestedStyleFromStyle : 1; } _conformanceFlags;
    _SBStatusBarChanges *_statusBarChanges;
}

@property (readonly, nonatomic, getter=_sceneView) SBDeviceApplicationSceneView *sceneView;
@property (retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings;
@property (retain, nonatomic, getter=_statusBarAssertions, setter=_setStatusBarAssertions:) NSHashTable *statusBarAssertions;
@property (nonatomic) BOOL rendersWhileLocked;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (nonatomic) BOOL shouldDrawStatusBarInsideSceneView;
@property (weak, nonatomic) id<SBDeviceApplicationSceneViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (copy, nonatomic) NSString *sceneMinificationFilter;
@property (nonatomic) BOOL sceneRendersAsynchronously;
@property (nonatomic) BOOL sceneResizesHostedContext;
@property (readonly, nonatomic) UIView *sceneContentView;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic) long long overrideStatusBarStyle;
@property (weak, nonatomic) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (readonly, nonatomic) long long displayMode;
@property (retain, nonatomic) id<SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentReferenceSize;
@property (readonly, nonatomic) long long contentOrientation;
@property (readonly, nonatomic) long long containerOrientation;

- (unsigned long long)statusBar:(id)a0 effectiveStyleOverridesForRequestedStyle:(long long)a1 overrides:(unsigned long long)a2;
- (void)_setStatusBarStyle:(long long)a0 forPartWithIdentifier:(id)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (void)sceneHandle:(id)a0 didChangeStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1;
- (BOOL)overlayViewProviderIsHostedInNonrotatingWindow:(id)a0;
- (double)currentStatusBarHeight;
- (long long)trailingStatusBarStyle;
- (long long)leadingStatusBarStyle;
- (void)_createSceneOverlayViewProvidersIfNecessary;
- (void)willRotateFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 alongsideContainerView:(id)a2 animated:(BOOL)a3;
- (void)_updateStatusBarState;
- (void)_createStatusBar;
- (void)statusBar:(id)a0 didAnimateFromHeight:(double)a1 toHeight:(double)a2 animation:(int)a3;
- (void)viewDidLayoutSubviews;
- (BOOL)_isApplicationStatusBarHidden;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)a1;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)a0;
- (void)activateOverlayForViewProvider:(id)a0;
- (void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
- (void)_configureStatusBarWithCurrentStyleRequest;
- (void)statusBarAssertionDidUpdate:(id)a0;
- (void)_didDisableSecureDisplay;
- (void)statusBar:(id)a0 willAnimateFromHeight:(double)a1 toHeight:(double)a2 duration:(double)a3 animation:(int)a4;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (void)_applyStatusBarStyleOverridesToSuppress:(unsigned long long)a0 toSceneWithIdentifier:(id)a1;
- (void)containerDidUpdateTraitsParticipant:(id)a0;
- (void)_destroySceneOverlayViewProviders;
- (void)viewDidLoad;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (void)_relinquishResignActiveAssertion;
- (id)_underlyingStatusBarViewIfAvailable;
- (BOOL)_statusBarHasMatchMoveAnimation;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (BOOL)_shouldSuppressHomeGrabber;
- (void)_removeStatusBar;
- (void)_setRealStatusBarStyleDelegate:(id)a0;
- (unsigned long long)styleOverridesToSuppress;
- (void)_configureForSecureDisplay:(BOOL)a0;
- (void)_addStatusBarMatchMoveAnimationForView:(id)a0;
- (void)_statusBarScrollToTop:(id)a0;
- (void)_willEnableSecureDisplay;
- (void)invalidate;
- (void)setDisplayMode:(long long)a0 animationFactory:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (id)prepareForContentRotation;
- (BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
- (void)_statusBarShowDebug:(id)a0;
- (long long)statusBar:(id)a0 styleForRequestedStyle:(long long)a1 overrides:(unsigned long long)a2;
- (id)windowSceneForOverlayViewProvider:(id)a0;
- (BOOL)definesPresentationContext;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_canShowWhileLocked;
- (void)deactivateOverlayForViewProvider:(id)a0;
- (void)_configureForCurrentSecureDisplayState;
- (void)_deactivateOverlayForViewProvider:(id)a0;
- (id)initialTraitsParticipantForOverlayViewProvider:(id)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1 forPartWithIdentifier:(id)a2;
- (long long)_currentStatusBarStyleForPartWithIdentifier:(id)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (id)statusBarAssertionWithStatusBarHidden:(BOOL)a0 atLevel:(unsigned long long)a1;
- (void)dealloc;
- (void)_statusBarTapped:(id)a0 type:(long long)a1;
- (void)_recalculateResignActiveAssertionForActiveOverlays;
- (void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)a0;
- (void)_removeStatusBarMatchMoveAnimation;
- (void)sceneView:(id)a0 changedPreferredStatusBarStyleTo:(long long)a1;
- (void)_layoutStatusBar;
- (void)sceneHandle:(id)a0 didChangeStatusBarParts:(long long)a1;
- (void)_setStatusBarStyle:(long long)a0;
- (id)initWithSceneHandle:(id)a0;
- (long long)overriddenRequestedStyleFromStyle:(long long)a0;
- (void)statusBarAssertionDidInvalidate:(id)a0;
- (id)animationFactoryForImplicitTransitionFromMode:(long long)a0 toMode:(long long)a1 defaultFactory:(id)a2;
- (BOOL)overlayViewProviderRendersWhileLocked:(id)a0;
- (long long)_effectiveStyleForPartIdentifier:(id)a0;
- (BOOL)overlayViewProviderIsHostedInSecureWindow:(id)a0;
- (id)statusBarAssertionWithStatusBarSettings:(id)a0 atLevel:(unsigned long long)a1;
- (void)_setupStatusBarStylesFromSceneHandle:(id)a0;
- (long long)_currentStatusBarStyle;
- (BOOL)_activeOverlaysWantResignActiveAssertion;

@end
