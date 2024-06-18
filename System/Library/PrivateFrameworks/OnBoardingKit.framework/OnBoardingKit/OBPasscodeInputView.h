@protocol OBPasscodeInputViewDelegate;

@interface OBPasscodeInputView : UIView

@property (weak, nonatomic) id<OBPasscodeInputViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setPasscode:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)passcode;
- (BOOL)canBecomeFirstResponder;
- (id)passcodeField;
- (void)shake;

@end
