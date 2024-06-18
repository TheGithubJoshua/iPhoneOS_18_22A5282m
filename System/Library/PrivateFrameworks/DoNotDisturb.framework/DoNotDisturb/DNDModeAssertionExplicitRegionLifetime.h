@class CLCircularRegion;

@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) CLCircularRegion *region;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithRegion:(id)a0;
- (unsigned long long)lifetimeType;

@end
