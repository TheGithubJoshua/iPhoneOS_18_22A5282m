@interface MPAddKeepLocalControlAccessibility : __MPAddKeepLocalControlAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)setControlStatus:(struct MPAddKeepLocalControlStatus { long long x0; double x1; })a0 animated:(BOOL)a1;
- (id)_accessibilityCustomActionLabel;
- (id)_accessibilityCustomActionLabelForControlStatus:(long long)a0;
- (id)_accessibilityLabelForStatusType:(long long)a0;
- (void)_accessibilitySetCustomActionLabel:(id)a0;
- (id)_accessibilityValueForStatusType:(long long)a0 andDownloadProgress:(double)a1;

@end
