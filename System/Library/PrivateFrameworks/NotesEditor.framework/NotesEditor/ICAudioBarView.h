@class CALayer, UIButton, NSLayoutConstraint;

@interface ICAudioBarView : UIView

@property (nonatomic) double oldWidth;
@property (retain, nonatomic) CALayer *borderLayer;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) UIButton *doneButton;
@property (nonatomic) double height;

- (id)accessibilityElements;
- (void)setupConstraints;
- (double)height;
- (long long)accessibilityContainerType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHeight:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)updateLayoutMargins;
- (void)layoutSubviews;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;

@end
