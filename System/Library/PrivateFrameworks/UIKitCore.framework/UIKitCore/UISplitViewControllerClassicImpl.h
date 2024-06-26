@class UISnapshotView, UIBarButtonItem, UIResponder, UITapGestureRecognizer, UIViewController, UIView, NSString, UIPopoverController, UIGestureRecognizer, UITraitCollection, UIFocusContainerGuide, NSArray, UISplitViewControllerDisplayModeBarButtonItem, UISplitViewController;

@interface UISplitViewControllerClassicImpl : NSObject <UIGestureRecognizerDelegate, UILayoutContainerViewDelegate, UISplitViewControllerImpl> {
    UISplitViewController *_svc;
    UIBarButtonItem *_barButtonItem;
    UISplitViewControllerDisplayModeBarButtonItem *_displayModeButtonItem;
    NSString *_buttonTitle;
    UIPopoverController *_hiddenPopoverController;
    UIView *_rotationSnapshotView;
    UIResponder *_postTransitionResponder;
    UISnapshotView *_collapsingMasterSnapshotView;
    UISnapshotView *_collapsingDetailSnapshotView;
    float _gutterWidth;
    long long _rotatingFromOrientation;
    long long _lastPresentedOrientation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotatingFromMasterViewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotatingToMasterViewFrame;
    UIView *_underBarSeparatorView;
    UITraitCollection *_traitCollectionWhenRemovedFromWindow;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    UITapGestureRecognizer *_menuGestureRecognizer;
    long long _preferredDisplayMode;
    long long _effectiveTargetDisplayMode;
    long long _pendingDisplayModeChangeCount;
    long long _rotatingMasterChange;
    BOOL _useChangingBoundsLayout;
    long long _transitioningMasterChange;
    UITraitCollection *_transitioningToTraitCollection;
    long long _transitioningToInternalMode;
    long long _lastNotifiedDisplayMode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewBoundsBeforeCollapse;
    long long _suspendedState;
    long long _primaryEdge;
    struct { unsigned char invalidDelegateHiddenMasterAspectRatios : 2; unsigned char delegateHiddenMasterAspectRatios : 2; unsigned char delegateImplementsShouldHide : 1; unsigned char hidden : 3; unsigned char masterOnSlide : 1; unsigned char delegateWantsWillShowCallback : 1; unsigned char delegateWantsWillHideCallback : 1; unsigned char delegateWantsWillPresentCallback : 1; unsigned char delegateSupportedInterfaceOrientations : 1; unsigned char delegatePreferredInterfaceOrientationForPresentation : 1; unsigned char delegateWantsShowViewController : 1; unsigned char delegateWantsShowDetailViewController : 1; unsigned char delegateWantsCollapseSecondaryViewController : 1; unsigned char delegateWantsSeparateSecondaryViewController : 1; unsigned char delegateWantsPrimaryViewControllerForCollapse : 1; unsigned char delegateWantsPrimaryViewControllerForExpanding : 1; unsigned char collapsedState : 2; unsigned char primaryHidingState : 2; unsigned char primaryHidingStateForCurrentOrientation : 2; unsigned char delegateWantsWillChangeToDisplayMode : 1; unsigned char delegateWantsTargetDisplayModeForAction : 1; unsigned char delegateCanModifyFirstResponderOnTraitCollectionTransition : 1; unsigned char pendingPresentMasterViewController : 1; unsigned char pendingUpdateTargetDisplayMode : 1; unsigned char collapsingClockwise : 1; unsigned char firstResponderChangedFromPostTransitionResponder : 1; unsigned char firstResponderChangedFromPostTransitionResponderToNil : 1; unsigned char inWillTransitionToSize : 1; unsigned char hasTransitioningToInternalMode : 1; unsigned char delegateImplementsPrivateIsPrimaryVisible : 1; unsigned char delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended : 1; unsigned char usesExtraWidePrimaryColumn : 1; unsigned char usesDeviceOverlayPreferences : 1; unsigned char prefersOverlayInRegularWidthPhone : 1; } _splitViewControllerFlags;
}

@property (retain, nonatomic, setter=_setPreservedDetailController:) UIViewController *_preservedDetailController;
@property (copy, nonatomic, setter=_setClearPreventRotationHook:) id /* block */ _clearPreventRotationHook;
@property (readonly, nonatomic, getter=_lastFocusedChildViewControllerIndex) unsigned long long lastFocusedChildViewControllerIndex;
@property (readonly, nonatomic, getter=_masterFocusContainerGuide) UIFocusContainerGuide *masterFocusContainerGuide;
@property (readonly, nonatomic, getter=_detailFocusContainerGuide) UIFocusContainerGuide *detailFocusContainerGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id delegate;
@property (nonatomic) BOOL presentsWithGesture;
@property (readonly, nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic) long long preferredDisplayMode;
@property (nonatomic) double preferredPrimaryColumnWidthFraction;
@property (nonatomic) double minimumPrimaryColumnWidth;
@property (nonatomic) double maximumPrimaryColumnWidth;
@property (nonatomic) long long primaryEdge;
@property (nonatomic) float gutterWidth;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (nonatomic) BOOL prefersOverlayInRegularWidthPhone;
@property (nonatomic) BOOL usesDeviceOverlayPreferences;
@property (copy, nonatomic, setter=_setDisplayModeButtonItemTitle:) NSString *_displayModeButtonItemTitle;
@property (nonatomic, getter=_usesExtraWidePrimaryColumn, setter=_setUsesExtraWidePrimaryColumn:) BOOL usesExtraWidePrimaryColumn;
@property (nonatomic) long long primaryBackgroundStyle;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL lockedForDelegateCallback;
@property (readonly, nonatomic) BOOL inCollapsingToProposedTopColumnCallback;
@property (readonly, nonatomic) BOOL inExpandingToProposedDisplayModeCallback;

+ (double)_defaultGutterWidthInView:(id)a0;

- (long long)preferredCenterStatusBarStyle;
- (double)_supplementaryDividerPosition;
- (BOOL)_layoutPrimaryOnRight;
- (void)_updateChildContentMargins;
- (double)_primaryDividerPosition;
- (BOOL)_shouldShowNSToolbarSidebarToggle;
- (double)_contentMarginForChildViewController:(id)a0;
- (void)_willShowCollapsedDetailViewController:(id)a0 inTargetController:(id)a1;
- (void)_descendantWillPresentViewController:(id)a0 modalSourceViewController:(id)a1 presentationController:(id)a2 animated:(BOOL)a3;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (BOOL)_isRotating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForChildContentContainer:(id)a0;
- (id)masterViewController;
- (struct CGSize { double x0; double x1; })_contentSizeForChildViewController:(id)a0 inPopoverController:(id)a1;
- (long long)_effectiveTargetDisplayMode;
- (void)__viewWillLayoutSubviews;
- (BOOL)_isCollapsed;
- (void)_layoutContainerViewDidMoveToWindow:(id)a0;
- (void)showViewController:(id)a0 sender:(id)a1;
- (void)_willBeginSnapshotSession;
- (BOOL)_handlesCounterRotationForPresentation;
- (struct CGSize { double x0; double x1; })_preferredContentSize;
- (long long)preferredLeadingStatusBarStyle;
- (void)_marginInfoForChild:(id)a0 leftMargin:(double *)a1 rightMargin:(double *)a2;
- (long long)_currentInterfaceIdiom;
- (BOOL)_hasPreferredInterfaceOrientationForPresentation;
- (id)detailViewController;
- (id)_primaryDimmingView;
- (long long)_primaryHidingState;
- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (id)_childContainingSender:(id)a0;
- (double)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (id)_defaultDisplayModes;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)_additionalViewControllersToCheckForUserActivity;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)_popoverController:(id)a0 didChangeFromVisible:(BOOL)a1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_overridingPreferredFocusEnvironment;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (double)primaryColumnWidth;
- (void)_layoutContainerViewWillMoveToWindow:(id)a0;
- (void)_setPrimaryHidingState:(long long)a0;
- (id)_deepestActionResponder;
- (void)_setCollapsedState:(long long)a0;
- (void)_didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_defersUpdateDelegateHiddenMasterAspectRatios;
- (struct CGSize { double x0; double x1; })_screenSizeInMainScene:(BOOL)a0;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)_didChangeToFirstResponder:(id)a0;
- (void)_displayModeBarButtonItemWasUsedForFirstTime:(id)a0;
- (void)_updateDisplayModeButtonItem;
- (id)_effectiveActivityItemsConfiguration;
- (id)_multitaskingDragExclusionRects;
- (id)_primaryContentResponder;
- (id)_nextVisibleViewControllerForResponderAfterChildViewController:(id)a0;
- (void)unloadViewForced:(BOOL)a0;
- (id)_allContainedViewControllers;
- (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
- (long long)preferredTrailingStatusBarStyle;
- (BOOL)_shouldPersistViewWhenCoding;
- (unsigned long long)_targetEdgeForPopover;
- (id)displayModeButtonItem;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_detailViewFrame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (void)_triggerDisplayModeAction:(id)a0;
- (void)_didEndSnapshotSession;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (BOOL)_isExpanding;
- (void)_getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0;
- (id)initWithSplitViewController:(id)a0;
- (void)_setUpFocusContainerGuides;
- (long long)displayMode;
- (void)toggleMasterVisible:(id)a0;
- (void)_popoverController:(id)a0 willChangeToVisible:(BOOL)a1;
- (BOOL)_isAnimating;
- (void)_cacheEffectiveTargetDisplayMode;
- (void)_initWithCoder:(id)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)_setPrimaryHidingStateForCurrentOrientation:(long long)a0;
- (void)_collapseSecondaryViewController:(id)a0 ontoPrimaryViewController:(id)a1;
- (void)loadView;
- (void)snapshotAllViews;
- (void)_setupUnderBarSeparatorView;
- (BOOL)_hasMasterViewController;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_setDelegateHidesMaster:(BOOL)a0 inAspectRatio:(long long)a1;
- (long long)_medusaState;
- (BOOL)_shouldPreventAutorotation;
- (void)_commonInit;
- (void)_viewControllerHiding:(id)a0;
- (void)snapshotForRotationFromInterfaceOrientation:(long long)a0 toInterfaceOrientation:(long long)a1 masterChange:(long long)a2;
- (void)_didTransitionTraitCollection;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_secondaryViewControllerForCollapsing;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (void)_showMasterViewAnimated:(BOOL)a0;
- (long long)_primaryHidingStateForCurrentOrientation;
- (void)_presentMasterViewController:(BOOL)a0;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (void)_setupHiddenPopoverControllerWithViewController:(id)a0;
- (void)_updateDelegateHiddenMasterAspectRatios;
- (void)_updateTargetDisplayMode;
- (BOOL)_hidesMasterViewInOrientation:(long long)a0 medusaState:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_animateTransitionToOrientation:(long long)a0 duration:(double)a1 masterChange:(long long)a2;
- (BOOL)hidesMasterViewInLandscape;
- (void)popoverWillAppear:(id)a0;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)childViewControllerForStatusBarStyle;
- (void)_removeCollapsingSnapshotViews;
- (void)traitCollectionDidChange:(id)a0;
- (long long)_internalModeForTraitCollection:(id)a0 orientation:(long long)a1 viewSize:(struct CGSize { double x0; double x1; })a2 medusaState:(long long)a3;
- (long long)_defaultTargetDisplayMode;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_hidesMasterViewInCurrentOrientation;
- (BOOL)_isHidesMasterInLandscapeInvalid;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)preferredFocusedView;
- (void)_completeTransitionFromOrientation:(long long)a0 masterChange:(long long)a1;
- (long long)_prepareToTransitionToViewSize:(struct CGSize { double x0; double x1; })a0 fromOrientation:(long long)a1 toOrientation:(long long)a2 duration:(double)a3;
- (void).cxx_destruct;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isHidesMasterInPortraitInvalid;
- (void)_updateMasterViewControllerFrame;
- (BOOL)_iPhoneShouldUseOverlayIfRegularWidth;
- (long long)_medusaStateForOrientation:(long long)a0 viewWidth:(double)a1;
- (void)_collapseMaster:(id)a0 andDetail:(id)a1 withTransitionCoordinator:(id)a2;
- (id)_deepestUnambiguousResponder;
- (BOOL)_canDisplayHostedMaster;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_masterViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_masterViewFrame;
- (void)_dismissMasterViewController:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_invalidateHidesMasterViewForAspectRatio:(long long)a0;
- (void)_collapseMasterAndDetailWithTransitionCoordinator:(id)a0;
- (void)_displayModeWillChangeTo:(long long)a0;
- (void)_changeToDisplayMode:(long long)a0 forCurrentOrientationOnly:(BOOL)a1;
- (void)dealloc;
- (void)_prepareForCompactLayout;
- (long long)_effectivePrimaryHidingState;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setDetailViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredFocusEnvironments;
- (BOOL)_effectivePresentsWithGesture;
- (void)_animateTransitionFromTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_detailViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)a0;
- (void)_displayModeDidChange;
- (void)_loadNewSubviews:(id)a0;
- (id)_primaryViewControllerForExpanding;
- (BOOL)_isMasterPopoverVisible;
- (BOOL)_isTransitioningFromCollapsedToSeparated;
- (BOOL)_isMasterViewShown;
- (id)_primaryViewControllerForCollapsing;
- (void)_setMasterOverrideTraitCollectionActive:(BOOL)a0;
- (double)_masterPresentationAnimationDuration;
- (double)_primaryColumnWidthForSize:(struct CGSize { double x0; double x1; })a0 isCompact:(BOOL)a1;
- (BOOL)_isBasicallyHorizontallyCompact;
- (BOOL)_shouldUseRelativeInsets;
- (void)snapshotMasterView;

@end
