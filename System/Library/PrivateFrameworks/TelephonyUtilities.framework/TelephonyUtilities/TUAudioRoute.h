@class NSString, NSDictionary;

@interface TUAudioRoute : TURoute

@property (readonly, copy, nonatomic) NSString *avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)deviceType;
- (BOOL)isA2DPRoute;
- (id)initWithDictionary:(id)a0;
- (BOOL)supportsSharePlay;
- (BOOL)isCarAudio;
- (BOOL)isBluetooth;
- (BOOL)isWirelessHeadset;
- (BOOL)isBluetoothLE;
- (BOOL)isSpeaker;
- (BOOL)isInEarDetectionEnabled;
- (BOOL)isReceiver;
- (BOOL)isPreferred;
- (BOOL)_routeTypeEqualTo:(id)a0;
- (BOOL)isSiblingRoutePresent;
- (BOOL)isWiredHeadset;
- (BOOL)supportsHighQualityVoiceWithMedia;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)bluetoothEndpointType;
- (BOOL)isCurrentlyPicked;
- (BOOL)isBluetoothManaged;
- (BOOL)isInEarDetectionSupported;
- (BOOL)isHandset;
- (BOOL)isWiredHeadphones;
- (id)customDescription;
- (BOOL)isPreferredAndActive;
- (id)identifiersOfOtherConnectedDevices;
- (BOOL)isDefaultRoute;
- (BOOL)isPartnerRouteRoutable;
- (BOOL)isAirTunes;

@end
