@class NSString;

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)predicateFormat;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)variable;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)dealloc;

@end
