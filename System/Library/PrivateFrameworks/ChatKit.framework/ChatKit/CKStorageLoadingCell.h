@class UIActivityIndicatorView;

@interface CKStorageLoadingCell : UITableViewCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
