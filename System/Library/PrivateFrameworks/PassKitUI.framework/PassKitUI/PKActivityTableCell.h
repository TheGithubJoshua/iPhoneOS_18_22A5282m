@class UIActivityIndicatorView;

@interface PKActivityTableCell : PKTableViewCell

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;

@end
