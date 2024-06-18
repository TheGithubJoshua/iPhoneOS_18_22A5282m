@interface _UIPopoverSlidingChromeView : UIPopoverBackgroundView

+ (double)arrowBase;
+ (double)arrowHeight;
+ (double)cornerRadius;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;

- (void)setArrowDirection:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_shadowOffset;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (void)setArrowOffset:(double)a0;
- (double)_shadowOpacity;
- (void)layoutSubviews;
- (double)_shadowRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_shadowInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentViewInsets;
- (id)_shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowDirection:(unsigned long long)a1;

@end
