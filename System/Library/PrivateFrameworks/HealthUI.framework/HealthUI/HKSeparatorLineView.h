@class UIColor;

@interface HKSeparatorLineView : UIView

@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double separatorThickness;
@property (nonatomic) long long dashStyle;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

+ (id)_hkecg_separatorView;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (BOOL)_isVertical;
- (void)_applyStyleToContext:(struct CGContext { } *)a0;

@end
