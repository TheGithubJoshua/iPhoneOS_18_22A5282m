@class UIView;

@interface ICTextBackgroundView : UIView

@property (readonly, nonatomic) UIView *contentView;

- (id)initWithCoder:(id)a0;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)createLayout;

@end
