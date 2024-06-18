@interface UISliderAccessibility : __UISliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)_viewToAddFocusLayer;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityNumberValue;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilityAbsoluteValue;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (double)_accessibilityIncreaseAmount:(BOOL)a0;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (void)_accessibilityAnnounceNewValue;

@end
