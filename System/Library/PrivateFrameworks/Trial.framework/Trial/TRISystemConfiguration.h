@class NSString;

@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}

+ (id)sharedInstance;
+ (id)_sharedSystemInfo;

- (BOOL)isInternalBuild;
- (id)deviceClass;
- (id)init;
- (id)deviceModelCode;
- (id)deviceId;
- (BOOL)isBetaBuild;
- (BOOL)setDeviceIdentifier:(id)a0;
- (id)carrierCountryIsoCode;
- (id)carrierBundleIdentifier;
- (id)osBuild;
- (id)enabledInputModeIdentifiers;
- (void).cxx_destruct;
- (id)aneVersion;
- (id)userSettingsLanguageCode;
- (id)initWithPaths:(id)a0;
- (BOOL)resetDeviceIdentifier;
- (BOOL)isDiagnosticsAndUsageEnabled;
- (id)_dispatchQueueForCarrierInfoGathering;
- (BOOL)hasAne;
- (int)populationType;
- (id)systemInfo;
- (id)userSettingsRegionCode;
- (BOOL)deleteDeviceIdentifierWithPath:(id)a0;
- (id)trialVersionTag;
- (id)createDeviceIdentifierWithPath:(id)a0;
- (id)_systemInfoWithIsStale:(BOOL *)a0;
- (id)_trialVersion;
- (id)createPersistentDeviceIdentifier;
- (BOOL)deleteDeviceIdentifier;
- (id)deviceInfoForQuestion:(id)a0;
- (BOOL)isBetaUserWithIsStale:(BOOL *)a0;
- (struct { long long x0; long long x1; long long x2; })marketingOSVersion;
- (id)osType;
- (id)readDeviceIdentifierWithPath:(id)a0;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (BOOL)setDeviceIdentifier:(id)a0 path:(id)a1;
- (id)storedDeviceIdentifier;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)userSettingsBCP47DeviceLocale;

@end
