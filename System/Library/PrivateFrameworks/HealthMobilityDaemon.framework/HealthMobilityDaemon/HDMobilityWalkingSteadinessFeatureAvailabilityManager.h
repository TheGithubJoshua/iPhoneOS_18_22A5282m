@class NSString, HDProfile, HDFeatureAvailabilityManager;
@protocol HDRegionAvailabilityProviding;

@interface HDMobilityWalkingSteadinessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDMobilityRegionSupportedDeterminer> {
    HDProfile *_profile;
    long long _currentOnboardingVersion;
    id<HDRegionAvailabilityProviding> _supportedRegionProvider;
    HDFeatureAvailabilityManager *_manager;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (void)unregisterObserver:(id)a0;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)isOnboardingCompletionWithRegionSupportedOnLocalDevicePresentWithError:(id *)a0;
- (BOOL)_localRegionCheckWithCountryCode:(id)a0;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (id)regionAvailabilityWithError:(id *)a0;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)a0;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)a0;
- (id)_onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (BOOL)_determineIsSupportedWithOnboardingCompletions:(id)a0 regionCheckBlock:(id /* block */)a1;
- (BOOL)isRegionCodeSupportedOnLocalDevice:(id)a0;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (long long)_currentOnboardingVersion;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 regionAvailabilityProvider:(id)a1;
- (id)featureOnboardingRecordWithError:(id *)a0;

@end
