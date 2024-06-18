@class NSNumber;

@interface MTRGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *failSafeExpiryLengthSeconds;
@property (copy, nonatomic) NSNumber *maxCumulativeFailsafeSeconds;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
