@class SBLockScreenPluginManager, NSString, NSHashTable, SBLockScreenBatteryChargingViewController, SBLoginAppContainerPluginWrapperViewController, SBWindowSceneStatusBarSettingsAssertion, NSMutableSet, SBLockScreenTemperatureWarningViewController, SBWallpaperController;
@protocol SBLoginAppSceneHoster, BSInvalidatable;

@interface SBLoginAppContainerViewController : SBLockScreenViewControllerBase <SBLockScreenBatteryChargingViewControllerDelegate, SBLoginAppSceneHosterDelegate, PBUIWallpaperObserver, SBLockScreenPluginManagerDelegate> {
    id<SBLoginAppSceneHoster> _sceneHoster;
    SBLockScreenBatteryChargingViewController *_batteryChargingViewController;
    SBLockScreenTemperatureWarningViewController *_thermalWarningViewController;
    SBLoginAppContainerPluginWrapperViewController *_pluginWrapperViewController;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_showStatusBarReasons;
    id<BSInvalidatable> _deferOrientationUpdatesAssertion;
    long long _idleTimerMode;
    SBLockScreenPluginManager *_pluginManager;
    SBWallpaperController *_wallpaperController;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (BOOL)shouldDisableALS;
- (BOOL)shouldShowLockStatusBarTime;
- (void)disableLockScreenPluginWithContext:(id)a0;
- (void)loadView;
- (BOOL)handleHomeButtonDoublePress;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleVolumeUpButtonPress;
- (void)prepareForUILock;
- (BOOL)handleVolumeDownButtonPress;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateLegibility;
- (void)startLockScreenFadeInAnimationForSource:(int)a0;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesScreenshots;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void).cxx_destruct;
- (void)prepareForUIUnlock;
- (void)enableLockScreenPluginWithContext:(id)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)a0;
- (void)noteDeviceBlockedStatusUpdated;
- (BOOL)_canShowWhileLocked;
- (BOOL)willUIUnlockFromSource:(int)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (id)_displayLayoutElementIdentifier;
- (void)pluginManager:(id)a0 willUnloadPlugin:(id)a1;
- (void)_addBatteryChargingView;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)a0;
- (void)_fadeViewsForChargingViewVisible:(BOOL)a0;
- (void)_handleBacklightFadeEnded;
- (id)_hostedAppBundleID;
- (id)_hostedAppView;
- (id)_hostedSceneIdentifier;
- (id)_initWithSceneHoster:(id)a0 wallpaperController:(id)a1;
- (void)_killLoginApp;
- (void)_reallyAcquireStatusBarAssertionIfNecessaryInitiallyVisible:(BOOL)a0;
- (void)_reallyRelinquishStatusBarAssertion;
- (void)_removeBatteryChargingView;
- (void)_setupLoginAppHosting;
- (void)_setupLoginScene;
- (void)_showOrHideThermalTrapUIAnimated:(BOOL)a0;
- (id)_statusBarSettingsAssertion;
- (void)_updateBatteryChargingViewAnimated:(BOOL)a0;
- (void)addLoginObserver:(id)a0;
- (void)chargingViewControllerFadedOutContent:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 sceneHoster:(id)a2 wallpaperController:(id)a3;
- (id)loginContainerView;
- (void)pluginManager:(id)a0 activePluginDidChange:(id)a1;
- (void)pluginManager:(id)a0 didLoadPlugin:(id)a1;
- (void)pluginManager:(id)a0 displayedPluginDidChangeFromPlugin:(id)a1 toPlugin:(id)a2;
- (void)pluginManager:(id)a0 displayedPluginDidUpdateAppearance:(id)a1;
- (BOOL)pluginManager:(id)a0 plugin:(id)a1 handleAction:(id)a2;
- (void)removeLoginObserver:(id)a0;
- (BOOL)requiresPasscodeInputForUIUnlockFromSource:(int)a0 withOptions:(id)a1;
- (void)sceneInvalidated;
- (void)sceneUpdatedIdleTimerMode:(long long)a0;
- (void)sceneUpdatedRotationMode:(long long)a0;
- (void)sceneUpdatedStatusBarUserName:(id)a0;
- (void)sceneUpdatedWallpaperMode:(unsigned long long)a0;

@end