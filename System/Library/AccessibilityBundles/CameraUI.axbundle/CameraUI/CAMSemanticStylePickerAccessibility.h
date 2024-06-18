@interface CAMSemanticStylePickerAccessibility : __CAMSemanticStylePickerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (id)_axAnnouncementValue;
- (void)_axChangeValueInDirection:(long long)a0;
- (id)_axSemanticStyle;

@end
