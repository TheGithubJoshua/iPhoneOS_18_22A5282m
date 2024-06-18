@interface UIPageControlAccessibility : __UIPageControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)setCurrentPage:(long long)a0;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityDecrement;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (BOOL)_accessibilityRetainsFocusOnScreenChange;
- (void)_accessibilityCurrentPageDidChange;
- (unsigned int)_accessibilityMediaAnalysisOption;

@end
