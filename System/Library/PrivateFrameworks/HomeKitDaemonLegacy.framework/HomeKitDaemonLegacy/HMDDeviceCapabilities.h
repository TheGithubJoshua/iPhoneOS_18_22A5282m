@class NSUUID, NSString, HMDDeviceCapabilitiesModel;

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMFLogging, HMAccessoryCapabilities, HMResidentCapabilities, NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDDeviceCapabilitiesModel *_objectModel;
}

@property (class, readonly) HMDDeviceCapabilities *deviceCapabilities;
@property (class, readonly) BOOL supportsLocalization;
@property (class, readonly) BOOL supportsHomeApp;
@property (class, readonly) BOOL supportsIntentDonation;
@property (class, readonly) BOOL supportsSymptomsHandler;
@property (class, readonly) BOOL supportsDeviceLock;
@property (class, readonly) BOOL supportsCustomerReset;
@property (class, readonly) BOOL isAppleMediaAccessory;
@property (class, readonly) unsigned long long appleMediaAccessoryVariant;
@property (class, readonly) BOOL requiresHomePodMiniPairing;
@property (class, readonly) BOOL requiresB620Pairing;
@property (class, readonly) BOOL supportsTargetControllerAutoConfigure;
@property (class, readonly) BOOL supportsCameraSnapshotRequestViaRelay;
@property (class, readonly) BOOL supportsUserNotifications;
@property (class, readonly) BOOL supportsDismissUserNotificationAndDialog;
@property (class, readonly) BOOL supportsReceivingRemoteCameraStream;
@property (class, readonly) BOOL supportsBidirectionalAudioForCameraStreaming;
@property (class, readonly) BOOL supportsSyncingToSharedUsers;
@property (class, readonly) BOOL supportsStereoPairingV1;
@property (class, readonly) BOOL supportsStereoPairingV2;
@property (class, readonly) BOOL supportsStereoPairingV3;
@property (class, readonly) BOOL supportsHostingLocalTempAndHumiditySensor;
@property (class, readonly) BOOL supportsRemoteAccess;
@property (class, readonly) BOOL supportsAddingAccessory;
@property (class, readonly) BOOL supportsBackboard;
@property (class, readonly, getter=isCompanionCapable) BOOL companionCapable;
@property (class, readonly) BOOL supportsHomeKitDataStream;
@property (class, readonly) BOOL supportsBulletinBoard;
@property (class, readonly) BOOL supportsSiriUnsecuringActionsWithNoPasscode;
@property (class, readonly) BOOL supportsSiriUnsecuringActionsWithWatchAuth;
@property (class, readonly) BOOL supportsAudioDestinationControllerCreation;
@property (class, readonly) BOOL supportsAudioDestinationCreation;
@property (class, readonly) unsigned long long supportedPairingCapabilities;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMessagedHomePodSettingsFeatureEnabled) BOOL messagedHomePodSettingsFeatureEnabled;
@property (copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly, nonatomic) BOOL supportsKeychainSync;
@property (readonly, nonatomic) BOOL supportsDeviceSetup;
@property (readonly, nonatomic) BOOL supportsKeyTransferClient;
@property (readonly, nonatomic) BOOL supportsKeyTransferServer;
@property (readonly, nonatomic) BOOL supportsStandaloneMode;
@property (readonly, nonatomic) BOOL supportsCloudDataSync;
@property (readonly, nonatomic) BOOL supportsWholeHouseAudio;
@property (readonly, nonatomic) BOOL supportsAssistantAccessControl;
@property (readonly, nonatomic, getter=isResidentCapable) BOOL residentCapable;
@property (readonly, nonatomic, getter=isRemoteGatewayCapable) BOOL remoteGatewayCapable;
@property (readonly, nonatomic) BOOL supportsHomeInvitation;
@property (readonly, nonatomic) BOOL supportsTargetControl;
@property (readonly, nonatomic) BOOL supportsMultiUser;
@property (readonly, nonatomic) BOOL supportsHomeLevelLocationServiceSetting;
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property (readonly, nonatomic) BOOL supportsCameraRecording;
@property (readonly, nonatomic) BOOL supportsRouterManagement;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsCameraSignificantEventNotifications;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsCameraActivityZones;
@property (readonly, nonatomic) BOOL supportsMusicAlarm;
@property (readonly, nonatomic) BOOL supportsFaceClassification;
@property (readonly, nonatomic) BOOL supportsNaturalLighting;
@property (readonly, nonatomic) BOOL supportsIDSActivityMonitorPresence;
@property (readonly, nonatomic) BOOL supportsCameraRecordingReachabilityNotifications;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsAudioAnalysis;
@property (readonly, nonatomic) BOOL supportsDropIn;
@property (readonly) BOOL supportsThirdPartyMusic;
@property (readonly) BOOL supportsPreferredMediaUser;
@property (readonly) BOOL supportsDoorbellChime;
@property (readonly) BOOL supportsUserMediaSettings;
@property (readonly, nonatomic) BOOL supportsThreadBorderRouter;
@property (readonly) BOOL supportsSiriEndpointSetup;
@property (readonly) BOOL supportsHomeHub;
@property (readonly, nonatomic) BOOL supportsWakeOnLAN;
@property (readonly, nonatomic) BOOL supportsLockNotificationContext;
@property (readonly, nonatomic) BOOL supportsCoordinationDoorbellChime;
@property (readonly, nonatomic) BOOL supportsWalletKey;
@property (readonly, nonatomic) BOOL supportsCameraPackageDetection;
@property (readonly, nonatomic) BOOL supportsAccessCodes;
@property (readonly, nonatomic) BOOL supportsCHIP;
@property (readonly, nonatomic) BOOL supportsUnifiedMediaNotifications;
@property (readonly, nonatomic) BOOL supportsManagedConfigurationProfile;
@property (readonly, nonatomic) BOOL supportsCaptiveNetworks;
@property (readonly, nonatomic) BOOL supportsModernTransport;
@property (readonly, nonatomic) BOOL supportsResidentFirstAccessoryCommunication;
@property (readonly, nonatomic) BOOL supportsMessagedHomePodSettings;
@property (readonly, nonatomic) BOOL supportsCustomMediaApplicationDestination;
@property (readonly, nonatomic) BOOL supportsThreadNetworkCredentialSharing;
@property (readonly) BOOL supportsRMVonAppleTV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, nonatomic) BOOL isResidentCapable;

+ (id)logCategory;
+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)initWithObjectModel:(id)a0;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)initWithProductInfo:(id)a0;
- (id)initWithProductInfo:(id)a0 mobileGestaltClient:(id)a1;
- (id)initWithProductInfo:(id)a0 mobileGestaltClient:(id)a1 homekitVersion:(id)a2;
- (id)modelBackedObjects;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end