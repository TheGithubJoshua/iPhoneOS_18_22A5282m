@interface RBDomainRestriction : NSObject <NSCopying>

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)_init;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
