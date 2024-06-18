@class UIFont, NSString, UIColor, UIImageView, UILabel, UIActivityIndicatorView;

@interface PKDashboardMessageActionCell : UITableViewCell {
    UILabel *_titleLabel;
    UIImageView *_disclosureView;
    UIActivityIndicatorView *_spinnerView;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (nonatomic) unsigned long long accessory;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
