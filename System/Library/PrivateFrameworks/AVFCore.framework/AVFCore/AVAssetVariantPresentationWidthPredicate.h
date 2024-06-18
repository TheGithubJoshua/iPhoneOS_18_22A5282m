@class NSPredicateOperator;

@interface AVAssetVariantPresentationWidthPredicate : NSPredicate {
    double _width;
    NSPredicateOperator *_operator;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (void)dealloc;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)initWithPresentationWidth:(double)a0 operatorType:(unsigned long long)a1;

@end
