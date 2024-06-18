@class NSString, NSNumber, NSArray;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate> {
    NSString *__accessibilityContent;
    NSNumber *__accessibilityRespondsToUserInteractionOverride;
    NSArray *_links;
    struct _NSRange { unsigned long long location; unsigned long long length; } _textRange;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityElements;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityActivate;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;
- (void)setAccessibilityRespondsToUserInteraction:(BOOL)a0;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint:(id)a0;

@end
