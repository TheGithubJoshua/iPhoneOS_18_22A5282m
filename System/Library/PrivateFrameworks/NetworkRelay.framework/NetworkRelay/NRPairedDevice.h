@class NRDevicePairingTarget, NRDeviceIdentifier;

@interface NRPairedDevice : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NRDevicePairingTarget *device;
@property (copy, nonatomic) NRDeviceIdentifier *nrDeviceIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
