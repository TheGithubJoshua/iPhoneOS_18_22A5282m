@interface PXGPageControlAccessibility : __PXGPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (id)_axPageControl;

@end
