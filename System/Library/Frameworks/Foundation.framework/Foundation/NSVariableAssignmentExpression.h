@class NSExpression, NSVariableExpression;

@interface NSVariableAssignmentExpression : NSExpression {
    NSVariableExpression *_assignmentVariable;
    NSExpression *_subexpression;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (void)allowEvaluation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)variable;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)assignmentVariable;
- (id)initWithAssignmentExpression:(id)a0 expression:(id)a1;
- (id)initWithAssignmentVariable:(id)a0 expression:(id)a1;
- (id)subexpression;

@end
