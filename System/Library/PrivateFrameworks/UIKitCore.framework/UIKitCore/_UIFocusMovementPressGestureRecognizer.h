@class _UIRepeatingGestureClock, NSMutableSet, NSString;

@interface _UIFocusMovementPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate>

@property (retain, nonatomic) _UIRepeatingGestureClock *repeatingClock;
@property (nonatomic) BOOL isRepeat;
@property (readonly, nonatomic, getter=_isRecognizing) BOOL isRecognizing;
@property (retain, nonatomic, getter=_trackedPresses, setter=_setTrackedPresses:) NSMutableSet *trackedPresses;
@property (nonatomic) unsigned long long focusHeading;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) long long repeatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)setAllowedTouchTypes:(id)a0;
- (void)setState:(long long)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_startTrackingPresses:(id)a0;
- (void)_stopTrackingPresses:(id)a0;
- (void)_updateForPresses:(id)a0 action:(unsigned long long)a1;
- (void)_verifyTrackingPresses:(id)a0;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)a0;
- (void)repeatingGestureClockDidTick:(id)a0;
- (void)setState:(long long)a0 isRepeat:(BOOL)a1;

@end
