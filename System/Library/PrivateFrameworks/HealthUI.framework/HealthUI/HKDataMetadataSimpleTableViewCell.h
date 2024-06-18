@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)_updateForCurrentSizeCategory;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setupSubviews;

@end
