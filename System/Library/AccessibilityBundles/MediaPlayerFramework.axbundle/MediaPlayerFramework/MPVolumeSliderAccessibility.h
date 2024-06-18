@interface MPVolumeSliderAccessibility : __MPVolumeSliderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_layoutVolumeWarningView;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void)accessibilityDecrement;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
