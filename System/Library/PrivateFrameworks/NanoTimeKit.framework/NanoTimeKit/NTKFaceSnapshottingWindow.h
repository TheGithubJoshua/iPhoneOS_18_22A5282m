@interface NTKFaceSnapshottingWindow : UIWindow

+ (BOOL)_isSecure;

- (id)init;
- (BOOL)_alwaysGetsContexts;
- (long long)_orientationForViewTransform;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_wantsSceneAssociation;
- (long long)_orientationForRootTransform;
- (BOOL)_shouldUseRemoteContext;
- (void)updateForDevice:(id)a0;

@end
