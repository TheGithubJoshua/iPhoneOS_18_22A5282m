@class UILabel, UIImageView;

@interface ICQUISpecifierCellWithAsyncImageLoading : PSTableCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_cellImageView;
    UILabel *_accessoryLabel;
}

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupViews;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;

@end
