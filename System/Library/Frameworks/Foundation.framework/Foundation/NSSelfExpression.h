@interface NSSelfExpression : NSExpression

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;
+ (BOOL)_allowsEvaluation;

- (id)initWithCoder:(id)a0;
- (id)_initPrivate;
- (id)init;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (BOOL)_tryRetain;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (oneway void)release;
- (unsigned long long)hash;
- (id)autorelease;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)_isDeallocating;

@end
