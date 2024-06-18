@class NSSet;

@interface RBSCompoundAnyPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processIdentifiers;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
