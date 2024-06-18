@interface RUIWebContainerViewAccessibility : __RUIWebContainerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (float)_accessibilityActivationDelay;
- (id)_axSubviewText;

@end
