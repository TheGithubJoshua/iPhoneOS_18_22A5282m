@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
    unsigned long long _type;
    NSArray *_subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;
+ (id)andPredicateWithSubpredicates:(id)a0;
+ (id)notPredicateWithSubpredicate:(id)a0;
+ (id)_operatorForType:(unsigned long long)a0;
+ (id)orPredicateWithSubpredicates:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (void)allowEvaluation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (void)_acceptSubpredicates:(id)a0 flags:(unsigned long long)a1;
- (id)_copySubpredicateDescription:(id)a0;
- (id)_predicateOperator;
- (id)generateMetadataDescription;
- (id)predicateOperator;

@end
