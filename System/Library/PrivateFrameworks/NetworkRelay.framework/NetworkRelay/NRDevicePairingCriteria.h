@class NSNumber;

@interface NRDevicePairingCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned char pairingTransport;
@property (retain, nonatomic) NSNumber *rssi;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
