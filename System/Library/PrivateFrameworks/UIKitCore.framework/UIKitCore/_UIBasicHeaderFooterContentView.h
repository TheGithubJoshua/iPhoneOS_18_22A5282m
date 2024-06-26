@class UILabel, NSString, _UIBasicHeaderFooterContentViewConfiguration;

@interface _UIBasicHeaderFooterContentView : UIView <_UIContentView> {
    _UIBasicHeaderFooterContentViewConfiguration *_animatingFromConfiguration;
    _UIBasicHeaderFooterContentViewConfiguration *_animatingToConfiguration;
    double _preferredMaxLayoutWidth;
}

@property (copy, nonatomic) _UIBasicHeaderFooterContentViewConfiguration *configuration;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) BOOL _preventFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithCoder:(id)a0;
- (id)_encodableSubviews;
- (double)_preferredMaxLayoutWidth;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithConfiguration:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (double)_multilineContextWidth;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setMultilineContextWidth:(double)a0;

@end
