@class NSString, NSDictionary, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface HUHearingAidSettings : HCSettings {
    ACAccountStore *_accountStore;
    int _contentProtectionNotifyToken;
    BOOL _finishediCloudSetup;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (nonatomic) BOOL clearPartialPairing;
@property (retain, nonatomic) NSDictionary *knownPeripheralUUIDs;
@property (nonatomic) BOOL independentHearingAidSettings;
@property (nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property (nonatomic) BOOL shouldStreamToLeftAid;
@property (nonatomic) BOOL shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) BOOL multideviceSettingsEnabled;
@property (nonatomic) BOOL multideviceAudioEnabled;
@property (nonatomic) BOOL shouldStreamSystemSounds;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) int availableInputEars;
@property (nonatomic) int earsSupportingWatch;
@property (nonatomic) int preferredInputEar;
@property (retain, nonatomic) NSString *availableHearingDeviceName;
@property (nonatomic) unsigned long long usedHearingFeatures;
@property (nonatomic) BOOL exportsLiveListenToFile;
@property (nonatomic) BOOL liveHeadphoneLevelEnabled;
@property (nonatomic) BOOL anyGizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelEnabled;
@property (nonatomic) BOOL gizmoLiveHeadphoneLevelNPEnabled;

+ (id)sharedInstance;

- (void)iCloudAccountDidChange:(id)a0;
- (void)_updateTripleClickOptionsForPairedAids:(id)a0;
- (id)init;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)pushLocalHearingAidsToiCloud;
- (BOOL)shouldUseiCloud;
- (void)updateStreamingPreference;
- (void)setLocalHearingAidsFromiCloud:(id)a0;
- (void)_initializeICloudSetup;
- (void)logMessage:(id)a0;
- (void)removeDeviceIDFromCloudDenylist:(id)a0;
- (void)addDeviceIDToCloudDenylist:(id)a0;
- (BOOL)isPairedWithRealHearingAids;
- (void).cxx_destruct;
- (id)deviceIDForPairingInformation:(id)a0;
- (BOOL)isiCloudPaired;
- (BOOL)shouldStoreLocally;
- (id)keysToSync;
- (id)convertPersistentRepresentation:(id)a0 fromVersion:(float)a1 toVersion:(float)a2;
- (BOOL)isPairedWithFakeHearingAids;
- (void)dealloc;
- (BOOL)shouldPushLocalAidsToiCloud;
- (BOOL)isDeviceIDOnCloudDenylist:(id)a0;
- (void)icloudHearingSettingsDidChange:(id)a0;
- (void)_accessibilitySettingsChangedOnCompanion;

@end
