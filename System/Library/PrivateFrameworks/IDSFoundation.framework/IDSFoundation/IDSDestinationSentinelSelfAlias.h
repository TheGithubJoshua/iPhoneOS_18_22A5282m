@interface IDSDestinationSentinelSelfAlias : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
