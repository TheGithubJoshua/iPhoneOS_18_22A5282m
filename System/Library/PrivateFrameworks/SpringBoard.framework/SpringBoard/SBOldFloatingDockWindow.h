@interface SBOldFloatingDockWindow : SBMainScreenActiveInterfaceOrientationWindow

+ (BOOL)sb_autorotates;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isContentHidden;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
- (id)floatingDockRootViewController;

@end
