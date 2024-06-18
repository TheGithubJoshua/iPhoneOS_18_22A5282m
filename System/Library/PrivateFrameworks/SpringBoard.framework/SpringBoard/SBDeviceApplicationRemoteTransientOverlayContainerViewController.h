@class SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController {
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}

- (void)viewWillLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithViewProvider:(id)a0;

@end
