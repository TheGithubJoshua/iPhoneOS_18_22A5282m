@interface SBUIPasscodeTextField : UITextField {
    BOOL _previousResponderRequiresKeyboard;
}

@property (nonatomic) BOOL showsSystemKeyboard;

- (BOOL)becomeFirstResponder;
- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)resignFirstResponder;
- (void)dealloc;
- (void)_disableAutomaticAppearance;
- (void)_enableAutomaticAppearance;

@end
