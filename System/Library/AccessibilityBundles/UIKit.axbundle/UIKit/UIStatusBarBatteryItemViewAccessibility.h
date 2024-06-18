@interface UIStatusBarBatteryItemViewAccessibility : __UIStatusBarBatteryItemViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
