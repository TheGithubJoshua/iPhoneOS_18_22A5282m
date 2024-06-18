@interface _UISnapshotWindow : UIWindow

@property BOOL _extendsScreenSceneLifetime;

+ (BOOL)_isSystemWindow;

- (BOOL)_alwaysGetsContexts;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_isSettingFirstResponder;
- (BOOL)_canDisableMirroring;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;

@end
