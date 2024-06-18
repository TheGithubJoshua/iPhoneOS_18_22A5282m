@interface CAMModeDialAccessibility : __CAMModeDialAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void)setSelectedMode:(long long)a0 animated:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axCurrentCameraMode;

@end
