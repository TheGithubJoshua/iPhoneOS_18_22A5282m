@interface BTSDevice : NSObject

@property (nonatomic, getter=isHealthDevice) BOOL healthDevice;
@property (readonly, nonatomic, getter=isMyDevice) BOOL myDevice;
@property (nonatomic, getter=isCTKDDevice) BOOL ctkdDevice;
@property (nonatomic, getter=isManagedByWallet) BOOL managedByWallet;
@property (nonatomic, getter=doesSupportBackgroundNI) BOOL supportsBackgroundNI;

- (BOOL)isiPad;
- (id)productName;
- (void)disconnect;
- (BOOL)ancsAuthorized;
- (long long)compare:(id)a0;
- (BOOL)connected;
- (unsigned long long)hash;
- (id)name;
- (BOOL)connect;
- (BOOL)isEqual:(id)a0;
- (BOOL)paired;
- (id)identifier;
- (void)unpair;
- (BOOL)isHIDDevice;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isTemporaryPairedDevice;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;

@end
