@class UIViewController;

@interface _SBMainScreenActiveInterfaceOrientationWindowRootViewController : SBFTouchPassThroughViewController

@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic) UIViewController *contentViewController;

- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(BOOL)a0;

@end
