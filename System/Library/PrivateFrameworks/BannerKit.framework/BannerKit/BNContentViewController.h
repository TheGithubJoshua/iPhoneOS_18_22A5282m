@class NSString, NSArray, BNTieredArray, NSMutableSet, UIPanGestureRecognizer, BNTransitionContext;
@protocol BNPresentingDelegate, BNLayoutManaging, BNConsidering, BNPresentable, BNPanGestureProxyPrivate, UIViewControllerAnimatedTransitioning, BNPosting;

@interface BNContentViewController : UIViewController <UIGestureRecognizerDelegate, BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate> {
    BNTieredArray *_presentables;
    NSMutableSet *_presentingPresentables;
    NSMutableSet *_dismissingPresentables;
    NSMutableSet *_transitioningDelegates;
    UIPanGestureRecognizer *_panGesture;
    id<BNPresentable> _presentableForActiveGesture;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _presentedFrameForPresentableForActiveGesture;
    id<BNPanGestureProxyPrivate> _panGestureProxyForActivePresentable;
    BNTransitionContext *_activeBannerTransitionContext;
    id<UIViewControllerAnimatedTransitioning> _activeBannerTransitionAnimator;
}

@property (readonly, nonatomic) id<BNLayoutManaging> layoutManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BNPresentingDelegate> delegate;
@property (readonly, nonatomic) id<BNConsidering> authority;
@property (weak, nonatomic) id<BNPosting> poster;
@property (readonly, copy, nonatomic) NSArray *topPresentables;
@property (readonly, copy, nonatomic) NSArray *presentedPresentables;
@property (readonly, copy, nonatomic) NSArray *allPresentables;

+ (void)initialize;
+ (id)_retargetableBannerTransitionAnimatorForAnimator:(id)a0;

- (id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)a0 forTransitionToStyle:(long long)a1;
- (BOOL)_isPresentableNotice:(id)a0;
- (BOOL)shouldOverlapPresentable:(id)a0 withPresentable:(id)a1;
- (id)_presentablesWithIdentification:(id)a0 requiringUniqueMatch:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedFrameForViewController:(id)a0 withContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 afterContentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)shouldFenceAnimationsForPresentable:(id)a0;
- (struct CGPoint { double x0; double x1; })gestureRecognizerProxy:(id)a0 translationInCoordinateSpace:(id)a1;
- (BOOL)_resetActiveBannerTransitionAnimator:(id)a0;
- (void)_handlePan:(id)a0;
- (void)loadView;
- (BOOL)_isDraggingInteractionEnabledForPresentable:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_resetPresentableForActiveGesture:(id)a0;
- (void)preferredMinimumTopInsetDidInvalidate;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_outsetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forViewController:(id)a1;
- (struct CGPoint { double x0; double x1; })_locationOfScrollEvent:(id)a0 inContainerViewForGesture:(id)a1;
- (id)dismissPresentablesWithIdentification:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (void)_gestureRecognizerFailed:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedFrameForPresentable:(id)a0 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_translationInContainerViewForGesture:(id)a0;
- (void)viewDidLoad;
- (id)initWithAuthority:(id)a0;
- (void)_insertPresentable:(id)a0 beneathPresentable:(id)a1 withTransitioningDelegate:(id)a2 incrementingTier:(BOOL)a3;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_velocityInContainerViewForGesture:(id)a0;
- (id)dismissPresentablesWithIdentification:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_layoutManager;
- (BOOL)shouldAutorotate;
- (struct CGPoint { double x0; double x1; })gestureRecognizerProxy:(id)a0 visualTranslationInCoordinateSpace:(id)a1;
- (id)_dismissPresentablesWithIdentification:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_dismissPresentable:(id)a0 withReason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dismissedFrameWithPaddingForViewController:(id)a0 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)sizeTransitionAnimationSettingsForPresentable:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })gestureRecognizerProxy:(id)a0 velocityInCoordinateSpace:(id)a1;
- (BOOL)_isLocalDraggingEnabledForPresentable:(id)a0;
- (id)_newBannerTransitionContextForPresenting:(BOOL)a0 viewController:(id)a1 animated:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })_locationOfTouch:(id)a0 inContainerViewForGesture:(id)a1;
- (BOOL)resignFirstResponder;
- (void)_updateFrameForChildContentContainer:(id)a0 requiresAnimation:(BOOL)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedFrame:(BOOL)a0 forViewController:(id)a1 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 overshoot:(BOOL)a3 targetTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedFrameForViewController:(id)a0 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_canShowWhileLocked;
- (void)_addPresentable:(id)a0 withTransitioningDelegate:(id)a1 incrementingTier:(BOOL)a2;
- (void)_postLayoutChangeForVisibleNotifications;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_presentableForScrollEvent:(id)a0;
- (BOOL)_isTouchOutsideDismissalEnabledForPresentable:(id)a0;
- (BOOL)_resetActiveBannerTransitionContextIfComplete:(id)a0;
- (void)_insertPresentable:(id)a0 beneathPresentable:(id)a1 withTransitioningDelegate:(id)a2;
- (void)presentPresentable:(id)a0 withOptions:(unsigned long long)a1 userInfo:(id)a2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (struct CGPoint { double x0; double x1; })gestureRecognizerProxy:(id)a0 locationForTouch:(id)a1 inCoordinateSpace:(id)a2;
- (id)_topPresentable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dismissedFrameForViewController:(id)a0 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_presentableForTouch:(id)a0;
- (long long)_effectTierForPresentable:(id)a0;
- (BOOL)_isDraggingDismissalEnabledForPresentable:(id)a0;
- (id)_presentableForGestureInView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedFrameForViewController:(id)a0 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 targetTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forViewController:(id)a1;
- (BOOL)_isDraggingEnabledForPresentable:(id)a0;
- (void)_removePresentable:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dismissedFrameWithPaddingForViewController:(id)a0 withContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end