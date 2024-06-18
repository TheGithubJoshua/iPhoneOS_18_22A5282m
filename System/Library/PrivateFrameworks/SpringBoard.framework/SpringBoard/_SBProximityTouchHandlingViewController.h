@class SBProximitySettings;

@interface _SBProximityTouchHandlingViewController : UIViewController {
    double _statusBarHeight;
    SBProximitySettings *_proximitySettings;
}

- (void)loadView;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_view;

@end
