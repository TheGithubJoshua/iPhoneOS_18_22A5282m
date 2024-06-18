@class UIImageView, UILabel, MTVisualStylingProvider;

@interface MRMediaControlsVideoPickerHeaderView : UIView

@property (retain, nonatomic) UIImageView *airPlayIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateStyle;

@end
