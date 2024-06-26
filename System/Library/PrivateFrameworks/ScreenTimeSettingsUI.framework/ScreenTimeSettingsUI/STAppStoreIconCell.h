@class UIImageView, UILabel;

@interface STAppStoreIconCell : STTableCell

@property (readonly, nonatomic) UIImageView *appIconView;
@property (readonly, nonatomic) UILabel *nameLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setValue:(id)a0;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (void)_didFetchAppInfoOrIcon:(id)a0;

@end
