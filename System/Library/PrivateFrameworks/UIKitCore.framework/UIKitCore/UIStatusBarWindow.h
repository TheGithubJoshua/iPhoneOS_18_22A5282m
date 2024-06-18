@class UIStatusBar;

@interface UIStatusBarWindow : UIWindow {
    UIStatusBar *_statusBar;
    long long _orientation;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultStatusBarSceneReferenceBounds;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarWindowFrame;
+ (BOOL)_isSystemWindow;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)a0;

- (void)setStatusBar:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)orientation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_defaultStatusBarSceneBoundsForOrientation:(long long)a0;
- (BOOL)_isStatusBarWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })statusBarWindowFrame;
- (void).cxx_destruct;
- (BOOL)_shouldForceTraitPropagationThroughHierarchy;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusBarFrameForOrientation:(long long)a0;
- (BOOL)_canActAsKeyWindowForScreen:(id)a0;
- (void)setOrientation:(long long)a0 animationParameters:(id)a1;
- (void)_didMoveFromScene:(id)a0 toScene:(id)a1;
- (BOOL)_shouldAdjustSizeClassesAndResizeWindow;
- (void)_rotate;

@end
