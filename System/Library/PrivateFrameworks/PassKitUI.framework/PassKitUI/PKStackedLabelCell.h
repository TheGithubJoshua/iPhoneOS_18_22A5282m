@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface PKStackedLabelCell : PKTableViewCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_detailImageView;
    BOOL _isRTL;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *detailImage;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *detailTextColor;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_applyLabelStyles;

@end
