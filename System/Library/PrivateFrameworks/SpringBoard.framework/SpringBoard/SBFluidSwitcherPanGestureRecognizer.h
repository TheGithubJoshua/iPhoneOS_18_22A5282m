@class NSString, SBAppLayout, SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidSwitcherPanGestureRecognizer : SBPanSystemGestureRecognizer <SBGestureRecognizerPanGestureProviding, SBGestureRecognizerTouchHistoryProviding>

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (nonatomic) BOOL installedAsSystemGesture;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } initialTouchLocation;
@property (retain, nonatomic) SBAppLayout *initialTouchLeafAppLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (double)peakSpeed;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
