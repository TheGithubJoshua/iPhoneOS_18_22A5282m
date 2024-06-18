@class NSArray;

@interface RBCompoundAllDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (unsigned long long)hash;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithRestrictions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
