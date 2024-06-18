@interface UIKeyboardImplAccessibility : __UIKeyboardImplAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)callShouldInsertText:(id)a0;
- (void)setShift:(BOOL)a0 autoshift:(BOOL)a1;
- (void)setInHardwareKeyboardMode:(BOOL)a0;
- (void)setInputMode:(id)a0 userInitiated:(BOOL)a1;
- (void)showKeyboardIfNeeded;
- (void)completeHandleKeyEvent:(id)a0;
- (void)handleKeyboardInput:(id)a0 executionContext:(id)a1;
- (BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)a0 characterCountForRapidDelete:(int)a1;
- (void)hideKeyboard;
- (void)setInputModeToNextInPreferredListWithExecutionContext:(id)a0;
- (void)completeDeleteFromInput;
- (BOOL)autocorrectSpellingEnabled;
- (void)updateAutocorrectPrompt:(id)a0;
- (void)deleteBackwardAndNotify:(BOOL)a0;
- (void)updateTextCandidateView;
- (void)unmarkText:(id)a0;
- (BOOL)autocorrectionPreference;
- (void)acceptCandidate:(id)a0;
- (void)dismissKeyboard;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)performKeyboardOutput:(id)a0 checkingDelegate:(BOOL)a1 forwardToRemoteInputSource:(BOOL)a2;
- (unsigned int)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputString:(id)a2 lastInputString:(id)a3 searchString:(id)a4 compareAttributes:(BOOL)a5;
- (BOOL)acceptWord:(id)a0 firstDelete:(unsigned long long)a1 forInput:(id)a2;
- (BOOL)_shouldMinimizeForHardwareKeyboard;
- (void)dealloc;
- (void)textDidChange:(id)a0;
- (void)showKeyboard;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityAnnounceHardwareKeyboardVisibilityChange:(BOOL)a0;
- (void)_axHandleVoiceOverStatusChanged:(id)a0;
- (BOOL)_axIsHandwritingEnabled;
- (BOOL)_axIsLastKeyBackspace;
- (BOOL)_axIsObservingVoiceOverNotifications;
- (void)_axRegisterForVoiceOverNotifications:(id)a0;
- (void)_axSetIsHandwritingEnabled:(BOOL)a0;
- (void)_axSetIsLastKeyBackspace:(BOOL)a0;
- (void)_axSetIsObservingVoiceOverNotifications:(BOOL)a0;
- (void)_axUnregisterForVoiceOverNotifications:(id)a0;
- (void)setInputModeToNextInPreferredList;
- (void)updateLayoutForInterfaceOrientation:(long long)a0;

@end
