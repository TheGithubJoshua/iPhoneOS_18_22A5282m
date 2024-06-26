@interface UIApplicationRotationFollowingController : UIViewController

@property (nonatomic) BOOL sizesWindowToScene;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)__autorotationSanityCheckObjectFromSource:(id)a0 selector:(SEL)a1;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:(long long)a0;
- (id)_topMostWindow;
- (void)window:(id)a0 setupWithInterfaceOrientation:(long long)a1;

@end
