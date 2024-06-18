@interface UINavigationBarAccessibility_UIViewAccessibilityAdditions : __UINavigationBarAccessibility_UIViewAccessibilityAdditions_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityActivate;
- (id)accessibilityLanguage;
- (BOOL)accessibilityPerformEscape;
- (BOOL)__accessibilitySupportsActivateAction;
- (id)_accessibilityAXAttributedLabel;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityServesAsFirstElement;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityNavigationViewInfo;
- (void)_accessibilitySetNavigationViewInfo:(id)a0;
- (BOOL)_accessibilityUIViewCanPerformEscapeAction;

@end
