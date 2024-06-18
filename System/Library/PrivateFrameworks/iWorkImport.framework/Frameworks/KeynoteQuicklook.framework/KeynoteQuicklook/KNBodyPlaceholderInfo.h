@interface KNBodyPlaceholderInfo : KNPlaceholderInfo

+ (id)mixableObjectClasses;

- (id)typeName;
- (int)kind;
- (void)acceptVisitor:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (id)initWithKNPlaceholderInfo:(id)a0;

@end
