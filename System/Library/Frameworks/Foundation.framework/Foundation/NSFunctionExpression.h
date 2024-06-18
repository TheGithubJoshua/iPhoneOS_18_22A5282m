@class NSExpression, NSArray;

@interface NSFunctionExpression : NSExpression {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)function;
- (id)initWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)arguments;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (SEL)selector;
- (void)allowEvaluation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)_allowsEvaluation;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithSelector:(SEL)a0 argumentArray:(id)a1;
- (id)operand;
- (id)binaryOperatorForSelector;
- (id)initWithExpressionType:(unsigned long long)a0 operand:(id)a1 selector:(SEL)a2 argumentArray:(id)a3;
- (id)initWithTarget:(id)a0 selectorName:(id)a1 arguments:(id)a2;

@end
