@class NSArray;

@interface ADTrackingTransparency : NSObject

@property (readonly, nonatomic) BOOL crossAppTrackingAllowedSwitchEnabled;
@property (readonly, nonatomic) long long crossAppTrackingAllowedSwitchDisabledReason;
@property (nonatomic) BOOL crossAppTrackingAllowed;
@property (readonly, nonatomic) BOOL personalizedAdsSwitchEnabled;
@property (readonly, nonatomic) long long personalizedAdsSwitchDisabledReason;
@property (nonatomic) BOOL personalizedAds;
@property (readonly, nonatomic) BOOL personalizedAdsAvailable;
@property (readonly, nonatomic) BOOL shouldShowPersonalizedAdsToggle;
@property (readonly, nonatomic) BOOL shouldPresentPersonalizedAdsOnboarding;
@property (readonly, nonatomic) BOOL personalizedAdsAvailableForAppStore;
@property (nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property (readonly, nonatomic) long long latestVersionForPersonalizedAdsConsent;
@property (readonly, nonatomic) NSArray *adSwitchDisabledReasons;

- (void)personalizedAdsAvailable:(id /* block */)a0;
- (BOOL)_isUserEDURestricted;
- (BOOL)isPersonalizedAdsScreenTimeRestricted;
- (id)appTrackingServiceProxy:(id)a0;
- (BOOL)_userAllowedToChangeSettings;
- (BOOL)_isUserManagedRestricted;
- (long long)accountLevelSwitchDisabledReason;
- (BOOL)shouldDisplayPAUI;
- (id)appTrackingXPCConnection:(id /* block */)a0 withInvalidation:(id /* block */)a1;
- (long long)accountRestrictionReason;

@end
