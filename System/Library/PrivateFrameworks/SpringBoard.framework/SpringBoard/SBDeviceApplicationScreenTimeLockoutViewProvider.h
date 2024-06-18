@class STBlockingViewController;

@interface SBDeviceApplicationScreenTimeLockoutViewProvider : SBDeviceApplicationSceneOverlayViewProvider {
    STBlockingViewController *_blockingViewController;
    BOOL _isActive;
}

- (void)hideContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_activateIfPossible;
- (void)_handleInstalledAppsChanged:(id)a0;
- (void)showContentWithAnimation:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_realOverlayViewController;
- (id)initWithSceneHandle:(id)a0 delegate:(id)a1;
- (void)_deactivateIfPossible;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_newBlockingViewControllerWithBundleIdentifier:(id)a0;
- (long long)priority;

@end
