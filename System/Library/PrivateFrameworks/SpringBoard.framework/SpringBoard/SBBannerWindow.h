@interface SBBannerWindow : SBFSecureWindow

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)becomeFirstResponder;
- (id)initWithWindowScene:(id)a0;
- (BOOL)canResignFirstResponder;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)resignFirstResponder;
- (void)setHidden:(BOOL)a0;

@end
