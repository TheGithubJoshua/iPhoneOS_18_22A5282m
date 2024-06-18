@interface ASOOverlayWindow : UIApplicationRotationFollowingWindow

+ (BOOL)_isSystemWindow;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithWindowScene:(id)a0;
- (BOOL)isInternalWindow;
- (BOOL)_canAffectStatusBarAppearance;

@end
