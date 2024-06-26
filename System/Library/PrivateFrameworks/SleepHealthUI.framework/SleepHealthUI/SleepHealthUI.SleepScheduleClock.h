@interface SleepHealthUI.SleepScheduleClock : UIControl <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ gestureRecognizer;
    void /* unknown type, empty encoding */ track;
    void /* unknown type, empty encoding */ ring;
    void /* unknown type, empty encoding */ grabber;
    void /* unknown type, empty encoding */ dial;
    void /* unknown type, empty encoding */ bedtimeHand;
    void /* unknown type, empty encoding */ wakeUpHand;
    void /* unknown type, empty encoding */ majorFeedbackGenerator;
    void /* unknown type, empty encoding */ minorFeedbackGenerator;
    void /* unknown type, empty encoding */ dragState;
}

- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)accessibilitySetBedtimeAngle:(double)a0 minimumTimeInBed:(double)a1 maximumTimeInBed:(double)a2;
- (double)accessibilityMinimumTimeInBed;
- (id)accessibilityRoundedBedtimeComponents;
- (void)accessibilitySetModel:(id)a0 wakeUpComponents:(id)a1 timeInBedGoal:(double)a2 alarmEnabled:(BOOL)a3;
- (double)accessibilityMaximumTimeInBed;
- (id)accessibilityRoundedWakeUpComponents;
- (void)accessibilitySetModel:(id)a0 wakeUpComponents:(id)a1 timeInBedGoal:(double)a2 alarmEnabled:(BOOL)a3 isForSingleDayOverride:(BOOL)a4;
- (void)accessibilitySetWakeupAngle:(double)a0 minimumTimeInBed:(double)a1 maximumTimeInBed:(double)a2;
- (void)gestureRecognizerDidEnd:(id)a0;
- (void)gestureRecognizerDidMove:(id)a0;
- (void)gestureRecognizerDidStart:(id)a0;
- (void)gestureReconizerDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)a0;
- (BOOL)accessibilityAlarmEnabled;
- (BOOL)accessibilityIsForSingleDayOverride;
- (id)accessibilityBedtimeHand;
- (double)accessibilityTimeInBed;
- (double)accessibilityTimeInBedGoal;
- (id)accessibilityWakeUpHand;

@end
