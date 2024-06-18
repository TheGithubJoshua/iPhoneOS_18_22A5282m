@interface PUReviewScreenControlBarButton : UIButton

@property (nonatomic) BOOL useCompactSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)_selectedIndicatorAlpha;
- (void)layoutSubviews;
- (double)_padding;

@end
