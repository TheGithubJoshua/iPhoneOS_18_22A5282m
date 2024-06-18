@interface UISwitchAccessibility : __UISwitchAccessibility_super

@property (nonatomic, setter=_accessibilitySetIsAccessibleViaTableViewCell:) BOOL _accessibilityIsAccessibleViaTableViewCell;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)_viewToAddFocusLayer;
- (unsigned long long)accessibilityTraits;
- (void)setEnabled:(BOOL)a0;
- (void)_keyboardActivate;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityIsMacVisualAppearance;
- (id)_accessibilityKeyCommands;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (void)_fkaSwitchOff;
- (void)_fkaSwitchOn;

@end
