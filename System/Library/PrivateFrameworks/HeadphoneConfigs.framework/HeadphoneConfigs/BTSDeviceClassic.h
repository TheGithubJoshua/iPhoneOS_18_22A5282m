@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {
    BOOL ctkdDevice;
    BOOL managedByWallet;
    BOOL supportsBackgroundNI;
}

@property (readonly, weak, nonatomic) BluetoothDevice *device;

+ (id)deviceWithDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (id)productName;
- (void)disconnect;
- (BOOL)ancsAuthorized;
- (BOOL)connected;
- (id)name;
- (BOOL)connect;
- (void).cxx_destruct;
- (BOOL)paired;
- (id)identifier;
- (BOOL)setUserName:(id)a0;
- (BOOL)magicPaired;
- (void)unpair;
- (BOOL)isHIDDevice;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)doesSupportBackgroundNI;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isHealthDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isManagedByWallet;
- (BOOL)isMyDevice;
- (BOOL)isTemporaryPairedDevice;
- (void)setCtkdDevice:(BOOL)a0;
- (void)setManagedByWallet:(BOOL)a0;
- (void)setSupportsBackgroundNI:(BOOL)a0;
- (BOOL)supportsANCS;

@end
