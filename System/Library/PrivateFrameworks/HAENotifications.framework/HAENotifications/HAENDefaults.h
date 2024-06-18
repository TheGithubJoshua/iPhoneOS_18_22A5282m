@class NSUserDefaults, NSMutableDictionary;

@interface HAENDefaults : NSObject {
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_domainSettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _EUVolumeLimitFlag;
    BOOL _SKVolumeLimitFlag;
}

+ (id)sharedInstance;
+ (BOOL)isRunningCITests;
+ (BOOL)HAENSupportedForCurrentDeviceClass;
+ (BOOL)isCurrentProcessMediaserverd;

- (void)updateAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (int)getReduceLoudSoundThreshold;
- (void)_updateSetting:(id)a0 value:(id)a1 notify:(BOOL)a2;
- (void)forceReadDefaults;
- (id)init;
- (BOOL)isHAENFeatureOptedIn;
- (void)updateUserVolumeForVolumeLimit;
- (BOOL)isReduceLoudSoundEnabled;
- (BOOL)isEUVolumeLimitOn;
- (void)setUserVolumeWithValue:(float)a0 mininum:(float)a1;
- (double)volumeReductionDelta;
- (void).cxx_destruct;
- (BOOL)isHAENFeatureEnabled;
- (void)wiredDeviceStatusDidChange;
- (void)_registerNotification:(id)a0;
- (id)_generateAccessoryKeyWithManufacture:(id)a0 andSerialNumber:(id)a1;
- (double)getLiveMonitoringThreshold;
- (BOOL)softwareVersionEnabled;
- (BOOL)isHAENFeatureMandatory;
- (long long)getAudioAccessoryConnectionInfo;
- (void)removeAllAdapters;
- (double)getLiveMonitorTimeWindowInSeconds;
- (void)setAudioAccessoryIsConnectedToHeadphones:(long long)a0;
- (BOOL)isCurrentAudioAccessoryHeadphone;
- (void)updateRLSSettings;
- (BOOL)isConnectedUnknownWiredDeviceHeadphone;
- (BOOL)_shouldRepromptSinceDate:(id)a0;
- (BOOL)isSKVolumeLimitOn;

@end
