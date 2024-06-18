@interface UIDatePickerContentViewAccessibility : __UIDatePickerContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityDatePickerComponentType;

@end
