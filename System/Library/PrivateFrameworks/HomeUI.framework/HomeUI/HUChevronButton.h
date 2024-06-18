@class UILabel, UIImageView, UIStackView;

@interface HUChevronButton : UIControl

@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *chevronImageView;

- (void)setHighlighted:(BOOL)a0;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)viewForFirstBaselineLayout;

@end
