@interface SXAdvertisementComponentClassification : SXComponentClassification

+ (id)roleString;
+ (id)typeString;
+ (int)role;

- (Class)componentModelClass;
- (id)layoutRules;
- (BOOL)isCollapsible;

@end
