@class NSArray, NSString, NSSet, TUCTCapabilityInfo;

@interface TUCallCapabilities : NSObject

@property (class, readonly, nonatomic) BOOL areRelayCallingFeaturesEnabled;
@property (class, readonly, nonatomic) BOOL supportsPrimaryCalling;
@property (class, readonly, nonatomic) BOOL supportsBasebandCalling;
@property (class, readonly, nonatomic) int telephonyCallSupport;
@property (class, readonly, nonatomic) int faceTimeAudioCallSupport;
@property (class, readonly, nonatomic) int faceTimeVideoCallSupport;
@property (class, readonly, nonatomic) BOOL supportsDisplayingTelephonyCalls;
@property (class, readonly, nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls;
@property (class, readonly, nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls;
@property (class, readonly, nonatomic, getter=isDirectTelephonyCallingCurrentlyAvailable) BOOL directTelephonyCallingCurrentlyAvailable;
@property (class, readonly, nonatomic, getter=isDirectFaceTimeAudioCallingCurrentlyAvailable) BOOL directFaceTimeAudioCallingCurrentlyAvailable;
@property (class, readonly, nonatomic, getter=isDirectFaceTimeVideoCallingCurrentlyAvailable) BOOL directFaceTimeVideoCallingCurrentlyAvailable;
@property (class, readonly, nonatomic) BOOL accountsMatchForSecondaryCalling;
@property (class, readonly, nonatomic) BOOL accountsSupportSecondaryCalling;
@property (class, readonly, nonatomic) NSArray *cloudCallingDevices;
@property (class, readonly, nonatomic) BOOL supportsRelayCalling;
@property (class, nonatomic, getter=isRelayCallingEnabled) BOOL relayCallingEnabled;
@property (class, readonly, nonatomic) BOOL supportsTelephonyRelayCalling;
@property (class, readonly, nonatomic) BOOL supportsFaceTimeAudioRelayCalling;
@property (class, readonly, nonatomic) BOOL supportsFaceTimeVideoRelayCalling;
@property (class, readonly, nonatomic) BOOL supportsRelayingToOtherDevices;
@property (class, readonly, nonatomic) int relayCallingAvailability;
@property (class, readonly, nonatomic) NSString *outgoingRelayCallerID;
@property (class, readonly, copy, nonatomic) NSSet *senderIdentityCapabilities;
@property (class, readonly, nonatomic) BOOL supportsSimultaneousVoiceAndData;
@property (class, readonly, nonatomic) BOOL areCTCapabilitiesValid;
@property (class, readonly, nonatomic, getter=isCSCallingCurrentlyAvailable) BOOL csCallingCurrentlyAvailable;
@property (class, readonly, nonatomic) BOOL supportsWiFiCalling;
@property (class, readonly, nonatomic, getter=isWiFiCallingEnabled) BOOL wiFiCallingEnabled;
@property (class, readonly, nonatomic, getter=isWiFiCallingRoamingEnabled) BOOL wiFiCallingRoamingEnabled;
@property (class, readonly, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (class, readonly, nonatomic, getter=isWiFiCallingCurrentlyAvailable) BOOL wiFiCallingCurrentlyAvailable;
@property (class, readonly, nonatomic) BOOL supportsWiFiEmergencyCalling;
@property (class, readonly, nonatomic) BOOL supportsVoLTECalling;
@property (class, readonly, nonatomic, getter=isVoLTECallingEnabled) BOOL voLTECallingEnabled;
@property (class, readonly, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (class, readonly, nonatomic, getter=isVoLTECallingCurrentlyAvailable) BOOL voLTECallingCurrentlyAvailable;
@property (class, readonly, nonatomic) BOOL supportsThumperCalling;
@property (class, readonly, nonatomic, getter=isThumperCallingAllowedForCurrentDevice) BOOL thumperCallingAllowedForCurrentDevice;
@property (class, readonly, nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (class, readonly, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (class, readonly, nonatomic, getter=isThumperCallingCurrentlyAvailable) BOOL thumperCallingCurrentlyAvailable;
@property (class, readonly, nonatomic) BOOL supportsThumperCallingOverCellularData;
@property (class, readonly, nonatomic, getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice) BOOL thumperCallingAllowedOnDefaultPairedSecondaryDevice;
@property (class, readonly, nonatomic, getter=isEmergencyCallbackModeEnabled) BOOL emergencyCallbackModeEnabled;
@property (class, readonly, nonatomic, getter=isEmergencyCallbackPossible) BOOL emergencyCallbackPossible;
@property (class, readonly, nonatomic) BOOL supportsTelephonyCalls;
@property (class, readonly, nonatomic) BOOL supportsFaceTimeAudioCalls;
@property (class, readonly, nonatomic) BOOL supportsFaceTimeVideoCalls;
@property (class, readonly, nonatomic) BOOL canAttemptTelephonyCallsWithoutCellularConnection;
@property (class, readonly, nonatomic) BOOL canAttemptEmergencyCallsWithoutCellularConnection;

+ (BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)a0;
+ (id)senderIdentityCapabilitiesWithUUID:(id)a0;
+ (void)addDelegate:(id)a0 queue:(id)a1;
+ (void)requestPinFromPrimaryDevice;
+ (void)setWiFiCallingRoamingEnabled:(BOOL)a0;
+ (void)setVoLTECallingEnabled:(BOOL)a0;
+ (BOOL)supportsHostingFaceTimeVideoCalls;
+ (void)removeDelegate:(id)a0;
+ (void)setThumperCallingAllowed:(BOOL)a0 onSecondaryDeviceWithID:(id)a1;
+ (void)setThumperCallingAllowed:(BOOL)a0 onSecondaryDeviceWithID:(id)a1 forSenderIdentityWithUUID:(id)a2;
+ (void)invalidateAndRefreshThumperCallingProvisioningURL;
+ (BOOL)isFaceTimeAudioAvailable;
+ (id)client;
+ (void)_sendNotificationsAndCallbacksAfterRunningBlock:(id /* block */)a0;
+ (BOOL)isRelayCallingEnabledForDeviceWithID:(id)a0;
+ (BOOL)supportsHostingFaceTimeAudioCalls;
+ (void)setRelayCallingEnabled:(BOOL)a0 forDeviceWithID:(id)a1;
+ (void)setThumperCallingEnabled:(BOOL)a0;
+ (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)a0;
+ (void)cancelPinRequestFromPrimaryDevice;
+ (BOOL)canAttemptEmergencyCallsWithoutCellularConnectionWithUUID:(id)a0;
+ (BOOL)supportsHostingTelephonyCalls;
+ (id)debugDescription;
+ (void)setWiFiCallingEnabled:(BOOL)a0;
+ (BOOL)isFaceTimeVideoAvailable;
+ (void)endEmergencyCallbackMode;
+ (void)invalidateAndRefreshWiFiCallingProvisioningURL;
+ (BOOL)canAttemptTelephonyCallsWithoutCellularConnectionWithSenderIdentityCapabilities:(id)a0;
+ (id)_senderIdentityCapabilitiesByUUID;
+ (void)initializeCachedValues;

@end