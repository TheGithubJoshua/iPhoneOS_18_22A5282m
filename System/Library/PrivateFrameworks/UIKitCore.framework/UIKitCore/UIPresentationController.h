@class UIView, NSString, NSArray, UITraitCollection, UITapGestureRecognizer, NSUUID, _UIFormSheetPresentationController, UIWindowScene, UIViewController, _UIPresentationControllerVisualStyle, UIBarButtonItem;
@protocol UIViewControllerTransitionCoordinatorContext, UIViewControllerAnimatedTransitioning, UIFocusItemContainer, _UITraitEnvironmentInternal, UIViewControllerInteractiveTransitioning, UIViewControllerTransitionCoordinator, UIPopoverPresentationControllerSourceItem, UIFocusEnvironment, UIAdaptivePresentationControllerDelegate;

@interface UIPresentationController : NSObject <_UIFallbackEnvironment, _UIGeometryChangeObserver, _UIAppearanceContainer, _UITraitEnvironmentInternal, _UIContentContainerInternal, UIGestureRecognizerDelegate, UIAppearanceContainer, UITraitEnvironment, UIContentContainer, UIFocusEnvironment> {
    BOOL _isDisconnectedRoot;
    BOOL _transitionAsDisconnectedRoot;
    BOOL _needsDidAppear;
    BOOL _needsDidDisappear;
    BOOL _monitorsSystemLayoutFittingSize;
    BOOL _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    id _target;
    long long _didFinish;
    UITraitCollection *_lastNotifiedTraitCollection;
    UIView *_snapshotOverlayView;
    UITapGestureRecognizer *_backGestureRecognizer;
    NSUUID *_currentRunningAnimationsUUID;
    UIView *_observedRealSourceView;
    UIViewController *_weakPresentedViewController;
    UIWindowScene *_windowSceneIgnoringEvents;
}

@property (class, readonly, nonatomic) BOOL _allowsDeferredTransitions;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic, setter=_setPendingFocusEnvironmentUnlock:) id /* block */ _pendingFocusEnvironmentUnlock;
@property (retain, nonatomic, getter=_currentTransitionController, setter=_setCurrentTransitionController:) id<UIViewControllerAnimatedTransitioning> currentTransitionController;
@property (retain, nonatomic, getter=_currentInteractionController, setter=_setCurrentInteractionController:) id<UIViewControllerInteractiveTransitioning> currentInteractionController;
@property (retain, nonatomic, setter=_setPresentingViewController:) UIViewController *presentingViewController;
@property (retain, nonatomic, setter=_setPresentedViewController:) UIViewController *presentedViewController;
@property (nonatomic, getter=_isPresentedViewControllerStoredWeakly, setter=_setPresentedViewControllerStoredWeakly:) BOOL _presentedViewControllerStoredWeakly;
@property (retain, nonatomic, getter=_presentationView, setter=_setPresentationView:) UIView *presentationView;
@property (weak, nonatomic, getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:) UIView *_currentPresentationSuperview;
@property (nonatomic) long long state;
@property (retain, nonatomic, setter=_setContainerView:) UIView *containerView;
@property (nonatomic, getter=_preferredContentSize, setter=_setPreferredContentSize:) struct CGSize { double width; double height; } _preferredContentSize;
@property (readonly, nonatomic) _UIPresentationControllerVisualStyle *_visualStyle;
@property (retain, nonatomic, getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:) id<UIViewControllerTransitionCoordinator> adaptiveTransitionCoordinator;
@property (retain, nonatomic, getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:) id<UIViewControllerTransitionCoordinatorContext> adaptiveTransitionContext;
@property (nonatomic, getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:) BOOL changedPresentingViewControllerDuringAdaptation;
@property (copy, nonatomic) id /* block */ _transitionViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _containerSuperviewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _fromViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _toViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _customFromViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _customToViewForCurrentTransition;
@property (copy, nonatomic) id /* block */ _computeToEndFrameForCurrentTransition;
@property (copy, nonatomic) id /* block */ _currentTransitionDidComplete;
@property (readonly, nonatomic) BOOL _isPresentedInFullScreen;
@property (readonly, nonatomic) BOOL _presentedViewControllerProvidesContentScrollView;
@property (readonly, weak, nonatomic) UIView *_viewForRemoteTextEffectsWindowMatchAnimation;
@property (readonly, nonatomic) BOOL _ignoresLeftAndRightSafeAreaInsets;
@property (readonly, nonatomic) BOOL _mayChildGrabPresentedViewControllerView;
@property (readonly, nonatomic) UIView *_presentedViewForOverrideTraits;
@property (nonatomic, getter=_shouldContinueTouchesOnTargetViewController, setter=_setShouldContinueTouchesOnTargetViewController:) BOOL shouldContinueTouchesOnTargetViewController;
@property (retain, nonatomic, getter=_customViewForTouchContinuation, setter=_setCustomViewForTouchContinuation:) UIView *customViewForTouchContinuation;
@property (readonly, nonatomic) id<_UITraitEnvironmentInternal> _parentTraitEnvironment;
@property (copy, nonatomic, getter=_internalOverrideTraitCollection, setter=_setInternalOverrideTraitCollection:) UITraitCollection *internalOverrideTraitCollection;
@property (readonly, nonatomic) _UIFormSheetPresentationController *_adaptiveFormSheetPresentationController;
@property (readonly, nonatomic) BOOL _allowsFocusInPresentingViewController;
@property (nonatomic, setter=_setForcePresentationInPresenterScene:) BOOL _forcePresentationInPresenterScene;
@property (nonatomic, getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:) BOOL containerIgnoresDirectTouchEvents;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) id<UIPopoverPresentationControllerSourceItem> sourceItem;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) BOOL isCurrentStateCancelled;
@property (readonly, nonatomic, getter=_realSourceView) UIView *realSourceView;
@property (readonly, nonatomic) long long presentationStyle;
@property (weak, nonatomic) id<UIAdaptivePresentationControllerDelegate> delegate;
@property (readonly, nonatomic) long long adaptivePresentationStyle;
@property (readonly, nonatomic) UIView *presentedView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfPresentedViewInContainerView;
@property (readonly, nonatomic) BOOL shouldPresentInFullscreen;
@property (readonly, nonatomic) BOOL shouldRemovePresentersView;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

+ (void)initialize;
+ (BOOL)_preventsAppearanceProxyCustomization;
+ (void)_scheduleTransition:(id /* block */)a0;
+ (BOOL)_shouldDeferTransitions;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_statusBarOverlapAndMarginInfoForView:(id)a0 inWindow:(id)a1;

- (void)containerViewWillLayoutSubviews;
- (id)_createVisualStyleForProvider:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChildContentContainer:(id)a0;
- (void)_cleanup;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (id)_preferredAnimationControllerForPresentation;
- (id)_presentedViewControllerForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)_initialPresentationViewControllerForViewController:(id)a0;
- (BOOL)_shouldConvertToScene;
- (BOOL)_inheritsPresentingViewControllerThemeLevel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_additionalSafeAreaInsets;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)init;
- (id)_presentationControllerForTraitCollection:(id)a0;
- (void)_transitionToPresentationController:(id)a0 withTransitionCoordinator:(id)a1;
- (BOOL)_fallbackShouldDismiss;
- (void)_closeScene;
- (BOOL)_shouldPreserveFirstResponder;
- (void)_convertToSceneFromPresentingViewController:(id)a0;
- (void)_transitionFromDidEnd;
- (BOOL)_forcesPreferredAnimationControllers;
- (id)_passthroughViews;
- (void)_transitionToDidEnd;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_baseContentInsetsWithLeftMargin:(double *)a0 rightMargin:(double *)a1;
- (void)_realSourceViewGeometryDidChange;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldOccludeDuringPresentation;
- (void)_transitionToWillBegin;
- (void)_sendFallbackDidDismiss;
- (id)_preferredAnimationControllerForDismissal;
- (void)_transitionFromWillBegin;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;
- (void)setNeedsFocusUpdate;
- (void)_sendFallbackWillDismiss;
- (BOOL)_handlesKeyboardAvoidance;
- (Class)_appearanceGuideClass;
- (id)_fullscreenPresentationSuperview;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)transitionDidFinish:(BOOL)a0;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)updateFocusIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)dismissed;
- (void).cxx_destruct;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_realSourceViewDidChangeFromView:(id)a0 toView:(id)a1;
- (long long)_defaultPresentationStyleForTraitCollection:(id)a0;
- (id)_focusMapContainer;
- (void)presentationTransitionWillBegin;
- (void)_disableMenuPressForBackGesture;
- (BOOL)_preserveResponderAcrossWindows;
- (struct { long long x0; long long x1; })__sizeClassPair;
- (void)_sendDidDismiss;
- (BOOL)_wantsAutomaticFirstResponderWhenPresentingRemoteViewController;
- (id)_activePresentationController;
- (id)_adaptiveWillTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)_adjustOrientationIfNecessaryInWindow:(id)a0 forViewController:(id)a1 preservingViewController:(id)a2;
- (id)_animatorForContainmentTransition;
- (id)_appearanceContainer;
- (void)_beginOcclusionIfNecessary:(BOOL)a0;
- (BOOL)_canPresentInSeparateScene;
- (id)_childPresentationController;
- (void)_containedViewControllerModalStateChanged;
- (void)_containerViewBoundsDidChange;
- (void)_containerViewLayoutSubviews;
- (void)_containerViewSafeAreaInsetsDidChange;
- (void)_containerViewScreenDidChangeToScreen:(id)a0;
- (void)_containerViewTraitCollectionDidChange;
- (void)_containerViewWillLayoutSubviews;
- (void)_coverWithSnapshot;
- (id)_currentContextPresentationSuperview;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_dismissWithAnimationController:(id)a0 interactionController:(id)a1 target:(id)a2 didFinish:(long long)a3;
- (void)_enableOcclusion:(BOOL)a0;
- (void *)_fallbackTraitCollection;
- (id)_firstCurrentContextChildInWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTransitionViewInPresentationSuperview:(id)a0 inWindow:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfPresentedViewControllerViewInSuperview;
- (BOOL)_gestureRecognizerShouldBegin:(id)a0;
- (void)_initViewHierarchyForPresentationSuperview:(id)a0;
- (void)_initViewHierarchyForPresentationSuperview:(id)a0 inWindow:(id)a1;
- (BOOL)_isAdapted;
- (BOOL)_isModal;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (void)_parent:(id)a0 willTransitionToTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (id)_parentPresentationController;
- (id)_parentPresentationControllerImmediate:(BOOL)a0;
- (id)_parentTraitCollection;
- (void)_performBackGesture:(id)a0;
- (id)_preferredInteractionControllerForDismissal:(id)a0;
- (id)_preferredInteractionControllerForPresentation:(id)a0;
- (void)_prepareForWindowDeallocRecursively:(BOOL)a0;
- (void)_presentWithAnimationController:(id)a0 inWindow:(id)a1 interactionController:(id)a2 target:(id)a3 didFinish:(long long)a4;
- (void)_releaseSnapshot;
- (id)_rootPresentingViewControllerForNestedPresentation;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(long long)a0 transitionCoordinator:(id)a1;
- (void)_sendDidAttemptToDismiss;
- (void)_sendPresentationControllerNotification:(id)a0 userInfo:(id)a1;
- (void)_sendWillDismiss;
- (void)_setOverrideTraitCollection:(id)a0 updatingPresentedViewControllerImmediately:(BOOL)a1;
- (void)_setRealSourceView:(id)a0;
- (BOOL)_shouldAdaptFromTraitCollection:(id)a0 toTraitCollection:(id)a1;
- (BOOL)_shouldAnimateReenablingOfAutorotation;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (BOOL)_shouldDismiss;
- (BOOL)_shouldGrabPresentersView;
- (BOOL)_shouldMakePresentedViewControllerFirstResponder;
- (BOOL)_shouldRestoreFirstResponder;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (long long)_subclassPreferredFocusedViewPrioritizationType;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0 childViewController:(id)a1;
- (BOOL)_transitioningFrom;
- (BOOL)_transitioningTo;
- (void)_transplantView:(id)a0 toSuperview:(id)a1;
- (void)_transplantView:(id)a0 toSuperview:(id)a1 atIndex:(unsigned long long)a2;
- (void)_updateRealSourceView;
- (void)_updateTraitsIfNecessary;
- (id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)a0;
- (void)_window:(id)a0 willTransitionToTraitCollection:(id)a1 withTransitionCoordinator:(id)a2;
- (long long)adaptivePresentationStyleForTraitCollection:(id)a0;
- (void)completeCurrentTransitionImmediately;
- (void)containerViewDidLayoutSubviews;
- (BOOL)dismissing;
- (BOOL)presented;
- (id)presentedContentContainer;
- (BOOL)presenting;
- (void)runTransitionForCurrentState;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)transitionDidStart;

@end