@class UIResponder;
@protocol UITextInput;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

@property (weak) UIResponder<UITextInput> *textView;
@property (readonly, nonatomic) BOOL isLongPress;

- (BOOL)shouldUseLegacyBehavior;
- (BOOL)_isGestureType:(long long)a0;
- (void)startTimer;
- (BOOL)isWithinRecentTap;
- (BOOL)isCloseToCaret;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)_allowsForShortDelay;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_tracksPointerTouch;

@end
