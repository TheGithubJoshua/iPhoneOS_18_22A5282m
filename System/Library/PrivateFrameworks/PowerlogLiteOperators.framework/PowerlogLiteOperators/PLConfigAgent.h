@class PLXPCListenerOperatorComposition, PLCFNotificationOperatorComposition;

@interface PLConfigAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *notificationKeyboardClicks;
@property (readonly) PLCFNotificationOperatorComposition *notificationKeyboardHaptics;
@property (retain) PLXPCListenerOperatorComposition *photoSharingListener;
@property (readonly) PLXPCListenerOperatorComposition *continuityCameraNotification;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionKeyboardClicks;
+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)entryEventForwardDefintionRinger;
+ (long long)getOSVersionNumber;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;
+ (void)resetRAPIDTaskingConfig;
+ (id)accountingGroupDefinitions;
+ (void)removeFilesFromPath:(id)a0 withMaxFiles:(long long)a1;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionContinuityCamera;
+ (id)getVersionDirectory:(long long)a0;
+ (id)entryEventForwardDefinitionPhotoSharing;
+ (id)entryEventNoneDefinitionAdapterInformation;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionKeyboardHaptics;

- (void)initOperatorDependancies;
- (id)deviceName;
- (void)copyPowerlogsForPreUpgradeOSVersion:(long long)a0;
- (BOOL)noWatchdogs;
- (void)maintainPreUpgradePowerlogs;
- (id)init;
- (void)logEventNonePairedDeviceConfig;
- (BOOL)getMDMStatus;
- (id)crashReporterKey;
- (int)getDeviceType;
- (void)log;
- (id)basebandFirmware;
- (void)pairStatusDidChange:(id)a0;
- (void)logEventForwardPhotoSharing:(id)a0;
- (id)hwBoardRevision;
- (void)logToPPTBuild:(id)a0 atDate:(id)a1;
- (id)hwConfig;
- (void)cleanupOldPowerlogs;
- (BOOL)disableCABlanking;
- (id)seedGroup;
- (double)logDeviceDiskSize;
- (id)bootArgs;
- (void)logEventNoneConfig;
- (id)logIcloudAccountType;
- (id)deviceShutdownReasons;
- (void).cxx_destruct;
- (void)logEntryToCA:(id)a0;
- (void)logConfigEntry:(id)a0;
- (id)getSplatVersionString;
- (id)baseband;
- (void)logEventForwardKeyboardHaptics;
- (void)logEventForwardContinuityCamera:(id)a0;
- (unsigned long long)getEnclosureMaterial;
- (id)logAndUpdateLastBuild:(id)a0;
- (void)logEventForwardRingerState;
- (id)logLastBackupTime;
- (id)logAndUpdateLastUpgradeTime:(id)a0;
- (void)fileSizeSafeguards;
- (unsigned long long)volumeFreespace:(id)a0;
- (void)dealloc;
- (void)logEventForwardKeyboardClicks;
- (long long)checkAndUpdateOSVersion;
- (int)getOSVariant;
- (long long)autolockTime;

@end
