@class SBTransientOverlayWallpaperEffectView, NSString, UMUser, SBLogoutDebugBlockingViewController, SBMultiUserDefaults, SBPlatformController, SBLogoutProgressView;
@protocol SBLogoutProgressDataSource, SBLogoutProgressDelegate;

@interface SBLogoutProgressTransientOverlayViewController : SBTransientOverlayViewController <CSExternalBehaviorProviding> {
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
    SBMultiUserDefaults *_multiUserDefaults;
    SBPlatformController *_platformController;
    SBLogoutProgressView *_progressView;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
}

@property (weak, nonatomic) id<SBLogoutProgressDataSource> dataSource;
@property (weak, nonatomic) id<SBLogoutProgressDelegate> delegate;
@property (readonly, nonatomic) UMUser *user;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (id)_legibilitySettings;
- (long long)idleWarnMode;
- (void)setContainerOrientation:(long long)a0;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (void)conformsToCSBehaviorProviding;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateLegibility;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateData;
- (void).cxx_destruct;
- (void)conformsToCSExternalBehaviorProviding;
- (BOOL)_canShowWhileLocked;
- (long long)idleTimerMode;
- (void)viewWillAppear:(BOOL)a0;
- (long long)idleTimerDuration;
- (BOOL)isContentOpaque;
- (void)refreshData;
- (BOOL)_supportsDebugUI;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithUserAccount:(id)a0;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (void)prepareForRestart;

@end
