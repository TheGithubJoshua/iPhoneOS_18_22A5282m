@interface SXIllustratorComponentClassification : SXDefaultTextComponentClassification

+ (id)accessibilityContextualLabel;
+ (id)roleString;
+ (id)typeString;
+ (int)role;

- (id)textRules;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;

@end
