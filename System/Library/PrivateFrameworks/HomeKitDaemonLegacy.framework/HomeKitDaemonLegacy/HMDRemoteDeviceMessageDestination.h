@class HMDDeviceHandle, HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination

@property (copy, nonatomic) HMDDeviceHandle *preferredHandle;
@property (readonly, nonatomic) HMDDevice *device;

+ (id)shortDescription;

- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)privateDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithTarget:(id)a0 device:(id)a1;
- (id)remoteDestinationString;

@end
