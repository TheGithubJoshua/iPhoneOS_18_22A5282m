@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;

- (id)init;
- (id)focusGroupIdentifier;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (id)initWithAccessibilityContainer:(id)a0;
- (id)accessibilityHint;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityLanguage;
- (id)accessibilityPath;
- (id)accessibilityValue;
- (BOOL)_accessibilityIsFKARunningForFocusItem;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingVisibleAncestor;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_accessibilitySetValue:(id)a0;
- (float)_accessibilityActivationDelay;
- (id)_accessibilityAutomaticIdentifier;
- (BOOL)_accessibilityProvidesOwnFrame;
- (BOOL)_accessibilitySetNativeFocus;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilityUsesFrameInContainerSpace;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;

@end
