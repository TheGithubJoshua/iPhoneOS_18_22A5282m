@class NSArray, NSDictionary, NSValue, UIDelayedAction;

@interface _UISimplePressGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UIDelayedAction *delayedAction;
@property (retain, nonatomic) NSDictionary *triggersByPressType;
@property (retain, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) NSValue *activeTrigger;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_begin;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)dealloc;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)_endOrFail;

@end
