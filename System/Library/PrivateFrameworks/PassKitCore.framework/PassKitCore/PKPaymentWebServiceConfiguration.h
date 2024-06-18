@class NSDictionary, NSNumber, NSURL;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDictionary *configuration;
@property (readonly, weak) NSNumber *version;
@property (copy) NSURL *configurationURL;

- (id)initWithCoder:(id)a0;
- (id)heroImageManifestURLForRegion:(id)a0;
- (double)dynamicAssetPrefetchTimeIntervalForRegion:(id)a0;
- (id)unsupportedWebPaymentConfigurations;
- (id)init;
- (id)paymentSetupBrowsableProductTypesForRegion:(id)a0;
- (id)featureWithType:(long long)a0 inRegion:(id)a1;
- (BOOL)browseProvisioningBankAppsEnabledForRegion:(id)a0;
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)a0;
- (BOOL)buddyManualProvisioningEnabledForRegion:(id)a0;
- (id)paymentSetupFeaturedNetworksForRegion:(id)a0;
- (id)credentialTypesRequiringMetadata;
- (id)betaPaymentNetworksForRegion:(id)a0;
- (id)relayServerHostsToHandleUniversalLinksForRegion:(id)a0;
- (BOOL)hasFeaturesSupportedForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)_regionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2 supportedRegions:(BOOL)a3;
- (id)marketsURL;
- (id)defaultServerURL;
- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)a0;
- (id)primaryFeaturedNetworkForRegion:(id)a0;
- (id)paymentServicesURLForRegion:(id)a0;
- (id)featuresForRegion:(id)a0;
- (BOOL)peerPaymentEnabledForRegion:(id)a0;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (double)deviceCheckInIntervalForRegion:(id)a0;
- (id)contactFormatConfiguration;
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)a0;
- (BOOL)regionHasProvisioningEnablementPercentage:(id)a0;
- (BOOL)remotePaymentsRequiredForVoiceover;
- (id)_lock_regions;
- (BOOL)manualProvisioningEnabledForRegion:(id)a0;
- (id)initWithConfiguration:(id)a0 url:(id)a1;
- (double)provisioningEnablementPercentageForRegion:(id)a0;
- (BOOL)shouldEnableTransitServiceCheckInForRegion:(id)a0;
- (id)brokerURLForRegion:(id)a0;
- (id)_lock_globalFeaturesForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)paymentServicesMerchantURLForRegion:(id)a0;
- (double)deviceUpgradeTaskEnablementPercentageForRegion:(id)a0;
- (BOOL)cameraFirstProvisioningEnabledForRegion:(id)a0;
- (BOOL)hasFeatureRequiringRegistrationInRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (id)allowedRelayServerHostsForRegion:(id)a0;
- (id)_lock_unsupported_regions;
- (void)encodeWithCoder:(id)a0;
- (double)paymentSetupFeaturesCacheUpdateIntervalForRegion:(id)a0;
- (id)relayServerHostForRegion:(id)a0;
- (BOOL)buddyProvisioningEnabledForRegion:(id)a0;
- (id)_lock_featuresForRegion:(id)a0 osVersion:(id)a1 deviceClass:(id)a2;
- (void).cxx_destruct;
- (id)unsupportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1;
- (BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)AMPNonDefaultBehaviourDisabledForRegion:(id)a0;
- (id)_lock_region:(id)a0;
- (id)_featuresFromDictionary:(id)a0 withRegion:(id)a1 osVersion:(id)a2 deviceClass:(id)a3;
- (BOOL)_lock_supportedForOSVersion:(id)a0 inRegion:(id)a1 deviceClass:(id)a2 platform:(id)a3 suportedRegions:(BOOL)a4;
- (BOOL)quickAccessForMoreRemovePassEnabled;
- (id)credentialTypesRequiringDPANNotifications;
- (BOOL)paymentTransactionIconsEnabledForRegion:(id)a0;
- (id)_lock_unsupported_region:(id)a0;
- (unsigned long long)notificationAuthorizationPromptPresentationCount;
- (BOOL)accountServiceEnabledForRegion:(id)a0;
- (id)_lock_featuresForRegion:(id)a0;
- (id)betaPaymentNetworkVersionsForRegion:(id)a0;
- (id)discoveryManifestURLForRegion:(id)a0;
- (BOOL)suppressCardholderNameFieldForRegion:(id)a0;
- (id)applyServiceFeaturesForRegion:(id)a0;
- (id)supportedRegionsForOSVersion:(id)a0 deviceClass:(id)a1 platform:(id)a2;
- (BOOL)applyServiceEnabledForRegion:(id)a0;
- (BOOL)deviceCheckInDisabledForRegion:(id)a0;

@end
