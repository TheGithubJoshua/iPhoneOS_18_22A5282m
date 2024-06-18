@interface UISegmentedControlAccessibility : __UISegmentedControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (unsigned long long)accessibilityTraits;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (BOOL)shouldGroupAccessibilityChildren;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityHasNativeFocus;
- (id)_accessibilityNativeFocusPreferredElement;
- (BOOL)_accessibilityShouldIncludeArrowKeyCommandsForDirectionalFocusMovement;
- (BOOL)_accessibilitySupportsContentSizeCategory:(id)a0;

@end
