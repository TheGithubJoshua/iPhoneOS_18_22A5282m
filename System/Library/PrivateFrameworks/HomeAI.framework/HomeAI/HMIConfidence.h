@class NSArray;

@interface HMIConfidence : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *levelThresholds;
@property (readonly) long long level;
@property (readonly) double value;

- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithValue:(double)a0 levelThresholds:(id)a1;

@end
