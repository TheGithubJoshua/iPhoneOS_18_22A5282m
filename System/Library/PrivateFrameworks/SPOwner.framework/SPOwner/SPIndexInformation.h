@class NSUUID, NSDateInterval;

@interface SPIndexInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (nonatomic) unsigned char sequence;
@property (nonatomic) unsigned long long index;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBeaconIdentifier:(id)a0 sequence:(unsigned char)a1 index:(unsigned long long)a2;

@end
