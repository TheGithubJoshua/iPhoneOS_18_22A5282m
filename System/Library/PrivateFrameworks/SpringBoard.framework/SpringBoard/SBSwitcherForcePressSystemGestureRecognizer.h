@class SBAppSwitcherSettings, NSString, UIPreviewForceInteractionProgress, SBTouchHistory;

@interface SBSwitcherForcePressSystemGestureRecognizer : SBScreenEdgePanGestureRecognizer <PTSettingsKeyObserver, UIInteractionProgressObserver, SBGestureRecognizerTouchHistoryProviding> {
    UIPreviewForceInteractionProgress *_forceObserver;
    SBAppSwitcherSettings *_settings;
}

@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (readonly, nonatomic) double forcePercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setState:(long long)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)conformsToSBGestureRecognizerTouchHistoryProviding;
- (void)interactionProgressDidUpdate:(id)a0;
- (struct CGPoint { double x0; double x1; })averageTouchVelocityOverTimeDuration:(double)a0;
- (double)averageTouchPathAngleOverTimeDuration:(double)a0;
- (double)peakSpeed;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dealloc;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
