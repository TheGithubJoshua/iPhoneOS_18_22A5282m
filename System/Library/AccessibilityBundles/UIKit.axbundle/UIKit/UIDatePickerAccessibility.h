@interface UIDatePickerAccessibility : __UIDatePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (BOOL)canBecomeFocused;
- (BOOL)accessibilityPerformEscape;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityIsScannerGroup;

@end
