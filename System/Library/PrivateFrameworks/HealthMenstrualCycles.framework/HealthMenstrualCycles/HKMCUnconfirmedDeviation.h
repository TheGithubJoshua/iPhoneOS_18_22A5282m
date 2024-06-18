@class NSDictionary, NSString;

@interface HKMCUnconfirmedDeviation : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct { long long start; long long duration; } days;
@property (readonly, nonatomic) NSDictionary *analyticsMetadata;
@property (readonly, copy) NSString *hk_redactedDescription;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 days:(struct { long long x0; long long x1; })a1 analyticsMetadata:(id)a2;

@end
