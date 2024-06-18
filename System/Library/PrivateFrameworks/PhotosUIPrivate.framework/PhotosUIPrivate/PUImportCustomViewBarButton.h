@class NSString, UIView;

@interface PUImportCustomViewBarButton : UIButton

@property (readonly, nonatomic) UIView *customView;
@property (copy, nonatomic) NSString *customAccessibilityLabel;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)updateConstraints;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithCustomView:(id)a0;

@end
