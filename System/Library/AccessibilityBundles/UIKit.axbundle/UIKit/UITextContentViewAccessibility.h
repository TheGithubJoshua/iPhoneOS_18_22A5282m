@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)keyboardInputChanged:(id)a0;
- (BOOL)keyboardInput:(id)a0 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)keyboardInputChangedSelection:(id)a0;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryHeaderViews;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_accessibilityShouldAnnounceFontInfo;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilitySetShouldUpdateCache:(BOOL)a0;
- (BOOL)_accessibilityShouldUpdateTextCache;

@end
