@class NSDictionary, NSPredicateOperator;

@interface AVAssetVariantChannelCountPredicate : NSPredicate {
    long long _channelcount;
    NSDictionary *_mediaSelectionOptionPlist;
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
- (id)initWithChannelCount:(long long)a0 mediaSelectionOption:(id)a1 operatorType:(unsigned long long)a2;

@end
