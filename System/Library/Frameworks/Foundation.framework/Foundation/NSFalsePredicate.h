@interface NSFalsePredicate : NSPredicate

+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;

- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (oneway void)release;
- (void)allowEvaluation;
- (unsigned long long)hash;
- (id)autorelease;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)_allowsEvaluation;

@end
