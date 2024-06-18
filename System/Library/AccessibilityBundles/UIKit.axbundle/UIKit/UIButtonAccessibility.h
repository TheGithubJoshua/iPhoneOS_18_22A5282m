@interface UIButtonAccessibility : __UIButtonAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)_accessibilityUserTestingChildren;
- (id)_contentForState:(unsigned long long)a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityPath;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityAuditIssuesWithOptions:(id)a0;
- (BOOL)_accessibilityElementHasImage;
- (BOOL)_accessibilityIsMacVisualAppearance;
- (unsigned long long)_accessibilityNativeTraits;
- (BOOL)_accessibilityOverridesInvalidFrames;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityButtonChildrenCombinedFrame;
- (id)_accessibilityButtonMacCatalystPopupButtonCell;
- (id)_accessibilityImagePath;
- (BOOL)_accessibilityIsEmptyShellOfAButton;
- (BOOL)_axButtonTypeIsModernCircle;

@end
