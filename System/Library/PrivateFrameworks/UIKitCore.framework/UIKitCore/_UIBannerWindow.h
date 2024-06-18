@interface _UIBannerWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (id)_roleHint;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;

@end
