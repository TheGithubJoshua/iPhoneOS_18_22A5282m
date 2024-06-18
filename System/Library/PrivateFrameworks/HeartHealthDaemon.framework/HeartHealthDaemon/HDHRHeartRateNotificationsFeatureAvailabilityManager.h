@class NSString, NSUserDefaults, HKObserverSet;
@protocol HDPairedDeviceCapabilityProviding;

@interface HDHRHeartRateNotificationsFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension> {
    NSUserDefaults *_notificationSettingsDefaults;
    id<HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;
    HKObserverSet *_observers;
}

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)_featureEnabledDefaultsKey;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (id)_thresholdDefaultsKey;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)initWithFeatureIdentifier:(id)a0 notificationSettingsDefaults:(id)a1 pairedDeviceCapabilityProvider:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isOnboardingRecordPresent;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)regionAvailabilityWithError:(id *)a0;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (id)_featureSettings;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)description;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (void)_setFeatureEnabled:(id)a0 preferredThreshold:(id)a1;
- (long long)_defaultHeartRateThreshold;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)_activeRemoteDeviceSupportsHeartRateNotificationsWithError:(id *)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isActiveRemoteDevicePresent;
- (id)featureOnboardingRecordWithError:(id *)a0;

@end
