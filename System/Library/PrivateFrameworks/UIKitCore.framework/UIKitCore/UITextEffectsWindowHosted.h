@interface UITextEffectsWindowHosted : UITextEffectsWindow

- (long long)_orientationForViewTransform;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)_isWindowServerHostingManaged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBoundsForLandscape:(BOOL)a0;
- (BOOL)_isFullscreen;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (void)_sceneBoundsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBounds;
- (long long)_orientationForRootTransform;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForSceneTransform;
- (void)adjustTextEffectsWindowSizeIfNecessary;

@end
