@class NSString, NSDictionary;

@interface TRIRolloutAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *rampId;
@property (readonly, nonatomic) NSDictionary *factorPackIds;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 rampId:(id)a2 factorPackIds:(id)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
