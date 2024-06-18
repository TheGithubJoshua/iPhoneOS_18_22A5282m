@interface SVLearnMoreButton : SVButton

- (id)accessibilityElements;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityLabel;

@end
