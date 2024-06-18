@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime

+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)lifetimeType;

@end
