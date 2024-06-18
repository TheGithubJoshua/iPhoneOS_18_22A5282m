@interface CAMTopBarAccessibility : __CAMTopBarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)collapseMenuButton:(id)a0 animated:(BOOL)a1;
- (void)expandMenuButton:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityOnlyComparesByXAxis;

@end
