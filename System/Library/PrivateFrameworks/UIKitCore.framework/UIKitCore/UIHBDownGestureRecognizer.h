@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
}

@property (nonatomic) double maximumIntervalBetweenPresses;

- (void)_processPresses:(id)a0;
- (void)setAllowedPressTypes:(id)a0;
- (void)_succeed;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (void)_fail;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)_allRequiredButtonsDown;

@end
