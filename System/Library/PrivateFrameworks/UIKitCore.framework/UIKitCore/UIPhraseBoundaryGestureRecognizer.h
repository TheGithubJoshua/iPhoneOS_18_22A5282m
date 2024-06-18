@class UIResponder, UIDelayedAction;
@protocol UITextInput;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {
    UIDelayedAction *_secondDelayTimer;
}

@property (weak, nonatomic) UIResponder<UITextInput> *textInput;
@property (nonatomic) double secondDelay;
@property (readonly, nonatomic) BOOL secondDelayElapsed;
@property (weak, nonatomic) id userData;

- (void)clearTimer;
- (void)setState:(long long)a0;
- (void)startTimer;
- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)secondDelayElapsed:(id)a0;

@end
