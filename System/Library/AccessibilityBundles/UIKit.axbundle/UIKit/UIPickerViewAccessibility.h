@interface UIPickerViewAccessibility : __UIPickerViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)canBecomeFocused;
- (void)reloadAllComponents;
- (double)scrollAnimationDuration;
- (unsigned long long)_accessibilityAutomationType;
- (long long)_accessibilityPickerType;

@end
