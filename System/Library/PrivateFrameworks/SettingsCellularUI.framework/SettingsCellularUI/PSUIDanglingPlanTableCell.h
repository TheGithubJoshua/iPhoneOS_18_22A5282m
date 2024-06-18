@class UILabel;

@interface PSUIDanglingPlanTableCell : PSTableCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *statusLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)textLabel;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (BOOL)canBeChecked;
- (void)_setLabel:(id)a0 andPhoneNumber:(id)a1;

@end
