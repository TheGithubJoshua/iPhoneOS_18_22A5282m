@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long roundTripTime;
@property (nonatomic) long long RSSI;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) long long SNR;
@property (nonatomic) unsigned long long coreID;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRangingMeasurement:(id)a0;

@end