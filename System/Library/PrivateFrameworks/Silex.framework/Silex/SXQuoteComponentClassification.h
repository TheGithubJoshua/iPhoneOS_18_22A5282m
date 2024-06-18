@interface SXQuoteComponentClassification : SXDefaultTextComponentClassification

+ (id)roleString;
+ (id)typeString;
+ (int)role;

- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (id)layoutRules;

@end
