@interface SBControlCenterWindow : SBIgnoredForAutorotationSecureWindow

+ (id)_traitsArbiterOrientationActuationRole;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_canBecomeKeyWindow;
- (id)window;

@end
