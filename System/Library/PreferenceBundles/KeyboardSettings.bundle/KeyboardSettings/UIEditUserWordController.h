@class UIWindow;

@interface UIEditUserWordController : EditUserWordController {
    long long _oldPopoverStyle;
}

@property (copy, nonatomic) id /* block */ dismissCompletionHandler;
@property (retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider;

- (void)viewDidLoad;
- (void)_dismiss;
- (void)dealloc;
- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 andShortcut:(id)a1;
- (BOOL)_shouldSetDefaultFirstResponder;

@end
