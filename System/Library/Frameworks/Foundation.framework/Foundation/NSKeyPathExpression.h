@interface NSKeyPathExpression : NSFunctionExpression

- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (unsigned long long)expressionType;
- (id)keyPath;
- (id)predicateFormat;
- (id)initWithKeyPath:(id)a0;
- (id)pathExpression;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithOperand:(id)a0 andKeyPath:(id)a1;

@end
