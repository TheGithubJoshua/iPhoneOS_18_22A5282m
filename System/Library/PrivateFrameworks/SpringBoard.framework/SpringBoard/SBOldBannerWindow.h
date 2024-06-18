@interface SBOldBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)layoutContentViewControllerWithConstraints;

- (BOOL)becomeFirstResponder;
- (id)initWithWindowScene:(id)a0;
- (BOOL)canResignFirstResponder;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)resignFirstResponder;
- (void)setHidden:(BOOL)a0;

@end
