@class SBHomeScreenViewController;

@interface SBHomeScreenWindow : SBWindow

@property (readonly, nonatomic) SBHomeScreenViewController *homeScreenViewController;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })constrainFrameToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)sb_autorotates;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isContentHidden;
- (id)initWithWindowScene:(id)a0 rootViewController:(id)a1 layoutStrategy:(id)a2 role:(id)a3 debugName:(id)a4;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
- (id)autorotationPreventionReasons;

@end
