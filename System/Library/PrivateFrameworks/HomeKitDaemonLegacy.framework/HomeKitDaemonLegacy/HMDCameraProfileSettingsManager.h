@class HMDAppleAccountManager, HMDFeaturesDataSource, HMDDatabaseZoneManager, HMFMessageDispatcher, NSObject, NSString, HMDCameraProfileSettingsDerivedPropertiesModel, HMDHAPAccessory, _HMCameraUserSettings, HMDBulletinBoard, NSNumber, HMDCharacteristicsAvailabilityListener, HMDCameraProfileSettingsModel, NSNotificationCenter, NSUUID;
@protocol OS_dispatch_queue, HMDCameraProfileSettingsManagerDelegate;

@interface HMDCameraProfileSettingsManager : HMFObject <HMFLogging, HMBLocalZoneDelegate, HMBCloudZoneDelegate, HMBLocalZoneModelObserver, HMDCharacteristicsAvailabilityListenerDelegate, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDHAPAccessory *hapAccessory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDCameraProfileSettingsModel *defaultSettingsModel;
@property (readonly) HMDCameraProfileSettingsDerivedPropertiesModel *derivedPropertiesModel;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) HMDCharacteristicsAvailabilityListener *characteristicsAvailabilityListener;
@property (readonly, getter=isCameraManuallyDisabled) BOOL cameraManuallyDisabled;
@property (readonly) NSString *clientIdentifier;
@property (readonly) HMDFeaturesDataSource *featuresDataSource;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly) HMDAppleAccountManager *accountManager;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property BOOL needsInitialSettingsCharacteristicSynchronization;
@property (copy, getter=isAnyUserAtHome) NSNumber *anyUserAtHome;
@property (readonly) NSString *zoneName;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSUUID *derivedPropertiesModelID;
@property (readonly) _HMCameraUserSettings *currentSettings;
@property (readonly) unsigned long long supportedFeatures;
@property (weak) id<HMDCameraProfileSettingsManagerDelegate> delegate;
@property (readonly, getter=isRecordingEnabled) BOOL recordingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)zoneNameForHome:(id)a0;

- (void)remove;
- (id)logIdentifier;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)dealloc;
- (id)messageDestination;
- (void)_handleUpdateAccessModeMessage:(id)a0;
- (void)_notifyClientsOfCurrentSettings;
- (id)initWithHAPAccessory:(id)a0 workQueue:(id)a1;
- (void)_addAccessModeCharacteristicWriteRequestsToArray:(id)a0 currentAccessMode:(unsigned long long)a1;
- (void)_addHomeKitCameraActiveCharacteristicWriteRequestToArray:(id)a0 currentAccessMode:(unsigned long long)a1;
- (void)_addNightVisionCharacteristicWriteRequestToArray:(id)a0 nightVisionEnabled:(BOOL)a1;
- (void)_addOperatingModeIndicatorCharacteristicWriteRequestToArray:(id)a0 accessModeIndicatorEnabled:(BOOL)a1;
- (void)_addPeriodicSnapshotsActiveCharacteristicWriteRequestToArray:(id)a0 periodicSnapshotsAllowed:(BOOL)a1;
- (void)_addRecordingAudioEnabledWriteRequestToArray:(id)a0 recordingAudioEnabled:(BOOL)a1;
- (void)_addSnapshotsActiveCharacteristicWriteRequestToArray:(id)a0 snapshotsAllowed:(BOOL)a1;
- (void)_addVideoAnalysisActiveWriteRequestToArray:(id)a0 currentAccessMode:(unsigned long long)a1;
- (void)_addWriteRequestToArray:(id)a0 forCharacteristicWithType:(id)a1 ofServiceWithType:(id)a2 value:(id)a3;
- (void)_coordinateSmartBulletinNotificationWithServiceBulletinNotification:(id)a0;
- (id)_createNotificationSettingsUsingSettingsModel:(id)a0;
- (void)_enablePackageNotificationsOnSettings:(id)a0;
- (void)_evaluateHomePresence;
- (void)_handleBulletinBoardNotificationCommitMessage:(id)a0;
- (void)_handleCharacteristicWriteRequests:(id)a0 completion:(id /* block */)a1;
- (void)_handleConnectedToAccessory;
- (void)_handleModelUpdate:(id)a0 previousModel:(id)a1;
- (void)_handleUpdateAccessModeChangeNotificationEnabledMessage:(id)a0;
- (void)_handleUpdateActivityZonesMessage:(id)a0;
- (void)_handleUpdateReachabilityEventNotificationEnabledMessage:(id)a0;
- (void)_handleUpdateRecordingTriggerEventsMessage:(id)a0;
- (void)_handleUpdatedDerivedProperties:(id)a0 previousProperties:(id)a1;
- (void)_handleUpdatedSettings:(id)a0 previousSettings:(id)a1;
- (void)_initializeNotificationSettingsUsingSettingsModel:(id)a0;
- (id)_isAnyUserAtHomeForPresence:(id)a0;
- (id /* block */)_localZoneUpdateCompletionForMessage:(id)a0;
- (BOOL)_migrateNotificationSettings:(id)a0;
- (BOOL)_migrateSettingsModel:(id)a0;
- (void)_notifyClientsOfChangedSettings:(id)a0 isInitialSettingsUpdate:(BOOL)a1;
- (void)_notifyClientsOfChangedSettingsModel:(id)a0 isInitialSettingsUpdate:(BOOL)a1;
- (id)_payloadForSettings:(id)a0;
- (void)_populateCurrentAccessModeFieldForDerivedProperties:(id)a0 currentSettings:(id)a1 userInitiated:(BOOL)a2 didUpdateField:(BOOL *)a3;
- (id)_processingOptionsForMessage:(id)a0;
- (void)_setManuallyDisabledCharacteristicNotificationsEnabled:(BOOL)a0;
- (id)_settingsFromSettingsModel:(id)a0;
- (id)_settingsModelForUpdate;
- (BOOL)_shouldQueryCanDisableRecordingForAccessMode:(unsigned long long)a0 isAtHome:(BOOL)a1 currentSettings:(id)a2;
- (BOOL)_shouldQueryCanEnableRecordingForAccessMode:(unsigned long long)a0 currentSettings:(id)a1;
- (void)_synchronizeCurrentAccessModeSettingToCamera;
- (void)_synchronizeSettingsModelForBackwardCompatibilityForCharacteristic:(id)a0;
- (void)_updateDerivedPropertiesModelWithSettingsModel:(id)a0 userInitiated:(BOOL)a1 reason:(id)a2;
- (void)_updateDerivedPropertiesOnSettingsModel:(id)a0;
- (void)_updateNotificationSettings:(id)a0 forMessage:(id)a1;
- (id)_updatedDerivedPropertiesModelWithSettingsModel:(id)a0 userInitiated:(BOOL)a1 didCreateModel:(BOOL *)a2;
- (void)_writeInitialSettingsCharacteristicsToCamera;
- (BOOL)canRevealCurrentAccessMode;
- (void)configureWithMessageDispatcher:(id)a0 adminMessageDispatcher:(id)a1 deviceIsResidentCapable:(BOOL)a2;
- (id)currentNotificationSettings;
- (id)currentSettingsModel;
- (void)disableRecordingAccessModes;
- (id)doorbellInputEventCharacteristic;
- (void)handleAccessoryConfiguredNotification:(id)a0;
- (void)handleBulletinNotificationEnableStateDidChangeNotification:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)handleCharacteristicsValueUpdatedNotification:(id)a0;
- (void)handleHomePresenceEvaluatedNotification:(id)a0;
- (void)handlePrimaryResidentUpdatedNotification:(id)a0;
- (void)handleRecordingManagementServiceDidUpdateNotification:(id)a0;
- (void)handleUserRemoteAccessDidChangeNotification:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 hapAccessory:(id)a1 workQueue:(id)a2 zoneManager:(id)a3 notificationCenter:(id)a4 bulletinBoard:(id)a5 characteristicsAvailabilityListener:(id)a6 featuresDataSource:(id)a7 accountManager:(id)a8;
- (BOOL)isCurrentDeviceConfirmedPrimaryResident;
- (void)listener:(id)a0 didUpdateAvailableCharacteristics:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (id)manuallyDisabledCharacteristic;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (void)zoneManagerDidStart:(id)a0;
- (void)zoneManagerDidStop:(id)a0;

@end