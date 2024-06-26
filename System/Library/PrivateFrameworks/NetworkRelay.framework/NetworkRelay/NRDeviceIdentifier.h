@class NSUUID;

@interface NRDeviceIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *nrDeviceIdentifier;
@property (nonatomic) BOOL ephemeral;

+ (id)newDeviceIdentifierWithBluetoothUUID:(id)a0;
+ (id)copyBestTestingDeviceIdentifier;
+ (id)newDeviceIdentifierWithIDSDeviceID:(id)a0;
+ (id)newEphemeralDeviceIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0;
- (BOOL)isEphemeral;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
