@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)keyPath;
- (id)predicateFormat;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)constantValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;

@end
