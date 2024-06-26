@class UIView;
@protocol UIAccessibilityElementMockViewDelegateProtocol;

@interface UIAccessibilityElementMockView : UIAccessibilityElement {
    id<UIAccessibilityElementMockViewDelegateProtocol> _delegate;
    long long _subviewIndex;
    UIView *_view;
}

- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (id)_accessibilityUserTestingChildren;
- (BOOL)becomeFirstResponder;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canBecomeFocused;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityCustomActions;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (long long)accessibilityCompareGeometry:(id)a0;
- (id)accessibilityCustomRotors;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityIdentification;
- (id)accessibilityLanguage;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityRespondsToUserInteraction;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void)setAccessibilityContainer:(id)a0;
- (id)_accessibilityUserTestingParent;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (BOOL)_accessibilitySupportsActivateAction;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityScrollToVisible;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilityAbsoluteValue;
- (BOOL)_accessibilityUpdatesSwitchMenu;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityCharacterRangeForPosition:(unsigned long long)a0;
- (BOOL)_accessibilityHasNativeFocus;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityLineRangeForPosition:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { double x0; double x1; })_accessibilityMinScrubberPosition;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (unsigned long long)_accessibilityPositionInDirection:(long long)a0 offset:(unsigned long long)a1 forPosition:(unsigned long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRangeForLineNumberAndColumn:(id)a0;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityUserTestingElementType;
- (id)_accessibilityUserTestingProxyView;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityVisibleTextRange;

@end
