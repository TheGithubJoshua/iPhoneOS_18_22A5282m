@class TIKeyboardTouchEvent;

@interface ACTTouchEvent : ACTUserAction

@property (readonly, nonatomic) TIKeyboardTouchEvent *touchEvent;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTouchEvent:(id)a0;
- (void)applyWithTyper:(id)a0 log:(id)a1;

@end
