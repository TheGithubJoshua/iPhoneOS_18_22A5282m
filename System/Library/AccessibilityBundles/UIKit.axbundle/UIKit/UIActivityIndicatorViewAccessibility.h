@interface UIActivityIndicatorViewAccessibility : __UIActivityIndicatorViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsNotFirstElement;

@end
