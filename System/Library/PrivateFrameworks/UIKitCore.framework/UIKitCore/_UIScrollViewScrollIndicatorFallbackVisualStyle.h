@interface _UIScrollViewScrollIndicatorFallbackVisualStyle : NSObject <_UIScrollViewScrollIndicatorVisualStyle>

@property (readonly, nonatomic) double staticDimensionSize;
@property (readonly, nonatomic) double staticDimensionExpandedSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } cursorHitTestingInsets;
@property (readonly, nonatomic) BOOL clipsToBounds;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestingRectForIndicatorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)fillView;
- (struct { double x0; double x1; double x2; double x3; unsigned long long x4; })valuesForLayoutSizeAnimationWhenExpanding:(BOOL)a0;
- (double)fillViewCornerRadiusForStaticDimensionSize:(double)a0;
- (id)colorForIndicatorStyle:(long long)a0 expanded:(BOOL)a1;
- (id)fillViewRoundedCornerCurve;

@end
