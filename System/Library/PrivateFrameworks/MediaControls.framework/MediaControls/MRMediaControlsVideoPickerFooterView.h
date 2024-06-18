@class UILabel, MTVisualStylingProvider;

@interface MRMediaControlsVideoPickerFooterView : MPButton

@property (retain, nonatomic) UILabel *customTitleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateStyle;
- (id)titleLabelText;

@end
