@class NSString, UIImageView, UILabel, NSLayoutConstraint;

@interface HKClinicalAuthorizationHeaderView : UIView

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) NSLayoutConstraint *imageToTitleConstraint;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setUpSubviews;
- (void)_updateForCurrentContentSizeCategory;
- (void)_setUpConstraints;

@end
