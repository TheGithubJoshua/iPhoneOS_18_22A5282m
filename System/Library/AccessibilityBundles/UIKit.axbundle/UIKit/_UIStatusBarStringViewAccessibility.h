@interface _UIStatusBarStringViewAccessibility : ___UIStatusBarStringViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)_accessibilityIsNonDismissableStatusBarElement;
- (BOOL)_accessibilityInTopLevelTabLoop;

@end
