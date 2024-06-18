@interface AXPUAdjustmentSlider : UIAccessibilityElement

- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (id)_accessibilityUserTestingElementBaseType;
- (void)_axAdjustValue:(BOOL)a0;
- (id)_axContainerCollectionView;
- (id)_axAdjustmentInfo;
- (id)_axContainerViewController;
- (id)_axContainingSelectedIndexPath;
- (id)_axDataSource;
- (long long)_axPreviousSelectedIndexPathSection;
- (id)_axSelectedAdjustmentCell;
- (void)_setAXPreviousSelectedIndexPathSection:(long long)a0;

@end
