@class NSUUID, NSString, NSData, NSPredicate, NSSet, NSDate, HMFConnectivityInfo, NSArray, Protocol, MKFHAPAccessoryDatabaseID, NSNumber, _MKFHomeNetworkRouterSetting;
@protocol MKFSoftwareUpdate, MKFRoom, MKFHomeNetworkRouterSetting, MKFAccessory, MKFHome, MKFApplicationData;

@interface _MKFHAPAccessory : _MKFAccessory <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHAPAccessory, MKFHAPAccessoryPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *accessModeChangeNotificationEnabled;
@property (copy, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (copy, nonatomic) NSNumber *airPlayEnabled;
@property (copy, nonatomic) NSNumber *announceEnabled;
@property (retain, nonatomic) NSData *broadcastKey;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (copy, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSNumber *enhancedAuthConfigNumber;
@property (copy, nonatomic) NSNumber *enhancedAuthMethod;
@property (copy, nonatomic) NSNumber *hardwareSupport;
@property (copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (copy, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (copy, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (copy, nonatomic) NSDate *keyUpdatedTime;
@property (copy, nonatomic) NSDate *lastPairingAuditTime;
@property (copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (copy, nonatomic) NSNumber *matterNodeID;
@property (retain, nonatomic) NSSet *matterPairings;
@property (copy, nonatomic) NSNumber *matterProductID;
@property (copy, nonatomic) NSNumber *matterVendorID;
@property (copy, nonatomic) NSNumber *needsOnboarding;
@property (copy, nonatomic) NSNumber *needsPairingAudit;
@property (retain, nonatomic) NSSet *pairingsToRemove;
@property (copy, nonatomic) NSString *pairingUsername;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (retain, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSNumber *reachabilityEventNotificationEnabled;
@property (copy, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, nonatomic) NSNumber *siriEnabled;
@property (copy, nonatomic) NSNumber *siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (copy, nonatomic) NSNumber *sleepInterval;
@property (retain, nonatomic) NSData *smartBulletinBoardNotificationData;
@property (copy, nonatomic) NSNumber *soundAlertEnabled;
@property (copy, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *transportInformation;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (copy, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (retain, nonatomic) NSSet *actionCharacteristicWrites_;
@property (retain, nonatomic) NSSet *naturalLightingActions_;
@property (retain, nonatomic) NSSet *pairedUsers_;
@property (retain, nonatomic) NSSet *services_;
@property (retain, nonatomic) _MKFHomeNetworkRouterSetting *settingNetworkRouter;
@property (copy, nonatomic) NSNumber *accessModeChangeNotificationEnabled;
@property (copy, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (copy, nonatomic) NSNumber *airPlayEnabled;
@property (copy, nonatomic) NSNumber *announceEnabled;
@property (retain, nonatomic) NSData *broadcastKey;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (retain, nonatomic) NSSet *cameraActivityZones;
@property (copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (copy, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (copy, nonatomic) NSNumber *enhancedAuthConfigNumber;
@property (copy, nonatomic) NSNumber *enhancedAuthMethod;
@property (copy, nonatomic) NSNumber *hardwareSupport;
@property (copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (copy, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSArray *initialServiceTypes;
@property (copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (copy, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (copy, nonatomic) NSDate *keyUpdatedTime;
@property (copy, nonatomic) NSDate *lastPairingAuditTime;
@property (copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (copy, nonatomic) NSNumber *matterNodeID;
@property (retain, nonatomic) NSSet *matterPairings;
@property (copy, nonatomic) NSNumber *matterProductID;
@property (copy, nonatomic) NSNumber *matterVendorID;
@property (copy, nonatomic) NSNumber *needsOnboarding;
@property (copy, nonatomic) NSNumber *needsPairingAudit;
@property (copy, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSSet *pairingsToRemove;
@property (copy, nonatomic) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (retain, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSNumber *reachabilityEventNotificationEnabled;
@property (copy, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, nonatomic) NSNumber *siriEnabled;
@property (copy, nonatomic) NSNumber *siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (copy, nonatomic) NSNumber *sleepInterval;
@property (retain, nonatomic) NSData *smartBulletinBoardNotificationData;
@property (copy, nonatomic) NSNumber *soundAlertEnabled;
@property (copy, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *transportInformation;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (copy, nonatomic) NSNumber *wiFiTransportCapabilities;
@property (readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property (readonly, retain, nonatomic) NSArray *naturalLightingActions;
@property (readonly, retain, nonatomic) NSArray *pairedUsers;
@property (readonly, retain, nonatomic) NSArray *services;
@property (retain, nonatomic) id<MKFHomeNetworkRouterSetting> settingNetworkRouter;
@property (readonly, copy, nonatomic) MKFHAPAccessoryDatabaseID *databaseID;
@property (copy, nonatomic) NSNumber *accessoryCategory;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (copy, nonatomic) NSString *configurationAppIdentifier;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategoryIdentifier;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (copy, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSNumber *lowBattery;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *networkClientIdentifier;
@property (copy, nonatomic) NSNumber *networkClientLAN;
@property (copy, nonatomic) NSString *networkClientProfileFingerprint;
@property (copy, nonatomic) NSString *networkRouterUUID;
@property (copy, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy, nonatomic) NSString *primaryProfileVersion;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSNumber *suspendCapable;
@property (copy, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *actionMediaPlaybacks;
@property (readonly, retain, nonatomic) NSArray *analysisEventBulletinRegistrations;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (readonly, retain, nonatomic) NSArray *cameraAccessModeBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraReachabilityBulletinRegistrations;
@property (readonly, retain, nonatomic) NSArray *cameraSignificantEventBulletinRegistrations;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFAccessory> hostAccessory;
@property (readonly, retain, nonatomic) NSArray *hostedAccessories;
@property (readonly, retain, nonatomic) NSArray *mediaPropertyNotificationRegistrations;
@property (retain, nonatomic) id<MKFRoom> room;
@property (retain, nonatomic) id<MKFSoftwareUpdate> softwareUpdate;
@property (readonly, retain, nonatomic) NSArray *usersWithListeningHistoryEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithMediaContentProfileEnabled;
@property (readonly, retain, nonatomic) NSArray *usersWithPersonalRequestsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)predicateToFetchBulletinRegistrationOnDeviceIdsIdentifier:(id)a0 user:(id)a1;
- (void)addPairedUsersObject:(id)a0;
- (id)bulletinRegistrationFromFetchRequest:(id)a0 context:(id)a1;
- (id)cameraAccessModeBulletinRegistrationWithDeviceIdsIdentifier:(id)a0 user:(id)a1 context:(id)a2;
- (id)cameraReachabilityBulletinRegistrationWithDeviceIdsIdentifier:(id)a0 user:(id)a1 context:(id)a2;
- (id)cameraSignificantEventBulletinRegistrationWithDeviceIdsIdentifier:(id)a0 user:(id)a1 context:(id)a2;
- (id)castIfHAPAccessory;
- (id)characteristicFromInstanceID:(id)a0 context:(id)a1;
- (id)findServicesRelationWithInstanceID:(id)a0;
- (id)materializeOrCreateNaturalLightingActionsRelation:(BOOL *)a0;
- (id)materializeOrCreateServicesRelationWithInstanceID:(id)a0 createdNew:(BOOL *)a1;
- (void)maybeFixUpCharacteristicWriteActionsInContext:(id)a0;
- (void)removePairedUsersObject:(id)a0;
- (id)serviceWithID:(id)a0 context:(id)a1;
- (void)synchronizeServicesRelationWith:(id)a0;

@end
