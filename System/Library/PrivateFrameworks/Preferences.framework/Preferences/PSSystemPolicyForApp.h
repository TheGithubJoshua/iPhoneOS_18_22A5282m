@class NSString, PSPhotosPolicyController, PSContactsPolicyController, PSAccountEnumerator, PSSpecifier, BBObserver, NEConfiguration, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, PSSystemPolicyForAppDelegate;

@interface PSSystemPolicyForApp : NSObject <BBObserverDelegate> {
    unsigned long long _policyOptions;
    BOOL _forcePolicyOptions;
    PSPhotosPolicyController *_photosPrivacyController;
    PSContactsPolicyController *_contactsPrivacyController;
    PSAccountEnumerator *_accountEnumerator;
    NEConfiguration *_pathControllerConfiguration;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *_bbObserverQueue;

@property (retain, nonatomic) BBObserver *_bbObserver;
@property (nonatomic) BOOL enServiceMatched;
@property (retain, nonatomic) NSString *matchingBundleIdentifier;
@property (retain, nonatomic) NSString *containerPathForCurrentApp;
@property (retain, nonatomic) NSUserDefaults *appUserDefaults;
@property (retain, nonatomic) PSSpecifier *cinematicFramingSpecifier;
@property (weak, nonatomic) id<PSSystemPolicyForAppDelegate> delegate;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isServiceRestricted:(id)a0;

- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (id)specifiers;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAppClip;
- (id)defaultBrowser:(id)a0;
- (id)documentSource:(id)a0;
- (id)locationStatus:(id)a0;
- (id)defaultMailApp:(id)a0;
- (BOOL)_accountModificationDisabledByRestrictions;
- (long long)_getAuthorizationRecordsStatus;
- (void)_handleAddAccountButtonAction:(id)a0;
- (BOOL)_isBackgroundAppRefreshAllowed;
- (BOOL)_isLocationServicesRestricted;
- (BOOL)_isWirelessDataRestricted;
- (BOOL)_supportsBackgroundAppRefresh;
- (BOOL)_supportsLiveActivities;
- (BOOL)_supportsLiveActivitiesFrequentUpdates;
- (id)accountsSpecifier;
- (id)assistantAndSearchSpecifiers;
- (id)authLevelStringForStatus:(unsigned long long)a0;
- (id)backgroundAppRefreshSpecifier;
- (id)contactsServicesSpecifier;
- (id)dataUsageWorkspaceInfo;
- (id)defaultAppSpecifierWithAppRecordsMatchingBlock:(id /* block */)a0 getter:(SEL)a1 setter:(SEL)a2 title:(id)a3;
- (id)defaultBrowserSpecifier;
- (id)defaultMailAppSpecifier;
- (id)documentsSpecifier;
- (id)exposureSpecifiersWithTCCServiceLookup:(id)a0;
- (id)familyControlsSpecifier;
- (BOOL)getMulticastAllowed:(BOOL *)a0;
- (void)headerLinkWasTapped;
- (id)isBackgroundRefreshEnabled:(id)a0;
- (BOOL)isCellularBundleID:(id)a0;
- (id)isFamilyControlsEnabled:(id)a0;
- (id)isLiveActivitiesEnabled:(id)a0;
- (id)isLocalNetworkEnabled:(id)a0;
- (id)isTapToPayEnabled:(id)a0;
- (id)liveActivitiesSpecifier;
- (void)loadNetworkConfigurationsForceRefresh:(BOOL)a0;
- (id)locationServicesSpecifier;
- (id)networkServicesSpecifier;
- (id)notificationSpecifier;
- (id)pasteboardAccessForSpecifier:(id)a0;
- (id)pasteboardSpecifier;
- (id)pathRuleForBundleID:(id)a0 create:(BOOL)a1;
- (id)photosServicesSpecifier;
- (id)preferredLanguage:(id)a0;
- (id)preferredLanguageSpecifier;
- (id)privacyAccessForSpecifier:(id)a0;
- (id)privacySpecifierForService:(struct __CFString { } *)a0 tccServiceLookup:(id)a1 tccServiceOverrides:(id)a2;
- (id)privacySpecifiersWithTCCServiceLookup:(id)a0 tccServiceOverrides:(id)a1;
- (void)saveNetworkConfiguration;
- (void)setBackgroundRefreshEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setDefaultBrowser:(id)a0 specifier:(id)a1;
- (void)setDefaultMailApp:(id)a0 specifier:(id)a1;
- (void)setFamilyControlsEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setLiveActivitiesEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setLocalNetworkEnabled:(id)a0 specifier:(id)a1;
- (void)setPasteboardAccess:(id)a0 forSpecifier:(id)a1;
- (void)setPrivacyAccess:(id)a0 forSpecifier:(id)a1;
- (void)setTapToPayEnabled:(id)a0 specifier:(id)a1;
- (void)setupNetworkConfiguration;
- (BOOL)shouldShowPasteboardSpecifier;
- (id)specifiersForPolicyOptions:(unsigned long long)a0 force:(BOOL)a1;
- (id)tapToPayScreenLockSpecifiers;
- (id)trackingSpecifiersWithTCCServiceLookup:(id)a0 tccServiceOverrides:(id)a1;
- (id)wirelessDataSpecifierWithAppName:(id)a0;

@end