@interface UIToolbarAccessibility : __UIToolbarAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityIdentifier;
- (long long)accessibilityContainerType;
- (id)accessibilityLabel;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityFuzzyHitTestElements;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;

@end
