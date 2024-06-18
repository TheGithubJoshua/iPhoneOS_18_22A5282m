@interface _UIWindowSystemOverlayWindow : UIWindow

+ (BOOL)_isSystemWindow;
+ (BOOL)_isSecure;
+ (BOOL)_needsPassthroughInteraction;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_extendsScreenSceneLifetime;
- (BOOL)isInternalWindow;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;

@end
