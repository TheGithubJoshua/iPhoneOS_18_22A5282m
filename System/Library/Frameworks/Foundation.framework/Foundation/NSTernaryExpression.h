@class NSPredicate, NSExpression;

@interface NSTernaryExpression : NSExpression {
    NSPredicate *_predicate;
    NSExpression *_trueExpression;
    NSExpression *_falseExpression;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (void)allowEvaluation;
- (void)encodeWithCoder:(id)a0;
- (id)predicate;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)falseExpression;
- (id)initWithPredicate:(id)a0 trueExpression:(id)a1 falseExpression:(id)a2;
- (id)trueExpression;

@end
