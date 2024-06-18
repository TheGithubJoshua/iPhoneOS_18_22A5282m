@class UILabel;

@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBeChecked;

@end
