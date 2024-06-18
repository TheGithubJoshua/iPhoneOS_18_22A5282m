@interface PLProgressViewAccessibility : __PLProgressViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)setPercentComplete:(float)a0;
- (id)accessibilityLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateValueBasedOnPercentComplete:(float)a0;

@end
