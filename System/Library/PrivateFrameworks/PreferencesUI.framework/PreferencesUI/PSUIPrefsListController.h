@class NSDictionary, CoreTelephonyClient, PSKeyboardNavigationSearchController, SBSRemoteAlertHandle, NSString, VSAccountStore, HFHomeSettingsVisibilityArbitrator, EAAccessory, UIImage, PSUIClassKitVisibilityArbitrator, NSUserActivity, PSSpecifier, NSArray, DMCAccountSpecifierProvider, CNMonogrammer, NSObject, SUIKSearchResultsCollectionViewController, PSUIVPNSpecifierGenerator, FLPreferencesController, PSUIFamilySpecifierGenerator, AAUIProfilePictureStore, NSSet, PSUIClassroomVisibilityArbitrator, HPSConnectedHeadphonesController, TPKContentController, ACAccountStore, TPKContentView, WSWallpaperSettingsCoordinator, AIDAServiceOwnersManager, WFWiFiStateMonitor;
@protocol OS_dispatch_queue;

@interface PSUIPrefsListController : PSListController <TPKContentControllerDelegate, AAUISignInControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CoreTelephonyClientSubscriberDelegate, SUIKSearchResultsCollectionViewControllerDelegate, DMCAccountSpecifierProviderDelegate, PSUIVPNSpecifierGeneratorDelegate, PSUIFamilySpecifierGeneratorDelegate, RadiosPreferencesDelegate, DevicePINControllerDelegate, PSTopLevelController> {
    BOOL _launchedToTest;
    PSUIClassKitVisibilityArbitrator *_classKitVisibilityArbitrator;
    PSUIClassroomVisibilityArbitrator *_classroomVisibilityArbitrator;
    VSAccountStore *_videoSubscriberAccountStore;
    AIDAServiceOwnersManager *_serviceOwnersManager;
    AAUIProfilePictureStore *_profilePictureStore;
    CNMonogrammer *_monogrammer;
    BOOL _didFirstLoad;
    EAAccessory *_speakerAccessory;
    PSSpecifier *_eqSpecifier;
    NSArray *_MCUIBundleControllers;
    NSDictionary *_movedThirdPartySpecifiers;
    BOOL _initiallyLoadingThirdPartySpecifiers;
    BOOL _refreshingThirdPartySpecifiers;
    PSSpecifier *_notificationsSpecifier;
    PSSpecifier *_wallpaperSpecifier;
    PSSpecifier *_passcodeSpecifier;
    PSSpecifier *_homeScreenSpecifier;
    UIImage *_appleAccountSpecifierCachedIcon;
    PSSpecifier *_freeformSpecifier;
    PSSpecifier *_messagesSpecifier;
    PSSpecifier *_faceTimeSpecifier;
    PSSpecifier *_gameCenterSpecifier;
    PSSpecifier *_podcastsSpecifier;
    PSSpecifier *_siriSpecifier;
    PSSpecifier *_tvSpecifier;
    PSSpecifier *_carrierSelectionSpecifier;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_healthKitSpecifier;
    PSSpecifier *_applePencilSpecifier;
    BOOL _wifiValueIsClean;
    BOOL _bluetoothValueIsClean;
    BOOL _donatedBiomeSignalForSearchUsed;
    NSArray *_originalSpecifiers;
    NSSet *_originalDisplayIdentifiers;
    PSSpecifier *_selectedSpecifier;
    ACAccountStore *_accountStore;
    DMCAccountSpecifierProvider *_secondaryAccountSpecifierProvider;
    PSSpecifier *_specifierToSelect;
    NSObject<OS_dispatch_queue> *_loadAllSpecifiersQueue;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *bluetoothString;
@property (retain, nonatomic) NSArray *followupSpecifiersAccount;
@property (retain, nonatomic) NSArray *followupSpecifiersGeneral;
@property (retain, nonatomic) FLPreferencesController *followupController;
@property (retain, nonatomic) NSArray *connectedHeadphonesSpecifiers;
@property (retain, nonatomic) HPSConnectedHeadphonesController *connectedHeadphonesController;
@property (retain, nonatomic) PSKeyboardNavigationSearchController *spotlightSearchController;
@property (retain, nonatomic) SUIKSearchResultsCollectionViewController *searchResultsController;
@property (retain, nonatomic) WFWiFiStateMonitor *_wifiStateMonitor;
@property (retain, nonatomic) PSUIVPNSpecifierGenerator *_vpnSpecifierGenerator;
@property (retain, nonatomic) PSUIFamilySpecifierGenerator *_familySpecifierGenerator;
@property (nonatomic) BOOL deferredURLLoadForThirdPartyApp;
@property (nonatomic) BOOL _cellularDataSettingInitialized;
@property (nonatomic) BOOL _cellularDataSetting;
@property (nonatomic) struct __CTServerConnection { } *_ctConnection;
@property (retain, nonatomic) WSWallpaperSettingsCoordinator *wallpaperCoordinator;
@property (retain, nonatomic) NSString *spotlightSearchTerm;
@property (retain, nonatomic) HFHomeSettingsVisibilityArbitrator *_homeKitVisibilityArbitrator;
@property (retain, nonatomic) PSSpecifier *_appleAccountSpecifier;
@property (retain, nonatomic) PSSpecifier *_classKitSpecifier;
@property (retain, nonatomic) PSSpecifier *_classroomSpecifier;
@property (retain, nonatomic) PSSpecifier *_emergencySOSSpecifier;
@property (retain, nonatomic) PSSpecifier *_ethernetSpecifier;
@property (retain, nonatomic) PSSpecifier *_exposureNotificationSpecifier;
@property (retain, nonatomic) PSSpecifier *_homeKitSpecifier;
@property (retain, nonatomic) PSSpecifier *_videoSubscriberGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *_videoSubscriberSpecifier;
@property (retain, nonatomic) NSArray *_secondaryAccountSpecifiers;
@property (retain, nonatomic) NSArray *_thirdPartySpecifiers;
@property (retain, nonatomic) NSString *_pendingOffsetItemName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (retain, nonatomic) NSUserActivity *searchActivity;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (retain, nonatomic) TPKContentController *tipContentController;
@property (retain, nonatomic) TPKContentView *tipContentView;
@property (nonatomic) BOOL shouldDisplayTipContentView;
@property (copy, nonatomic) NSArray *tableViewHeaderConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL skipSelectingDefaultCategoryOnLaunch;

+ (id)radiosPreferences;
+ (void)setAirplaneMode:(BOOL)a0;
+ (BOOL)airplaneMode;

- (void)popToRoot;
- (id)specifiers;
- (void)willBecomeActive;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)didEnterBackground;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)a0 identifier:(id)a1;
- (id)_cachedIconForAppleAccountSpecifier;
- (void)vpnSpecifierGeneratorDidUpdate:(id)a0;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)reloadCellularRelatedSpecifiers;
- (id)init;
- (void)confirmationSpecifierCancelled:(id)a0;
- (void)clearCache;
- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (id)categoryController;
- (BOOL)isCellularDataEnabled;
- (void)iMessageSupportMayHaveChanged;
- (void)_setupCachedAppleAccountSpecifier:(id)a0;
- (void)_upArrowKeyPressed;
- (void)_presentAppleAccountSignInController:(id)a0;
- (id)_serviceOwnersManager;
- (void)insertMovedThirdPartySpecifiersAnimated:(BOOL)a0;
- (void)_saveIconToCacheForAppleAccountSpecifier:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)_tabKeyPressed;
- (void)showSecurityResearchDeviceInfo;
- (void)updateConnectedHeadphonesSpecifiersWithCompletion:(id /* block */)a0;
- (void)loadView;
- (void)_configureImageViewForRow:(id)a0;
- (void)willEnterForeground;
- (id)getAllSpecifiers;
- (id)identifierForSelectedIndex;
- (void)suspend;
- (void)updateResearchDeviceTextWithCompletion:(id /* block */)a0;
- (void)_delayedSpotlightSearch;
- (void)viewDidLayoutSubviews;
- (void)airplaneModeChanged;
- (void)signInController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)updateFollowupSpecifiersWithCompletion:(id /* block */)a0;
- (id)_specifierDictionaryForBundlePath:(id)a0 identifier:(id)a1 internalIcon:(BOOL)a2 searchPlist:(id)a3;
- (void)setupPrimaryAppleAccountGroup:(id)a0;
- (id)generalViewController;
- (id)_silhouetteMonogramIcon;
- (void)_downArrowKeyPressed;
- (void)updateSupervisedTextWithCompletion:(id /* block */)a0;
- (void)configureApplePencilSpecifier;
- (void)selectDefaultCategory;
- (void)updateAccountSpecifiers;
- (void)setAirplaneMode:(id)a0 specifier:(id)a1;
- (id)phoneStatusForSpecifier:(id)a0;
- (void)refresh3rdPartyBundles;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0 urlDictionary:(id)a1;
- (void)donateBiomeSignalForSearchUsed;
- (void)updateTipKitContentWithCompletion:(id /* block */)a0;
- (void)updateVideoSubscriberAccountWithCompletion:(id /* block */)a0;
- (void)_localeChanged;
- (void)_beginObservingProfilePictureStoreDidChangeNotification;
- (void)updateEthernet;
- (void)NETRBStateChangedNotification:(id)a0 completion:(id /* block */)a1;
- (id)_primarySpecifierOrdering;
- (void)didDismissSearchController:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (BOOL)shouldShowApplePencilSpecifier;
- (BOOL)_showSOS;
- (void)updateHomeKitSpecifierWithCompletion:(id /* block */)a0;
- (void)updateClassroomSpecifierWithCompletion:(id /* block */)a0;
- (void)bluetoothPowerChanged:(id)a0;
- (void)updateApplePayWithCompletion:(id /* block */)a0;
- (void)fetchCellularDataEnabled;
- (void)appleAccountSpecifierWasTappedWhileInCachedState:(id)a0;
- (id)getAirplaneMode:(id)a0;
- (void)appleAccountsDidChange;
- (void)contentController:(id)a0 contentViewNeedsLayout:(id)a1;
- (void)dismissPopover;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)profilePictureDidChange;
- (id)_accountStore;
- (BOOL)shouldShowEthernetSpecifier;
- (void)viewDidAppear:(BOOL)a0;
- (id)selectSpecifier:(id)a0;
- (void)updateFamilyWithCompletion:(id /* block */)a0;
- (BOOL)_canSelectSpecifierAtIndexPath:(id)a0;
- (BOOL)_allowsBorderForCell:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)a0;
- (void)didSelectRowAtIndexPath:(id)a0;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (long long)searchResultsCollectionViewController:(id)a0 sortCategory1:(id)a1 sortCategory2:(id)a2;
- (id)_profilePictureStore;
- (void)lazyLoadSpecialBundleForSpecifier:(id)a0;
- (void)loadThirdPartySpecifierIfNeededForBundleID:(id)a0;
- (void)_videoSubscriberAccountAvailabilityDidChange:(id)a0;
- (void)updateEthernetWithCompletion:(id /* block */)a0;
- (void)updateSpyglassWithCompletion:(id /* block */)a0;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(id /* block */)a0;
- (id)specifierForBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)_exposureNotificationAvailable;
- (BOOL)shouldShowSimulatorSettings;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(id /* block */)a0;
- (void)didCancelEnteringPIN;
- (void)_setupAppleAccountSpecifierForLogin:(id)a0;
- (void)NETRBStateChangedNotification:(id)a0;
- (id)_sidebarSpecifierForCategoryController;
- (void)selectDefaultCategoryForced:(BOOL)a0;
- (id)getTetheringStatus:(id)a0;
- (void)indexThirdPartyAppsAndManifests;
- (void)showPINSheet:(id)a0;
- (BOOL)_removeCachedAppleAccountIcon;
- (void)bluetoothValueFetch:(id)a0;
- (void)reloadAccountSpecifiersForProvider:(id)a0;
- (void)configureTopLevelSpecifier:(id)a0;
- (BOOL)_swapFollowUpSpecifiers:(id)a0 for:(id)a1 account:(unsigned long long)a2;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)_videoSubscriberAccountStoreDidChange:(id)a0;
- (void)_setAirplaneMode:(BOOL)a0;
- (BOOL)_shouldPresentModernThirdPartyAppListForBundleIdentifier:(id)a0;
- (BOOL)shouldShowFaceID;
- (void)signInControllerDidCancel:(id)a0;
- (void)refreshTableViewHeaderIfVisible;
- (void)_loadThirdPartySpecifiersWithCompletion:(id /* block */)a0;
- (void)updateSecondaryAccountSpecifiersWithCompletion:(id /* block */)a0;
- (void)_showControllerFromSpecifier:(id)a0;
- (void)indexManifests;
- (id)bundle;
- (void)_reallyLoadThirdPartySpecifiersForApps:(id)a0 shouldAddAppClipSpecifier:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)bluetoothValue:(id)a0;
- (void)searchResultsCollectionViewController:(id)a0 didSelectURL:(id)a1;
- (id)passbookSpecifier;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (BOOL)shouldShowClassroomSpecifier;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reloadSpecifiers;
- (void)updateSOSWithCompletion:(id /* block */)a0;
- (void)displayIdentifiersChanged;
- (BOOL)handlePendingURL;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)a0;
- (void)updatePersonalHotspot;
- (void)selectDefaultCategoryForced:(BOOL)a0 showController:(BOOL)a1;
- (void)_setupAppleAccountSpecifier:(id)a0;
- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)setupDaemonsIfNeeded;
- (void)updateExposureNotificationWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (long long)getTopMostPredecessorIndex;
- (BOOL)shouldShowClassKitSpecifier;
- (void)checkDeveloperSettingsState;
- (BOOL)canBecomeFirstResponder;
- (void)_newCarrierNotification;
- (void)searchResultsCollectionViewController:(id)a0 didScrollResultsInScrollView:(id)a1;
- (long long)insertionIndexForSpecifier:(id)a0 inSpecifiers:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)shouldShowTouchID;
- (void)continueSearchInSettingsWithTerm:(id)a0;
- (void)asyncSpecifiersFirstLoad;
- (void)updateClassKitSpecifierWithCompletion:(id /* block */)a0;
- (void)_handleOnsiteProfileInstallation;
- (void)vpnSpecifierGenerator:(id)a0 lazyLoadBundleFromSpecifier:(id)a1;
- (id)cellularDataStatusForSpecifier:(id)a0;
- (BOOL)searchResultsCollectionViewController:(id)a0 shouldShowCategory:(id)a1;
- (void)accountCellWasTapped:(id)a0;
- (void)_setupAppleAccountSpecifier:(id)a0 title:(id)a1 isSubscriber:(BOOL)a2;
- (id)keyCommands;
- (BOOL)accountsSpecifiersAreEnabled;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)rerootNavigationController;
- (id)appleAccountIconLocalCacheURL;
- (long long)navigationItemLargeTitleDisplayMode;
- (void)testSpecifierCountAfterBlock:(id /* block */)a0;
- (void)updateRestrictedSettings;
- (void)iconChangedForBundleID:(id)a0;
- (id)videoSubscriberAccountValue:(id)a0;
- (void)setSpeakerAccessory:(id)a0 eqAvailable:(BOOL)a1;
- (BOOL)isAppClipsAllowed;
- (void)updateVPNWithCompletion:(id /* block */)a0;
- (void)confirmationSpecifierConfirmed:(id)a0;
- (void)insertOrderedSpecifier:(id)a0 animated:(BOOL)a1;
- (void)familySpecifierGeneratorDidUpdate:(id)a0;
- (id)wifiNetwork:(id)a0;
- (void)_showDetailTargetDidChange:(id)a0;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (id)classroomValue:(id)a0;
- (id)searchResultsCollectionViewController:(id)a0 iconForCategory:(id)a1;
- (void)showDeviceSupervisionInfo;
- (void)_setupAppleAccountSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)loadPPTTestSpecifiers:(int)a0;

@end
