@class NSString, CADisplayLink, CCUISteppedSliderView, MTCCTimer;
@protocol MTCCTimerViewControllerDelegate;

@interface MTCCTimerViewController : CCUIButtonModuleViewController <CCUITouchContinuationProviding>

@property (copy, nonatomic) MTCCTimer *internalTimer;
@property (retain, nonatomic) CCUISteppedSliderView *sliderView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (weak, nonatomic) id<MTCCTimerViewControllerDelegate> delegate;
@property (copy, nonatomic) MTCCTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimer:(id)a0 animated:(BOOL)a1;
- (void)displayLinkTick:(id)a0;
- (id)init;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContinuousCornerRadius;
- (void)_reloadForCurrentStateAnimated:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)sliderDidBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)sliderValueChanged:(id)a0;
- (id)viewForTouchContinuation;
- (double)preferredExpandedContentWidth;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)dealloc;
- (double)sliderValueFromRemainingTime:(double)a0;

@end
