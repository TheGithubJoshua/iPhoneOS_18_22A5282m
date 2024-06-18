@interface SKUIIndexBarControlAccessibility : __SKUIIndexBarControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityDecrement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityFlowToElements;
- (void)_sendSelectionForTouch:(id)a0 withEvent:(id)a1;
- (void)_accessibilityBumpValue:(BOOL)a0;
- (BOOL)_accessibilityMoveToIndexPath:(id)a0;
- (long long)_accessibilityTableIndexAdjustment;

@end
