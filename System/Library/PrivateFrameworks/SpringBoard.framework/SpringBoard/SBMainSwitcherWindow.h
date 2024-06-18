@interface SBMainSwitcherWindow : SBFWindow

+ (BOOL)sb_autorotates;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_usesWindowServerHitTesting;

@end
