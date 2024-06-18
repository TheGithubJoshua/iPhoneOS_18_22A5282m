@interface _UIPreviewInteractionTransitionWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (id)init;
- (BOOL)isInternalWindow;
- (BOOL)_canAffectStatusBarAppearance;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)_setFirstResponder:(id)a0;
- (id)_roleHint;

@end
