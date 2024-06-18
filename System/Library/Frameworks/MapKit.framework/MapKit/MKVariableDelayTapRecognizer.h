@protocol MKVariableDelayTapRecognizerDelegate;

@interface MKVariableDelayTapRecognizer : UITapGestureRecognizer {
    double originalMaximumIntervalBetweenSuccessiveTaps;
}

@property (weak, nonatomic) id<MKVariableDelayTapRecognizerDelegate> tapDelayDelegate;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
