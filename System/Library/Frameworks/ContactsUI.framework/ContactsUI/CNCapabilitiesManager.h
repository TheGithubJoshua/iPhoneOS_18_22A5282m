@class NSString, NSMutableDictionary;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {
    BOOL _isListeningToIDSServiceAvailability;
    BOOL _isListeningToIDSQueryController;
    NSMutableDictionary *_destinationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setDefaultCapabilitiesManager:(id)a0;
+ (id)defaultCapabilitiesManager;

- (BOOL)isMessagesAppAvailable;
- (BOOL)isSensitiveUIAllowed;
- (BOOL)_isAppAvailable:(id)a0;
- (BOOL)isEmailConfigured;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (BOOL)hasCellularTelephonyCapability;
- (BOOL)isMailAppAvailable;
- (BOOL)hasTelephonyCapability;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (BOOL)isFaceTimeAudioAvailable;
- (void)removeIDSServiceAvailabilityListener:(id)a0;
- (BOOL)hasVibratorCapability;
- (BOOL)isWeiboServiceAvailable;
- (BOOL)isFaceTimeAppAvailable;
- (BOOL)hasSiriCapability;
- (BOOL)hasCellularDataCapability;
- (id)conferenceURLForPhoneNumber:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasPreviouslyConferencedWithID:(id)a0;
- (BOOL)isPhoneAppAvailable;
- (BOOL)isMMSConfigured;
- (BOOL)areFavoritesAvailable;
- (BOOL)isMadridConfigured;
- (void)idStatusUpdatedForDestinations:(id)a0 service:(id)a1;
- (BOOL)hasSMSCapability;
- (id)conferenceURLForDestinationID:(id)a0;
- (BOOL)hasCellularTelephonyHardwareCapability;
- (BOOL)hasForceTouchCapability;
- (void)dealloc;
- (BOOL)hasAdditionalTextTones;
- (BOOL)hasCameraCapability;
- (BOOL)isConferencingEverGonnaBeAvailable;
- (void)addIDSServiceAvailabilityListener:(id)a0 selector:(SEL)a1;
- (BOOL)isConferencingAvailable;

@end
