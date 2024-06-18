@interface SXTitleComponentClassification : SXDefaultTextComponentClassification

+ (id)roleString;
+ (id)typeString;
+ (int)role;

- (id)accessibilityContextualLabel;
- (id)textRules;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (BOOL)accessibilitySkippedDuringReadAll;
- (id)accessibilityCustomRotorMembership;
- (id)layoutRules;

@end
