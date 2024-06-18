@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice> {
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl { } *_device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)vendorId;
- (unsigned int)deviceClass;
- (id)address;
- (unsigned int)productId;
- (void)disconnect;
- (BOOL)isServiceSupported:(unsigned int)a0;
- (long long)compare:(id)a0;
- (BOOL)connected;
- (void)setDevice:(struct BTDeviceImpl { } *)a0;
- (id)name;
- (void)connect;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (BOOL)connecting;
- (BOOL)paired;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct BTDeviceImpl { } *)device;
- (unsigned long long)connectedServices;
- (id)identifier;
- (void)setPIN:(id)a0;
- (int)type;
- (void)unpair;
- (void)_clearName;
- (void)acceptSSP:(int)a0;
- (void)connectWithServices:(unsigned int)a0;
- (unsigned long long)connectedServicesCount;
- (id)initWithDevice:(struct BTDeviceImpl { } *)a0 address:(id)a1;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (unsigned int)authorizedServices;
- (BOOL)hasAddress:(id)a0;
- (BOOL)isAppleHIDDevice;
- (BOOL)isNameCached;

@end
