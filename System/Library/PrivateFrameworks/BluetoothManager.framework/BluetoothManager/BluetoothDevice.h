@class NSString;

@interface BluetoothDevice : NSObject {
    NSString *_name;
    NSString *_productName;
    NSString *_address;
    struct BTDeviceImpl { } *_device;
    unsigned int _connectingServiceMask;
}

- (void)setSyncSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (unsigned int)vendorId;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })syncSettings;
- (int)singleClickMode;
- (int)batteryLevel;
- (id)productName;
- (BOOL)setIsHidden:(BOOL)a0;
- (unsigned int)doubleTapCapability;
- (BOOL)setSingleClickMode:(int)a0;
- (BOOL)setDoubleClickMode:(int)a0;
- (id)address;
- (unsigned int)productId;
- (void)disconnect;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (unsigned int)listeningMode;
- (BOOL)isAppleAudioDevice;
- (int)crownRotationDirection;
- (long long)compare:(id)a0;
- (BOOL)setMicMode:(unsigned int)a0;
- (BOOL)connected;
- (void)setDevice:(struct BTDeviceImpl { } *)a0;
- (unsigned int)listeningModeConfigs;
- (BOOL)setListeningModeConfigs:(unsigned int)a0;
- (BOOL)setListeningMode:(unsigned int)a0;
- (id)name;
- (void)connect;
- (int)doubleClickMode;
- (id)description;
- (BOOL)paired;
- (unsigned int)micMode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)setCrownRotationDirection:(int)a0;
- (unsigned int)doubleTapAction;
- (id)syncGroups;
- (void)dealloc;
- (struct BTDeviceImpl { } *)device;
- (unsigned long long)connectedServices;
- (void)setPIN:(id)a0;
- (int)type;
- (BOOL)setDoubleTapAction:(unsigned int)a0;
- (BOOL)setUserName:(id)a0;
- (unsigned int)getAACPCapabilityInteger:(int)a0;
- (BOOL)magicPaired;
- (void)unpair;
- (BOOL)featureCapability:(int)a0;
- (BOOL)setSpatialAudioAllowed:(BOOL)a0;
- (BOOL)setSpatialAudioMode:(unsigned char)a0;
- (BOOL)spatialAudioAllowed;
- (unsigned char)spatialAudioMode;
- (int)getStereoHFPSupport;
- (BOOL)setSpatialAudioConfig:(id)a0 spatialMode:(int)a1 headTracking:(BOOL)a2;
- (BOOL)spatialAudioConfig:(id)a0 spatialMode:(int *)a1 headTracking:(BOOL *)a2;
- (BOOL)isAccessory;
- (id)accessoryInfo;
- (BOOL)inEarDetectEnabled;
- (BOOL)inEarStatusPrimary:(int *)a0 secondary:(int *)a1;
- (BOOL)supportsBatteryLevel;
- (id)getServiceSetting:(unsigned int)a0 key:(id)a1;
- (unsigned int)SendSetupCommand:(unsigned char)a0;
- (unsigned int)clickHoldModes:(struct { int x0; int x1; int x2; int x3; } *)a0;
- (int)getDeviceColor:(unsigned int *)a0;
- (int)accessorySettingFeatureBitMask;
- (int)autoAnswerMode;
- (BOOL)batteryStatus:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } *)a0;
- (unsigned int)clickHoldMode:(int *)a0 rightAction:(int *)a1;
- (BOOL)cloudPaired;
- (unsigned int)doubleTapActionEx:(unsigned int *)a0 rightAction:(unsigned int *)a1;
- (BOOL)getAACPCapabilityBit:(int)a0;
- (int)getBehaviorForHIDDevice;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })getCallManagementConfig;
- (BOOL)getDeviceSoundProfileAllowed;
- (int)getHexDeviceAddress:(struct { unsigned char x0[6]; } *)a0;
- (int)getLowSecurityStatus;
- (unsigned char)getSpatialAudioPlatformSupport;
- (int)getUserSelectedDeviceType;
- (BOOL)isGenuineAirPods;
- (BOOL)isTemporaryPaired;
- (BOOL)setAutoAnswerMode:(int)a0;
- (BOOL)setCallConfig:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; })a0;
- (BOOL)setClickHoldMode:(int)a0 rightMode:(int)a1;
- (BOOL)setClickHoldModes:(struct { int x0; int x1; int x2; int x3; })a0;
- (void)setDeviceSoundProfileAllowed:(BOOL)a0;
- (BOOL)setDoubleTapActionEx:(unsigned int)a0 rightAction:(unsigned int)a1;
- (BOOL)setInEarDetectEnabled:(BOOL)a0;
- (void)setServiceSetting:(unsigned int)a0 key:(id)a1 value:(id)a2;
- (BOOL)setSmartRouteMode:(unsigned char)a0;
- (void)setSyncGroup:(int)a0 enabled:(BOOL)a1;
- (BOOL)setUserSelectedDeviceType:(int)a0;
- (unsigned char)smartRouteMode;
- (BOOL)smartRouteSupport;
- (BOOL)isProController;
- (BOOL)_isNameCached;
- (BOOL)setChimeVolume:(unsigned int)a0;
- (void)_clearName;
- (void)endVoiceCommand;
- (id)gyroInformation;
- (void)acceptSSP:(long long)a0;
- (id)aclUID;
- (unsigned int)chimeVolume;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (id)getAACPCapabilityBits;
- (unsigned int)getConnectingServiceMask;
- (BOOL)getDeviceSoundProfileSupport;
- (BOOL)headTrackingAvailable;
- (id)initWithDevice:(struct BTDeviceImpl { } *)a0 address:(id)a1;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (BOOL)pairedDeviceNameUpdated;
- (id)scoUID;
- (void)setConnectingServicemask:(unsigned int)a0;
- (BOOL)spatialAudioActive;
- (void)startVoiceCommand;
- (BOOL)supportsHS;
- (unsigned int)vendorIdSrc;

@end
