@class CRCarPlayPreferences, NSString, PSSpecifier, NSTimer, PSGTVOutManager, NSArray, NSUserDefaults;

@interface PSGGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSGHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers> {
    NSTimer *_usageTimer;
    PSGTVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_airDropSpecifier;
    NSArray *_vpnBundleControllers;
    NSArray *_vpnSpecifiers;
    NSArray *_profileBundleControllers;
    NSArray *_profileSpecifiers;
    NSArray *_fontBundleControllers;
    NSArray *_fontSpecifiers;
    NSUserDefaults *_gameControllerPrefs;
}

@property (retain, nonatomic) PSSpecifier *carplayMatterGroup;
@property (retain, nonatomic) PSSpecifier *matterSpecifier;
@property (retain, nonatomic) CRCarPlayPreferences *carPreferences;
@property (nonatomic) BOOL launchHasCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (id)specifiers;
- (void)enableEdge:(id)a0;
- (id)init;
- (void)updateTrackpadWithCompletion:(id /* block */)a0;
- (void)handleTVOutChange;
- (void)pairedVehiclesDidChange;
- (void)viewDidLayoutSubviews;
- (void)shutDown:(id)a0;
- (void)profileNotification:(id)a0;
- (void)delayedAsyncLoadSpecifiers;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)pointerDevicesDidChange;
- (void)handleCarPlayAllowedDidChange;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)updateProfilesWithCompletion:(id /* block */)a0;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)a0;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (void)updateGameControllersWithCompletion:(id /* block */)a0;
- (void)insertOrderedSpecifiers:(id)a0 atID:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)profileVisibilityChanged:(id)a0;
- (void)handleDidBecomeActive;
- (void)loadHomeButtonSettings:(id)a0;
- (void)reloadSpecifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)gameControllersDidChange;
- (void)dealloc;
- (void)updateSoftwareUpdateBadge;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateFontsWithCompletion:(id /* block */)a0;
- (void)loadLegalAndRegulatoryWithSpecifier:(id)a0;
- (BOOL)_hasCarPlayContent;
- (void)updateMatterWithCompletion:(id /* block */)a0;
- (void)homeButtonCustomizeControllerDidFinish:(id)a0;
- (id)EDGEEnabled:(id)a0;

@end
