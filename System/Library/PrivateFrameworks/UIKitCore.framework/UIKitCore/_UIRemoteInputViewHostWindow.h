@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow

+ (BOOL)_isSecure;

- (BOOL)_alwaysGetsContexts;
- (long long)_orientationForViewTransform;
- (id)initWithWindowScene:(id)a0;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)isInternalWindow;
- (BOOL)_isRemoteInputHostWindow;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (BOOL)_wantsSceneAssociation;
- (long long)_orientationForRootTransform;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)inhibitSetupOrientation;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_isHostedInAnotherProcess;
- (long long)_orientationForSceneTransform;

@end
