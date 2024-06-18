@class UIDelayedAction;

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) UIDelayedAction *delayedAction;

- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_timerSatisfied;

@end
