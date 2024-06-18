@interface SKUIOnboardingCircleViewAccessibility : __SKUIOnboardingCircleViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityScrollToVisible;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (void)_accessibilityActivateCircle;
- (id)_accessibilityPhysicalCirclesViewSuperview;
- (BOOL)_accessibilityRemoveCircle;

@end
