@interface CEKSliderAccessibility : __CEKSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (double)_axGetDeltaForCurrentValue:(double)a0 toIncrement:(BOOL)a1;
- (double)_axNumberOfTickSegments;

@end
