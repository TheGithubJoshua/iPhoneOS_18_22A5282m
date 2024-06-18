@interface SXDefaultStripGalleryComponentClassification : SXComponentClassification

+ (id)roleString;
+ (id)typeString;
+ (int)role;

- (id)accessibilityContextualLabel;
- (BOOL)hasAffiliationWithClassification:(id)a0 forDirection:(long long)a1;
- (Class)componentModelClass;
- (id)layoutRules;

@end
