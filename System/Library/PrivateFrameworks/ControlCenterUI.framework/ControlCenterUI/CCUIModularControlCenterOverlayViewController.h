@class NSHashTable, CCUIHeaderPocketView, CCUIModuleCollectionViewController, CCUIAnimationRunner, NSString, CCUIModuleCollectionView, UIStatusBar, CCUIStatusBarStyleSnapshot, CCUIFlickGestureRecognizer, UIStatusBar_Modern, UIView, CCUIModuleInstanceManager, CCUIOverlayTransitionState, UIPanGestureRecognizer, CCUIStatusLabelViewController, MTMaterialView, NSUUID, UIScrollView, CCUISensorActivityDataProvider, FBSDisplayLayoutMonitor, UITapGestureRecognizer, CCUIScrollView;
@protocol CCUIModularControlCenterOverlayViewControllerDelegate, CCUIHostStatusBarStyleProvider, CCUIOverlayPresentationProvider;

@interface CCUIModularControlCenterOverlayViewController : UIViewController <CCUIPPTSignpostListener, UIGestureRecognizerDelegate, CCUIScrollViewDelegate, CCUIStatusLabelViewControllerDelegate, CCUIOverlayViewProvider, CCUIOverlayMetricsProvider, CCUIStatusBarDelegate, CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver, CCUIHeaderPocketViewSensorAttributionDelegate> {
    id<CCUIOverlayPresentationProvider> _presentationProvider;
    CCUIAnimationRunner *_primaryAnimationRunner;
    CCUIAnimationRunner *_secondaryAnimationRunner;
    MTMaterialView *_backgroundView;
    CCUIHeaderPocketView *_headerPocketView;
    CCUIScrollView *_scrollView;
    UIView *_containerView;
    UIStatusBar_Modern *_compactLeadingStatusBar;
    BOOL _presentationPanGestureActive;
    UIPanGestureRecognizer *_headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer *_headerPocketViewDismissalTapGesture;
    CCUIFlickGestureRecognizer *_collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer *_collectionViewDismissalPanGesture;
    UITapGestureRecognizer *_collectionViewDismissalTapGesture;
    UIPanGestureRecognizer *_collectionViewScrollPanGesture;
    NSHashTable *_blockingGestureRecognizers;
    CCUIOverlayTransitionState *_previousTransitionState;
    CCUIStatusBarStyleSnapshot *_hostStatusBarStyleSnapshot;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    CCUIModuleInstanceManager *_moduleManager;
    BOOL _showHotPocket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic) unsigned long long transitionState;
@property (readonly, nonatomic) CCUIModuleInstanceManager *moduleInstanceManager;
@property (readonly, nonatomic) CCUIStatusLabelViewController *statusLabelViewController;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) CCUIModuleCollectionViewController *moduleCollectionViewController;
@property (copy, nonatomic) NSUUID *currentTransitionUUID;
@property (weak, nonatomic) id<CCUIModularControlCenterOverlayViewControllerDelegate> delegate;
@property (weak, nonatomic) id<CCUIHostStatusBarStyleProvider> hostStatusBarStyleProvider;
@property (retain, nonatomic) CCUISensorActivityDataProvider *sensorActivityDataProvider;
@property (nonatomic, getter=isReachabilityActive) BOOL reachabilityActive;
@property (readonly, nonatomic, getter=isHomeGestureDismissalAllowed) BOOL homeGestureDismissalAllowed;
@property (readonly, nonatomic) unsigned long long moduleRowCount;
@property (nonatomic, getter=isHostedInTestApp) BOOL hostedInTestApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MTMaterialView *overlayBackgroundView;
@property (readonly, nonatomic) UIScrollView *overlayScrollView;
@property (readonly, nonatomic) UIView *overlayContainerView;
@property (readonly, nonatomic) CCUIModuleCollectionView *overlayModuleCollectionView;
@property (readonly, nonatomic) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property (readonly, nonatomic) CCUIHeaderPocketView *overlayHeaderView;
@property (readonly, nonatomic) UIStatusBar *overlayLeadingStatusBar;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overlayBackgroundFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } overlayContainerFrame;
@property (readonly, nonatomic) long long overlayInterfaceOrientation;
@property (readonly, copy, nonatomic) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property (readonly, nonatomic) double overlayReachabilityHeight;

+ (void)_addBlockForSignpost:(unsigned long long)a0 block:(id /* block */)a1;
+ (void)_executeBlocksForSignpost:(unsigned long long)a0;
+ (id)_controlCenterDismissOrbActionsEventStream;
+ (id)_controlCenterDismissEventStream;
+ (id)_blocksBySignpost;
+ (id)_sharedCollectionViewController;
+ (id)_controlCenterBringupEventStream;
+ (void)_executeAndCleanupBlocksForAllSignposts;
+ (id)_presentationProviderForDevice;
+ (void)_playEventStream:(id)a0 withCompletion:(id /* block */)a1;

- (BOOL)canDismissPresentedContent;
- (BOOL)_dismissalFlickGestureRecognizerShouldBegin:(id)a0;
- (id)compactTrailingStyleRequestForStatusBar:(id)a0;
- (void)dismissPresentedContentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)_updateHotPocket:(BOOL)a0 animated:(BOOL)a1;
- (void)didCloseExpandedSensorAttributionViewController;
- (void)_handleDismissalFlickGestureRecognizer:(id)a0;
- (void)_replaceBackgroundViewContentsWithSnapshotIfNecessary:(BOOL)a0;
- (void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)a0;
- (void)moduleCollectionViewController:(id)a0 didOpenExpandedModule:(id)a1;
- (void)moduleCollectionViewController:(id)a0 willDismissViewController:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })compactAvoidanceFrameForStatusBar:(id)a0;
- (id)_safeModuleCollectionViewContainerView;
- (void)didReceiveSignpost:(unsigned long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)_interfaceOrientation;
- (void)viewWillLayoutSubviews;
- (unsigned long long)__supportedInterfaceOrientations;
- (void)moduleCollectionViewController:(id)a0 willPresentViewController:(id)a1;
- (void)_dismissalPanGestureRecognizerEnded:(id)a0;
- (void)_updatePresentationForTransitionState:(id)a0 withCompletionHander:(id /* block */)a1;
- (void)_endDismissalWithUUID:(id)a0 animated:(BOOL)a1;
- (BOOL)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)moduleCollectionViewController:(id)a0 willRemoveModuleContainerViewController:(id)a1;
- (void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)a0;
- (void)_dismissalPanGestureRecognizerBegan:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_scrollPanGestureRecognizerShouldBegin:(id)a0;
- (void)displayWillTurnOff;
- (void)_dismissalPanGestureRecognizerChanged:(id)a0;
- (BOOL)_dismissalPanGestureRecognizerShouldBegin:(id)a0;
- (void)_endPresentationWithUUID:(id)a0;
- (void)dismissControlCenterForContentModuleContext:(id)a0;
- (void)moduleCollectionViewController:(id)a0 didAddModuleContainerViewController:(id)a1;
- (void)dismissExpandedViewForContentModuleContext:(id)a0;
- (void)contentModuleContext:(id)a0 didUpdateHomeGestureDismissalAllowed:(BOOL)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)cancelPresentationWithLocation:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (void)presentAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)expandModuleWithIdentifier:(id)a0;
- (BOOL)isSensorAttributionViewControllerExpanded;
- (void)moduleCollectionViewController:(id)a0 didUpdateHomeGestureDismissalAllowed:(BOOL)a1;
- (BOOL)_dismissalFlickGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)a0;
- (id)contentModuleContext:(id)a0 requestsSensorActivityDataForActiveSensorType:(unsigned long long)a1;
- (void)moduleCollectionViewControllerDidUpdateModules:(id)a0;
- (void)beginPresentationWithLocation:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (unsigned long long)moduleRowCount;
- (id)_statusLabelViewContainerView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)endPresentationWithLocation:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (id)_safeStatusLabelViewContainerView;
- (struct CCUIModuleLayoutSize { unsigned long long x0; unsigned long long x1; })moduleLayoutSizeForContentModuleContext:(id)a0 forOrientation:(long long)a1;
- (void)_willPresentModuleContainedInCollectionView;
- (void)_updateChevronStateForTransitionState:(id)a0;
- (id)initWithSystemAgent:(id)a0;
- (id)_initWithSystemAgent:(id)a0 presentationProvider:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)a0;
- (void)contentModuleContext:(id)a0 enqueueStatusUpdate:(id)a1;
- (void).cxx_destruct;
- (void)setOverlayStatusBarHidden:(BOOL)a0;
- (void)_reparentCollectionViewController;
- (void)moduleCollectionViewController:(id)a0 didFinishInteractionWithModule:(id)a1;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)moduleCollectionViewController:(id)a0 didBeginInteractionWithModule:(id)a1;
- (BOOL)_scrollViewIsScrollable;
- (void)_updatePresentationForTransitionType:(unsigned long long)a0 translation:(struct CGPoint { double x0; double x1; })a1 interactive:(BOOL)a2;
- (void)updatePresentationWithLocation:(struct CGPoint { double x0; double x1; })a0 translation:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (void)dismissExpandedModuleAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_moduleCollectionViewContainerView;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)requestExpandModuleForContentModuleContext:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerPointOfModuleWithIdentifier:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)_scrollViewCanAcceptDownwardsPan;
- (id)_beginDismissalAnimated:(BOOL)a0 interactive:(BOOL)a1;
- (void)_setupPanGestureFailureRequirements;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)a0;
- (BOOL)_dismissalFlickGestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)moduleCollectionViewController;
- (void)_dismissalPanGestureRecognizerFailed:(id)a0;
- (void)moduleCollectionViewController:(id)a0 willCloseExpandedModule:(id)a1;
- (void)_resignActive;
- (void)_reparentAndBecomeActive;
- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void)willOpenExpandedSensorAttributionViewController;
- (id)_beginPresentationAnimated:(BOOL)a0 interactive:(BOOL)a1;
- (void)moduleCollectionViewController:(id)a0 willOpenExpandedModule:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)scrollView:(id)a0 gestureRecognizerShouldBegin:(id)a1;
- (void)_handleDismissalTapGestureRecognizer:(id)a0;
- (BOOL)runTest:(id)a0 options:(id)a1 delegate:(id)a2;
- (id)_controlCenterShowOrbActionsEventStream:(id)a0;
- (void)_disableModule:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })overlayAdditionalEdgeInsets;
- (void)dismissPresentedContent;
- (void)_handleDismissalPanGestureRecognizer:(id)a0;
- (void)moduleCollectionViewController:(id)a0 didCloseExpandedModule:(id)a1;
- (void)_updateSensorActivityStatusForHeaderPocketView;
- (BOOL)_forceModuleEnabled:(id)a0;
- (void)_cancelDismissalPanGestures;
- (unsigned long long)_fetchModuleEnabledState:(id)a0;
- (long long)interfaceOrientationForModuleCollectionViewController:(id)a0;
- (BOOL)_gestureRecognizerIsActive:(id)a0;
- (void)reachabilityAnimationDidEnd;
- (void)_willDismissModuleContainedInCollectionView;
- (BOOL)_dismissalTapGestureRecognizerShouldBegin:(id)a0;
- (void)runTest:(id)a0 subtests:(id)a1 eventStream:(id)a2 completionHandler:(id /* block */)a3;
- (void)_updateHotPocketAnimated:(BOOL)a0;
- (void)_reparent;
- (void)dismissAnimated:(BOOL)a0 withCompletionHandler:(id /* block */)a1;

@end
