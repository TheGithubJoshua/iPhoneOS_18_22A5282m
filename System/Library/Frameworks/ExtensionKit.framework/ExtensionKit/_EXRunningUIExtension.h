@protocol _EXExtensionSceneFactory;

@interface _EXRunningUIExtension : _EXRunningExtension

@property (retain, nonatomic) id<_EXExtensionSceneFactory> sceneFactory;

+ (id)sharedInstance;

- (void)installRunloopObserverToPingLaunchdAfterEvent;
- (void)checkIn;
- (BOOL)requiresExtensionContextForViewServiceSessionManager:(id)a0;
- (BOOL)isExtensionViewServiceSessionManager:(id)a0;
- (id)viewControllerClassNameForViewServiceSessionManager:(id)a0;
- (void).cxx_destruct;
- (id)containingViewControllerClassNameForViewServiceSessionManager:(id)a0;
- (void)viewServiceSessionManager:(id)a0 didCreateViewController:(id)a1 contextToken:(id)a2;
- (id)mainStoryboardNameForViewServiceSessionManager:(id)a0;

@end
