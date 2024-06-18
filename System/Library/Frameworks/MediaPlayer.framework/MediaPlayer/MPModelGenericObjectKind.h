@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind

@property (readonly, nonatomic) NSDictionary *relationshipKinds;

+ (BOOL)supportsSecureCoding;
+ (id)kindWithRelationshipKinds:(id)a0;
+ (id)identityKind;

- (id)humanDescription;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
