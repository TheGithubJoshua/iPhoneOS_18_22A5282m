@interface ChronoCore.ZStackContainerViewController : UIViewController

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_childViewControllersForAlwaysOnTimelines;
- (BOOL)_canShowWhileLocked;

@end
