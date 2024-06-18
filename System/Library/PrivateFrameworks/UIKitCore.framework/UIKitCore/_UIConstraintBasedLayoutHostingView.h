@class UIView;

@interface _UIConstraintBasedLayoutHostingView : UIView {
    BOOL _hasAddedConstraints;
}

@property (retain, nonatomic) UIView *hostedView;

+ (BOOL)requiresConstraintBasedLayout;

- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)a0;
- (void)willRemoveSubview:(id)a0;
- (void)updateConstraints;
- (void)_setFrameWithAlignmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutMetricsInvalidatedForHostedView;
- (void)constraintsDidChangeInEngine:(id)a0;
- (BOOL)_layoutHeightDependsOnWidth;
- (id)initWithHostedView:(id)a0;

@end
