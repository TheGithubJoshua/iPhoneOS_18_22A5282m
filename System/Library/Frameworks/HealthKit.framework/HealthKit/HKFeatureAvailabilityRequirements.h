@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)a0;
+ (id)bloodOxygenMeasurementsAreEnabled;
+ (id)featureFlagIsEnabled:(BOOL)a0;
+ (id)capabilityIsSupportedOnAnyWatch:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)a0;
+ (id)countryCodeIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)watchLowPowerModeIsOff;
+ (id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)onboardedAtLeastDaysAgo:(long long)a0 featureIdentifier:(id)a1;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)a0;
+ (id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)a0;
+ (id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0;
+ (id)notInStoreDemoMode;
+ (id)activeRemoteDeviceIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)a0;
+ (id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)a0;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)a0;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)notAgeGatedForUserDefaultsKey:(id)a0;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)featureIsOnWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)watchAppIsInstalledForBundleIdentifier:(id)a0;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)wristDetectionIsEnabledForActiveWatch;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)a0;
+ (id)healthAppIsNotHidden;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;

@end
