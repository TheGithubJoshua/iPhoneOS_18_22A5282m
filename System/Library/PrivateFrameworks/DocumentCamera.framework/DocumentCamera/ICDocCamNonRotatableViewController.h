@interface ICDocCamNonRotatableViewController : UIViewController

- (BOOL)prefersStatusBarHidden;
- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (BOOL)_allowsAutorotation;

@end
