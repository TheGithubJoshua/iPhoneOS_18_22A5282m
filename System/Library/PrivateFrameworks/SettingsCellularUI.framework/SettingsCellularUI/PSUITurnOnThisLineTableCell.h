@class UILabel;

@interface PSUITurnOnThisLineTableCell : PSTableCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *statusLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)textLabel;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)_updateStatus:(id)a0;
- (id)detailTextLabel;
- (BOOL)canBeChecked;
- (void)_setTitle:(id)a0 andStatus:(id)a1;

@end
