@class UIWindowScene, UIViewController, NSUndoManager, UISCurrentUserInterfaceStyleValue, FBSSceneLayer, UIKeyboardLayoutGuide, NSMutableArray, NSString, NSMutableSet, _UIWindowOrientationUpdate, _UIForcedOrientationTransactionToken, UIResponder, CAContext, _UIRootPresentationController, NSArray, UIScene, _UIFocusEventRecognizer, _UISystemGestureGateGestureRecognizer, UIAccessibilityHUDView, UIScreen, UIView, _UIPassthroughScrollInteraction, _UIContextBinder, _UIViewControllerNullAnimationTransitionCoordinator, UITraitCollection, _UIWindowAnimationController, CALayer, NSHashTable;
@protocol _UISceneUIWindowHosting, BSInterfaceOrientationMapResolving, UIFocusItem, UIActivityItemsConfigurationReading;

@interface UIWindow : UIView <_UIOrientationDebugDescriptionProviding, NSISEngineDelegate, _UIFocusEventRecognizerDelegate, _UIForcedOrientationTransactionHandler, _UIPassthroughScrollInteractionDelegate, _UIFocusMovementActionForwarding, _UIContextBindable> {
    NSString *_debugName;
    long long _sceneOrientation;
    long long _sceneClientOrientation;
    BOOL _notedOverlayInsetChange;
    UIViewController *_delegateViewController;
    double _windowLevel;
    double _windowSublevel;
    UIScene<_UISceneUIWindowHosting> *_windowHostingScene;
    UIResponder *_firstResponder;
    id _touchData;
    long long _viewOrientation;
    long long _previousSceneOrientationForCounterRotation;
    UIView *_exclusiveTouchView;
    NSUndoManager *_undoManager;
    CALayer *_sceneTransformLayer;
    CALayer *_transformLayer;
    CALayer *_rootLayer;
    NSMutableArray *_rotationViewControllers;
    NSMutableSet *_subtreeMonitors;
    struct { unsigned char delegateWillRotate : 1; unsigned char delegateDidRotate : 1; unsigned char delegateWillAnimateFirstHalf : 1; unsigned char delegateDidAnimationFirstHalf : 1; unsigned char delegateWillAnimateSecondHalf : 1; unsigned char autorotatesToPortrait : 1; unsigned char autorotatesToPortraitUpsideDown : 1; unsigned char autorotatesToLandscapeLeft : 1; unsigned char autorotatesToLandscapeRight : 1; unsigned char dontBecomeKeyOnOrderFront : 1; unsigned char inGesture : 1; unsigned char autorotates : 1; unsigned char autorotationRegistered : 1; unsigned char isRotating : 1; unsigned char isUsingOnePartRotationAnimation : 1; unsigned char disableAutorotationCount : 4; unsigned char needsAutorotationWhenReenabled : 1; unsigned char forceTwoPartRotationAnimation : 1; unsigned char orderKeyboardInAfterRotating : 1; unsigned char roundedCorners : 4; unsigned char resizesToFullScreen : 1; unsigned char keepContextInBackground : 1; unsigned char forceVisibleOnInit : 1; unsigned char settingFirstResponder : 1; unsigned char windowResizedToFullScreen : 1; unsigned char statusBarFollowsOrientation : 1; unsigned char secure : 1; unsigned char isSceneSized : 1; unsigned char didSetRestorationIdentifier : 1; unsigned char resigningFirstResponderFromHost : 1; unsigned char needsBoundingPathUpdate : 1; unsigned char avoidUpdatingSafeAreaInsets : 1; unsigned char needsFramePositionAdjustmentWhenWindowSceneIsAttached : 1; unsigned char enqueuedDeferredOrientationUpdate : 1; unsigned char isNotifyingColorTraitChangeForSubtree : 1; unsigned char needsCleanupOfOrientationTransaction : 1; } _windowFlags;
    id _windowController;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForGestures;
    _UISystemGestureGateGestureRecognizer *_systemGestureGateForTouches;
    UITraitCollection *_traitCollection;
    UITraitCollection *_destinationTraitCollection;
    long long _containedGestureRecognizerMaximumState;
    double _lastTouchTimestamp;
    unsigned char _systemGesturesArePossible : 1;
    long long _verticalSizeClassStateRestorationOverride;
    long long _horizontalSizeClassStateRestorationOverride;
    UIAccessibilityHUDView *_accessibilityHUD;
    NSHashTable *_windowLevelObservers;
    UISCurrentUserInterfaceStyleValue *_currentUserInterfaceStyleValue;
    NSString *_roleHint;
    id<BSInterfaceOrientationMapResolving> _interfaceOrientationMapResolver;
    UIView *_lowestLiveResizeSnapshot;
    _UIPassthroughScrollInteraction *_passthroughScrollInteraction;
    double _lastPropagatedStatusBarHeight;
}

@property (readonly, nonatomic) id<UIActivityItemsConfigurationReading> _activityItemsConfigurationForScene;
@property (readonly, nonatomic, getter=_isSystemGestureWindow) BOOL systemGestureWindow;
@property (readonly, weak, nonatomic, getter=_focusResponder) UIResponder *focusResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, setter=_setRootViewConstraints:) NSArray *_rootViewConstraints;
@property (retain, nonatomic) NSMutableArray *_currentKeyboardTrackingLayoutGuides;
@property (retain, nonatomic, setter=_setDeferredOrientationUpdate:) _UIWindowOrientationUpdate *_deferredOrientationUpdate;
@property (weak, nonatomic, getter=_rememberedFocusedItem, setter=_setRememberedFocusedItem:) id<UIFocusItem> rememberedFocusedItem;
@property (weak, nonatomic, setter=_setOrientationTransactionToken:) _UIForcedOrientationTransactionToken *_orientationTransactionToken;
@property (weak, nonatomic, getter=_delegateViewController, setter=_setDelegateViewController:) UIViewController *_delegateViewController;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _sceneBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _sceneReferenceBounds;
@property (readonly, nonatomic) long long _sceneOrientation;
@property (readonly, nonatomic) long long _sceneClientOrientation;
@property (readonly, retain, nonatomic) FBSSceneLayer *_associatingSceneLayer;
@property (readonly, nonatomic) long long _orientationInSceneSpace;
@property (readonly, nonatomic) long long _overriddenInterfaceOrientation;
@property (readonly, nonatomic) BOOL _updatesSafeAreaInsetsOnRead;
@property (weak, nonatomic, setter=_setLastFirstResponder:) UIResponder *_lastFirstResponder;
@property (retain, nonatomic, setter=_setLastFirstResponderInteractionState:) id _lastFirstResponderInteractionState;
@property (weak, nonatomic, setter=_setLastNextResponder:) UIResponder *_lastNextResponder;
@property (nonatomic, setter=_setWantsResponderWithoutKeyboard:) BOOL _wantsResponderWithoutKeyboard;
@property (nonatomic, setter=_setShouldDisableTransformLayerScalingForSnapshotting:) BOOL _shouldDisableTransformLayerScalingForSnapshotting;
@property (copy, nonatomic, setter=_setWindowInternalConstraints:) NSArray *_windowInternalConstraints;
@property (readonly, nonatomic) BOOL _usesLegacySupportedOrientationChecks;
@property (nonatomic, getter=_toWindowOrientation, setter=_setToWindowOrientation:) long long toWindowOrientation;
@property (nonatomic, getter=_fromWindowOrientation, setter=_setFromWindowOrientation:) long long fromWindowOrientation;
@property (retain, nonatomic, getter=_animationController, setter=_setAnimationController:) _UIWindowAnimationController *_animationController;
@property (retain, nonatomic, setter=_setTraitCollectionChangeTransitionCoordinator:) _UIViewControllerNullAnimationTransitionCoordinator *_traitCollectionChangeTransitionCoordinator;
@property (readonly, nonatomic) struct { long long x0; long long x1; } __sizeClassPair;
@property (copy, nonatomic, setter=_setShouldPreventRotationHook:) id /* block */ _shouldPreventRotationHook;
@property (nonatomic, setter=__setHostViewUnderlapsStatusBar:) BOOL __hostViewUnderlapsStatusBar;
@property (readonly, nonatomic, getter=_supportsFocus) BOOL supportsFocus;
@property (readonly, nonatomic, getter=_focusEventRecognizer) _UIFocusEventRecognizer *focusEventRecognizer;
@property (retain, nonatomic, getter=_rootPresentationController, setter=_setRootPresentationController:) _UIRootPresentationController *rootPresentationController;
@property (readonly, nonatomic) BOOL _preventsRootPresentationController;
@property (readonly, nonatomic, getter=_shouldInstallRootPresentationController) BOOL shouldInstallRootPresentationController;
@property (readonly, nonatomic, getter=_keyboardLayoutGuide) UIKeyboardLayoutGuide *_keyboardLayoutGuide;
@property (readonly, nonatomic, getter=_isApplicationKeyWindow) BOOL _applicationKeyWindow;
@property (nonatomic, setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions;
@property (weak, nonatomic) UIWindowScene *windowScene;
@property (nonatomic, setter=setCanResizeToFitContent:) BOOL canResizeToFitContent;
@property (retain, nonatomic) UIScreen *screen;
@property (nonatomic) double windowLevel;
@property (readonly, nonatomic, getter=isKeyWindow) BOOL keyWindow;
@property (readonly, nonatomic) BOOL canBecomeKeyWindow;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, setter=_setBoundContext:) CAContext *_boundContext;
@property (weak, nonatomic, setter=_setContextBinder:) _UIContextBinder *_contextBinder;
@property (readonly, nonatomic) struct { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } _bindingDescription;

+ (Class)layerClass;
+ (void)initialize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)_shouldSoftAssertOnSetScreen;
+ (BOOL)_isSystemWindow;
+ (BOOL)_isSecure;
+ (void)_pushKeyWindow:(id)a0;
+ (void)adjustForAccessibilityIfNeeded:(id)a0;
+ (id)_hitTestToPoint:(struct CGPoint { double x0; double x1; })a0 scenePointZ:(double)a1 forEvent:(id)a2 windowServerHitTestWindow:(id)a3;
+ (BOOL)_allWindowsKeepContextInBackground;
+ (id)_applicationKeyWindow;
+ (void)_enumerateWindowsIncludingInternalWindows:(BOOL)a0 onlyVisibleWindows:(BOOL)a1 allowMutation:(BOOL)a2 withBlock:(id /* block */)a3;
+ (id)_externalKeyWindow;
+ (id)_findWindowForControllingOverallAppearance;
+ (id)_findWindowForControllingOverallAppearanceInWindowScene:(id)a0;
+ (id)_findWithDisplayPoint:(struct CGPoint { double x0; double x1; })a0;
+ (id)_globalHitTestForLocation:(struct CGPoint { double x0; double x1; })a0 sceneLocationZ:(double)a1 inWindowServerHitTestWindow:(id)a2 withEvent:(id)a3;
+ (BOOL)_needsPassthroughInteraction;
+ (void)_noteStatusBarHeightChanged:(double)a0 oldHeight:(double)a1;
+ (void)_popKeyWindow:(id)a0;
+ (long long)_preferredStatusBarStyleInWindow:(id)a0 withPartStyles:(id *)a1 animationProvider:(id *)a2;
+ (BOOL)_prefersStatusBarHiddenInWindow:(id)a0 animationProvider:(id *)a1;
+ (BOOL)_prefersStatusBarHiddenInWindow:(id)a0 targetOrientation:(long long)a1 animationProvider:(id *)a2;
+ (void)_removeWindowFromStack:(id)a0;
+ (void)_setAllWindowsKeepContextInBackground:(BOOL)a0;
+ (void)_setTransformLayerRotationsAreEnabled:(BOOL)a0;
+ (void)_synchronizeDrawing;
+ (unsigned int)_synchronizeDrawingAcrossProcesses;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0;
+ (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)a0 withPreCommitHandler:(id /* block */)a1;
+ (void)_synchronizeDrawingWithCAFence:(id)a0 preCommitHandler:(id /* block */)a1;
+ (void)_synchronizeDrawingWithFence:(id)a0;
+ (void)_synchronizeDrawingWithFence:(id)a0 preCommitHandler:(id /* block */)a1;
+ (void)_synchronizeDrawingWithPreCommitHandler:(id /* block */)a0;
+ (id)_synchronizedDrawingFence;
+ (BOOL)_temporary_shouldSizeWindowsAutomaticallyPlistOverrideSet;
+ (id)_topVisibleWindowPassingTest:(id /* block */)a0;
+ (BOOL)_transformLayerRotationsAreEnabled;
+ (void)_unregisterChargedView:(id)a0;
+ (id)_windowWithContextId:(unsigned int)a0;
+ (void)adjustFocusForAccessibilityIfNeeded:(id)a0;
+ (id)allWindowsIncludingInternalWindows:(BOOL)a0 onlyVisibleWindows:(BOOL)a1;
+ (id)allWindowsIncludingInternalWindows:(BOOL)a0 onlyVisibleWindows:(BOOL)a1 forScreen:(id)a2;
+ (void *)createIOSurfaceFromDisplayConfiguration:(id)a0;
+ (void *)createIOSurfaceFromScreen:(id)a0;
+ (void *)createIOSurfaceOnScreen:(id)a0 withContextIds:(const unsigned int *)a1 count:(unsigned long long)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 baseTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4;
+ (void *)createIOSurfaceOnScreen:(id)a0 withContextIds:(const unsigned int *)a1 count:(unsigned long long)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 usePurpleGfx:(BOOL)a4 outTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a5;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)a0 count:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)a0 count:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a3;
+ (void *)createIOSurfaceWithContextIds:(const unsigned int *)a0 count:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 usePurpleGfx:(BOOL)a3 outTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } *)a4;
+ (void *)createScreenIOSurface;
+ (id)keyWindow;
+ (id)restrictedSplashboardClasses;
+ (void)setRestrictedSplashboardClasses:(id)a0;
+ (void)setShouldRestrictViewsForSplashboard:(BOOL)a0;
+ (BOOL)shouldRestrictViewsForSplashboard;

- (void)undo:(id)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attached:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateTransformLayer;
- (id)_scene;
- (void)setLevel:(double)a0;
- (id)_overridingPreferredFocusEnvironment;
- (id)_window;
- (id)_deepestActionResponder;
- (void)_didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)init;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 windowScene:(id)a2;
- (double)level;
- (double)_touchSloppinessFactor;
- (void)redo:(id)a0;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (id)restorationIdentifier;
- (void)removeFromSuperview;
- (BOOL)_alwaysGetsContexts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCoordinateSpace:(id)a1;
- (id)nextResponder;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)becomeFirstResponder;
- (void)_setScene:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_moveWithEvent:(id)a0;
- (void)_commonInit;
- (BOOL)autorotates;
- (long long)_orientationForViewTransform;
- (BOOL)_isRemoteKeyboardWindow;
- (id)initWithWindowScene:(id)a0;
- (void)endDisablingInterfaceAutorotation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
- (BOOL)_isWindowServerHostingManaged;
- (id)undoManager;
- (id)parentFocusEnvironment;
- (BOOL)isInternalWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isRemoteInputHostWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromCoordinateSpace:(id)a1;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (void)awakeFromNib;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_usableSceneBounds;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 toWindow:(id)a1;
- (BOOL)_isTransparentFocusRegion;
- (BOOL)_appearsInLoupe;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void)sendEvent:(id)a0;
- (BOOL)_shouldTextEffectsWindowBeHostedForView:(id)a0;
- (void)_matchDeviceOrientation;
- (BOOL)_isStatusBarWindow;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canAffectStatusBarAppearance;
- (id)_normalInheritedTintColor;
- (void)encodeWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)_layerForCoordinateSpaceConversion;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (void)_willSnapshot;
- (id)preferredFocusedView;
- (void).cxx_destruct;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (void)_didSnapshot;
- (void)_configureContextOptions:(id)a0;
- (void)_sceneBoundsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toWindow:(id)a1;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (id)contentView;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x3; } *)a0;
- (id)delegate;
- (BOOL)_wantsSceneAssociation;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_canIgnoreInteractionEvents;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_debugName;
- (long long)_orientationForRootTransform;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_isTextEffectsWindow;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)_canDisableMirroring;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (BOOL)_isSecure;
- (BOOL)isRotating;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromWindow:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (long long)_orientationForClassicPresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromWindow:(id)a1;
- (void)_setRotatableClient:(id)a0 toOrientation:(long long)a1 updateStatusBar:(BOOL)a2 duration:(double)a3 force:(BOOL)a4 isRotating:(BOOL)a5;
- (BOOL)inhibitSetupOrientation;
- (BOOL)_isTextEffectsWindowHosting;
- (id)_screen;
- (BOOL)_shouldControlAutorotation;
- (void)becomeKeyWindow;
- (void)dealloc;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)a0;
- (void)_setFirstResponder:(id)a0;
- (id)firstResponder;
- (void)_createSystemGestureGateGestureRecognizerIfNeeded;
- (id)preferredFocusEnvironments;
- (void)_didMoveFromScene:(id)a0 toScene:(id)a1;
- (void)setHidden:(BOOL)a0;
- (void)setContentView:(id)a0;
- (id)_roleHint;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isVisible;
- (void)_dismissAccessibilityHUD;
- (long long)interfaceOrientation;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_shouldResizeWithScene;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (BOOL)_isAlwaysKeyboardWindow;
- (long long)_orientationForSceneTransform;
- (void)setRestorationIdentifier:(id)a0;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)traitCollection;
- (BOOL)_disableAutomaticKeyboardUI;
- (BOOL)_hasContext;
- (unsigned int)_contextId;
- (void)_adjustFramePositionIfNecessary;
- (id)_canvas;
- (id)_centerExpressionInContainer:(id)a0 vertical:(BOOL)a1 contentInsetScale:(double)a2 engine:(id)a3;
- (struct CGPoint { double x0; double x1; })_constrainTouchLocationToScene:(struct CGPoint { double x0; double x1; })a0;
- (void)_forceTwoPartRotationAnimation:(BOOL)a0;
- (BOOL)_ignoresHitTest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sceneBoundsInWindowOrientation;
- (void)_setWindowInterfaceOrientation:(long long)a0;
- (void)addKeyboardLayoutGuideIfNeeded:(id)a0;
- (void *)createIOSurface;
- (BOOL)isUsingOnePartRotationAnimation;
- (void)keyboardDidHide;
- (void)resignKeyWindow;
- (void)setAutorotates:(BOOL)a0;
- (void)_addWindowLevelChangedObserver:(id)a0;
- (BOOL)_constrainsHoverEventHitTesting;
- (id)_firstResponder;
- (void)_handleDeviceOrientationChange:(id)a0;
- (BOOL)_isLoweringAnchoringConstraints;
- (id)_layerForTimeOffsetModification;
- (void)_willChangeToSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 screen:(id)a2 withTransitionCoordinator:(id)a3;
- (BOOL)_windowOwnsInterfaceOrientation;
- (BOOL)isInterfaceAutorotationDisabled;
- (id)__clientsForRotationCallbacks;
- (id)_aboveWindowScrollView;
- (id)_accessibilityHUDContainerViewForView:(id)a0;
- (void)_addRotationViewController:(id)a0;
- (void)_adjustSizeClassesAndResizeWindowToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_adjustWindowOrientationForTransitionWithSupportedOrientations:(unsigned long long)a0 preferredOrientation:(long long)a1 reason:(id)a2;
- (BOOL)_allowsLinkPreviewInteractionInViewServices;
- (BOOL)_allowsOcclusionDetectionOverride;
- (id)_appearanceContainer;
- (void)_autolayout_windowDidChangeBoundsFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_autolayout_windowDidChangeCenterFrom:(struct CGPoint { double x0; double x1; })a0;
- (double)_bindableLevel;
- (id)_bindingLayer;
- (id)_boundingPath;
- (BOOL)_cachedTraitCollectionIsValid;
- (BOOL)_canBecomeLayoutEngineDelegate;
- (BOOL)_canPromoteFromKeyWindowStack;
- (double)_chargeMultiplicationFactor;
- (double)_classicOffset;
- (void)_cleanupOrientationTransactionIfNecessary;
- (void)_clearPendingKeyboardChanges;
- (void)_clearSizeClassesForStateRestoration;
- (id)_clientsForRotation;
- (void)_commonInitAttachedWindow:(BOOL)a0 debugName:(id)a1 scene:(id)a2;
- (void)_commonInitDebugName:(id)a0 uiScene:(id)a1;
- (void)_configureRootLayer:(id)a0 sceneTransformLayer:(id)a1 transformLayer:(id)a2;
- (void)_constraints_subviewWillChangeSuperview:(id)a0;
- (BOOL)_containedInAbsoluteResponderChain;
- (id)_contextOptionsWithInitialOptions:(id)a0;
- (struct CGPoint { double x0; double x1; })_convertDoublePointFromSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertDoublePointToSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertOffset:(struct CGPoint { double x0; double x1; })a0 fromWindow:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertOffset:(struct CGPoint { double x0; double x1; })a0 toWindow:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertOffsetFromSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertOffsetToSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertPointFromSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_convertPointToSceneReferenceSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectFromSceneReferenceSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRectToSceneReferenceSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_convertVisualAltitude:(double)a0 fromWindow:(id)a1;
- (double)_convertVisualAltitude:(double)a0 toWindow:(id)a1;
- (BOOL)_definesDynamicTintColor;
- (id)_descendantWithAmbiguousLayout;
- (void)_didCreateRootPresentationController;
- (void)_didMoveFromScreen:(id)a0 toScreen:(id)a1;
- (unsigned long long)_edgeForTouch:(id)a0;
- (id)_eventRoutingScene;
- (id)_exclusiveTouchView;
- (void)_executeDeferredOrientationUpdate;
- (unsigned long long)_expectedWindowInternalConstraintsCount;
- (void)_fadeCalloutBarIfNeededForTouchInView:(id)a0;
- (void)_finishedFirstHalfRotation:(id)a0 finished:(BOOL)a1 context:(id)a2;
- (void)_finishedFullRotation:(BOOL)a0 context:(id)a1 skipNotification:(BOOL)a2;
- (void)_finishedFullRotation:(id)a0 finished:(id)a1 context:(id)a2;
- (void)_focusEventRecognizer:(id)a0 didRecognizeFastScrollingRequest:(id)a1;
- (BOOL)_focusEventRecognizer:(id)a0 didRecognizeFocusMovementRequest:(id)a1;
- (id)_focusMovementSystemForFocusEventRecognizer:(id)a0;
- (id)_focusedView;
- (void)_forwardFocusMovementAction:(id)a0;
- (BOOL)_guardSizeTransitionFromAnimations;
- (void)_handleSBActiveInterfaceOrientationChange:(id)a0;
- (void)_handleStatusBarOrientationChange:(id)a0;
- (BOOL)_hasAmbiguousLayout;
- (BOOL)_hasSystemGestureGate;
- (id)_hitTestLocation:(struct CGPoint { double x0; double x1; })a0 sceneLocationZ:(double)a1 inScene:(id)a2 withWindowServerHitTestWindow:(id)a3 event:(id)a4;
- (id)_hostingHandle;
- (id)_hostingWindow;
- (BOOL)_includeInDefaultImageSnapshot;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 attached:(BOOL)a2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 canvas:(id)a2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 displayConfiguration:(id)a2;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 scene:(id)a2 attached:(BOOL)a3;
- (id)_initWithOrientation:(long long)a0;
- (long long)_initialGuessInterfaceOrientation;
- (void)_initializeLayoutEngine;
- (void)_initializeLayoutEngineDiscardingOldIfNeeded:(BOOL)a0;
- (void)_installFocusEventRecognizer;
- (void)_installFocusIfNeededForFocusSystemSceneComponent:(id)a0;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)a0;
- (long long)_interfaceOrientationForSupportedOrientations:(unsigned long long)a0 preferredOrientation:(long long)a1;
- (id)_interfaceOrientationMapResolver;
- (void)_invalidateWindowInternalConstraints;
- (BOOL)_isConstrainedByScreenJail;
- (BOOL)_isHostingPortalViews;
- (BOOL)_isInAWindow;
- (BOOL)_isResigningFirstResponderFromHost;
- (BOOL)_isSceneSized;
- (BOOL)_isScrollingEnabledForView:(id)a0;
- (id)_keyboardSceneSettings;
- (id)_layoutEngineCreateIfNecessary;
- (id)_layoutEngineIfAvailable;
- (void)_legacySetRotatableViewOrientation:(long long)a0 duration:(double)a1;
- (void)_legacySetRotatableViewOrientation:(long long)a0 duration:(double)a1 force:(BOOL)a2;
- (void)_legacySetRotatableViewOrientation:(long long)a0 updateStatusBar:(BOOL)a1 duration:(double)a2 force:(BOOL)a3;
- (void)_localOverrideTraitCollectionDidChange;
- (void)_localOverrideTraitCollectionWillChange:(id)a0;
- (void)_mainQueue_makeKeyAndVisible;
- (void)_makeExternalKeyWindow;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_managedSafeAreaInsets;
- (BOOL)_needsShakesWhenInactive;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedSafeAreaInsets;
- (void)_noteOverlayInsetsDidChange;
- (void)_notifyRotatableViewOrientation:(long long)a0 duration:(double)a1;
- (void)_orderFrontWithoutMakingKey;
- (id)_orientationDebugDescription;
- (id)_orientationDebugDescriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_orientationDebugDescriptionWithMultilinePrefix:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_overlayInsets;
- (id)_overrideTargetWindowForPathIndex:(unsigned long long)a0 forEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)_parentWillTransitionToTraitCollection:(id)a0;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)a0;
- (void)_positionHeaderView:(id)a0 andFooterView:(id)a1 outsideContentViewForInterfaceOrientation:(long long)a2;
- (long long)_preferredInterfaceOrientationForRootViewController;
- (void)_prepareHierarchyForWindowHostingSceneRemoval;
- (void)_propagateTraitCollectionChangedForStateRestorationWithTransitionCoordinator:(id)a0;
- (id)_redundantConstraints;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceFrameFromSceneUsingScreenBounds:(BOOL)a0;
- (void)_registerChargedView:(id)a0;
- (void)_registerScrollToTopView:(id)a0;
- (void)_registerSubtreeMonitor:(id)a0;
- (id)_registeredScrollToTopViews;
- (void)_removeAllViewControllersFromWindowHierarchyFromDealloc:(BOOL)a0;
- (void)_removeFocusEventRecognizer;
- (void)_removeFocusIfNeededForFocusSystemSceneComponent:(id)a0;
- (void)_removeRotationViewController:(id)a0;
- (void)_removeWindowLevelChangedObserver:(id)a0;
- (BOOL)_requiresKeyboardPresentationFence;
- (void)_resetFocusEventRecognizer;
- (BOOL)_resizeWindowFrameToSceneBoundsIfNecessary;
- (void)_resizeWindowToFullScreenIfNecessary;
- (id)_responderForKeyEvents;
- (id)_responderSelectionContainerViewForResponder:(id)a0;
- (id)_responderWindow;
- (void)_restoreFirstResponder;
- (void)_retryHandleStatusBarChangeIfNecessary;
- (BOOL)_reversesLinearFocusWrapping;
- (id)_rootForKeyResponderCycle;
- (id)_rootSheetPresentationController;
- (id)_rootViewConstraintsUpdateIfNecessaryForView:(id)a0;
- (void)_rotateToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAnimator:(id)a1 transitionContext:(id)a2;
- (void)_rotateWindowToOrientation:(long long)a0 updateStatusBar:(BOOL)a1 duration:(double)a2 skipCallbacks:(BOOL)a3;
- (double)_rotationDuration;
- (id)_rotationViewControllers;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_safeAreaInsetsInSuperview:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_sceneSafeAreaInsetsIncludingStatusBar:(BOOL)a0;
- (void)_sceneSettingsSafeAreaInsetsDidChange;
- (void)_scrollToTopViewsUnderScreenPointIfNecessary:(struct CGPoint { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (void)_sendButtonsForEvent:(id)a0;
- (void)_sendTouchesForEvent:(id)a0;
- (void)_setCanvas:(id)a0;
- (void)_setExclusiveTouchView:(id)a0;
- (void)_setHidden:(BOOL)a0 forced:(BOOL)a1;
- (void)_setInterfaceOrientationMapResolver:(id)a0;
- (void)_setIsLoweringAnchoringConstraints:(BOOL)a0;
- (void)_setIsResigningFirstResponderFromHost:(BOOL)a0;
- (void)_setIsSettingFirstResponder:(BOOL)a0;
- (void)_setNeedsBoundingPathUpdate;
- (void)_setRoleHint:(id)a0;
- (void)_setRotatableViewOrientation:(long long)a0 duration:(double)a1;
- (void)_setRotatableViewOrientation:(long long)a0 duration:(double)a1 force:(BOOL)a2;
- (void)_setRotatableViewOrientation:(long long)a0 updateStatusBar:(BOOL)a1 duration:(double)a2 force:(BOOL)a3;
- (void)_setSecure:(BOOL)a0;
- (void)_setStateRestorationVerticalSizeClass:(long long)a0 horizontalSizeClass:(long long)a1;
- (void)_setSystemGestureRecognitionIsPossible:(BOOL)a0 andTouchesAreCancelled:(BOOL)a1;
- (void)_setWindowControlsStatusBarOrientation:(BOOL)a0;
- (void)_setWindowHostingScene:(id)a0;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0 checkForDismissal:(BOOL)a1 isRotationDisabled:(BOOL *)a2;
- (BOOL)_shouldCreateContextAsSecure;
- (BOOL)_shouldDelayTouchForSystemGestures:(id)a0;
- (BOOL)_shouldPropagateTraitCollectionChanges;
- (BOOL)_shouldRecognizeEventsInFocusEventRecognizer:(id)a0;
- (BOOL)_shouldUseRemoteContext;
- (void)_showAccessibilityHUDItem:(id)a0 forView:(id)a1;
- (void)_slideHeaderView:(id)a0 andFooterView:(id)a1 offScreen:(BOOL)a2 forInterfaceOrientation:(long long)a3;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (id)_subtreeMonitorsForView:(id)a0;
- (unsigned long long)_supportedInterfaceOrientationsConsultingApp:(BOOL)a0;
- (unsigned long long)_supportedInterfaceOrientationsForRootViewController;
- (BOOL)_supportsBecomeFirstResponderWhenPossible;
- (void)_switchToLayoutEngine:(id)a0;
- (BOOL)_systemGestureRecognitionIsPossible;
- (id)_targetForStolenStatusBarTouchesAtPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 excludingWindow:(id)a2;
- (id)_targetWindowForPathIndex:(long long)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 scenePointZ:(double)a2 forEvent:(id)a3 windowServerHitTestWindow:(id)a4;
- (void)_tintColorDidChange;
- (id)_touchData;
- (BOOL)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)a0;
- (id)_traitCollectionForSize:(struct CGSize { double x0; double x1; })a0 parentCollection:(id)a1;
- (id)_traitCollectionForSize:(struct CGSize { double x0; double x1; })a0 parentCollection:(id)a1 localOverrideCollection:(id)a2;
- (id)_traitCollectionWhenRotated;
- (struct CGPoint { double x0; double x1; })_transformDisplayToWindowCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_transformLayerIncludesScreenRotation;
- (void)_transformLayerShouldMaskToBounds:(BOOL)a0;
- (id)_uiWindowSceneFromFBSScene:(id)a0;
- (id)_uiib_candidateRedundantConstraints;
- (void)_uiib_invalidateWindowInternalConstraints;
- (id)_uiib_layoutEngineCreatingIfNecessary;
- (id)_undoManagerForValidatingUndoRedoCommands;
- (void)_unregisterChargedView:(id)a0;
- (void)_unregisterScrollToTopView:(id)a0;
- (void)_unregisterSubtreeMonitor:(id)a0;
- (void)_updateAutorotationResponse:(BOOL)a0;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(BOOL)a0;
- (void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(BOOL)a0;
- (void)_updateInterfaceOrientationFromDeviceOrientation;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)a0;
- (void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)a0;
- (void)_updateIsSceneSizedFlag;
- (void)_updateLayerOrderingAndSetLayerHidden:(BOOL)a0;
- (void)_updateLayerOrderingAndSetLayerHidden:(BOOL)a0 actionBlock:(id /* block */)a1;
- (void)_updateOrientationPreferencesAnimated:(BOOL)a0;
- (void)_updateSystemConstraints;
- (void)_updateToInterfaceOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_updateToInterfaceOrientation:(long long)a0 duration:(double)a1 force:(BOOL)a2;
- (void)_updateToNotificationProvidedInterfaceOrientation:(long long)a0 animated:(BOOL)a1;
- (void)_updateWindowEngineHostConstraintsWithSizing:(BOOL)a0;
- (void)_updateWindowTraits;
- (void)_updateWindowTraitsAndNotify:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_usableBounds;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_viewTransformForInterfaceOrientation:(long long)a0;
- (BOOL)_wantsFocusEngine;
- (void)_willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_willUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_windowCanDynamicallySpecifySupportedInterfaceOrientations;
- (BOOL)_windowControlsStatusBarOrientation;
- (id)_windowHostingScene;
- (id)_windowHostingSceneTraitCollection;
- (long long)_windowInterfaceOrientation;
- (void)_windowInternalConstraints_centerDidChange;
- (void)_windowInternalConstraints_sizeDidChange;
- (BOOL)_windowOwnsInterfaceOrientationTransform;
- (void)_writeLayerTreeToPath:(id)a0;
- (void)addRootViewControllerViewIfPossible;
- (void)beginDisablingInterfaceAutorotation;
- (int)bitsPerComponent;
- (void)cancelOrientationTransaction:(id)a0;
- (void)commitOrientationTransaction:(id)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })convertDeviceToWindow:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertWindowToDevice:(struct CGPoint { double x0; double x1; })a0;
- (void *)createIOSurfaceWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)a0;
- (void)exerciseAmbiguityInLayout;
- (id)gestureParent;
- (BOOL)hasAmbiguousLayout;
- (BOOL)inhibitManualTransform;
- (BOOL)inhibitTextEffectsRotation;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isTrackingKeyboard;
- (BOOL)keepContextInBackground;
- (void)layoutViewsForTrackedGuides;
- (void)makeKey:(id)a0;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)makeKeyAndVisible;
- (void)makeKeyWindow;
- (void)matchDeviceOrientation:(id)a0;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)removeKeyboardLayoutGuideIfNeeded:(id)a0;
- (id)representation;
- (BOOL)resizesToFullScreen;
- (id)safeAreaAspectFitLayoutGuide;
- (void)setAutorotates:(BOOL)a0 forceUpdateInterfaceOrientation:(BOOL)a1;
- (void)setBecomeKeyOnOrderFront:(BOOL)a0;
- (void)setKeepContextInBackground:(BOOL)a0;
- (void)setResizesToFullScreen:(BOOL)a0;
- (void)setupForOrientation:(long long)a0;
- (void)toggleKeyboardLayoutGuideAnimation:(BOOL)a0;
- (void)updateConditionalEdgeConstraintsForKeyboardGuide;
- (void)updateKeyboardAnimationOptions:(unsigned long long)a0 duration:(double)a1;
- (void)updateKeyboardDockedState:(BOOL)a0;
- (void)updateKeyboardForAssistantBar:(BOOL)a0;
- (BOOL)updateKeyboardOffset:(struct UIOffset { double x0; double x1; })a0;
- (BOOL)updateKeyboardSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateKeyboardTransitionState:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;

@end