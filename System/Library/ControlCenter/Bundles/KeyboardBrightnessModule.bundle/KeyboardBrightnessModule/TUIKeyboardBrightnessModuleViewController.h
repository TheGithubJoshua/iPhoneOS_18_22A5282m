@class NSString, UIViewPropertyAnimator, TUIContinuousSliderView, KeyboardBrightnessClient;

@interface TUIKeyboardBrightnessModuleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {
    TUIContinuousSliderView *_sliderView;
    KeyboardBrightnessClient *_keyboardBrightnessClient;
}

@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)viewForTouchContinuation;
- (void).cxx_destruct;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)hardwareKeyboardAvailabilityChanged;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateControls;
- (void)suspendIdleDimming:(BOOL)a0;
- (BOOL)isHardwareKeyboardAvailable;
- (void)sliderValueDidChange:(id)a0;
- (void)updateControlsForValue:(float)a0;

@end
