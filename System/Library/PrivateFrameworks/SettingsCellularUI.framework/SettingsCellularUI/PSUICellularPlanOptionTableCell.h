@class UILabel;

@interface PSUICellularPlanOptionTableCell : PSTableCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)textLabel;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (void)setCellEnabled:(BOOL)a0;
- (BOOL)canBeChecked;
- (void)_setCenteredText:(id)a0;
- (void)_setLabel:(id)a0 andPhoneNumber:(id)a1;

@end
