@interface UIInputSwitcherViewAccessibility : __UIInputSwitcherViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityIdentifier;
- (void)updateSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_segmentControlValueDidChange:(id)a0;
- (BOOL)accessibilityViewIsModal;
- (void)willFadeForSelectionAtIndex:(unsigned long long)a0;

@end
