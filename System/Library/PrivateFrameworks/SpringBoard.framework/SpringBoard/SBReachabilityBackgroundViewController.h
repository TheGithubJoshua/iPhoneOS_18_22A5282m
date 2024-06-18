@interface SBReachabilityBackgroundViewController : UIViewController

- (id)view;
- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithWallpaperVariant:(long long)a0;

@end
