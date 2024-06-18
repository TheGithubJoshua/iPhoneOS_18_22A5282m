@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (BOOL)_isSecure;
+ (BOOL)_isHostedInAnotherProcess;

- (double)keyboardWidthForCurrentDevice;
- (long long)_orientationForViewTransform;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (long long)_orientationForRootTransform;
- (BOOL)_isTextEffectsWindowHosting;
- (struct CGSize { double x0; double x1; })keyboardScreenReferenceSize;
- (long long)_orientationForSceneTransform;

@end
