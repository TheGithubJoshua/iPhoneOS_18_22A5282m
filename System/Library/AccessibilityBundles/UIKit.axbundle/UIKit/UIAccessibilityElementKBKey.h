@class NSArray, UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {
    UIKBTree *_key;
    BOOL _changesOnShiftDown;
    NSArray *_cachedVariantKeys;
}

+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)_accessibilitySecondaryActivate;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (BOOL)_accessibilityDismissAlternativeKeyPicker;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityIsInternationalKeyboardKey;
- (BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
- (id)_accessibilityKeyboardKeyEnteredString;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (BOOL)_accessibilityKeyboardSupportsGestureMode;
- (id)_accessibilitySupportGesturesAttributes;
- (BOOL)_accessibilitySupportsSecondaryActivateAction;
- (id)_accessibilityVariantKeys;
- (BOOL)_accessibilityActivatePanAlternate:(id)a0;
- (BOOL)_performCapsLockDoubleTap;

@end
