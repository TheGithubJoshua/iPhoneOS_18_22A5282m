@class NSString, SBFluidDismissalState, SBFTouchPassThroughView, SBHomeGrabberView, UIScreen, SBFHomeGrabberSettings, SBKeyboardHomeAffordanceAssertion, SiriPresentationSpringBoardMainScreenViewController;

@interface SBAssistantRootViewController : SBFTouchPassThroughViewController <SBFluidGestureDismissable> {
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBHomeGrabberView *_homeAffordanceView;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    BOOL _keyboardPresented;
    BOOL _keyboardStashed;
}

@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBFTouchPassThroughView *clippingView;
@property (readonly, nonatomic) SBFTouchPassThroughView *contentView;
@property (retain, nonatomic) SiriPresentationSpringBoardMainScreenViewController *assistantController;
@property (nonatomic) BOOL ownsHomeGesture;
@property (nonatomic) BOOL showsHomeAffordance;

- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (id)initWithScreen:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (BOOL)wantsFullScreenLayout;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)_keyboardWillShowNotification:(id)a0;
- (void)_keyboardWillHideNotification:(id)a0;
- (void)_updateHomeAffordance;
- (void)_setStatusBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateKeyboardForHomeGesture;
- (void)setHomeGrabberPointerClickDelegate:(id)a0;

@end
