@class UIView;

@interface AXPlatterContentMockElement : UIAccessibilityElement {
    id _sourceElement;
    UIView *_sourceView;
}

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityRespondsToUserInteraction;
- (id)accessibilityValue;

@end
