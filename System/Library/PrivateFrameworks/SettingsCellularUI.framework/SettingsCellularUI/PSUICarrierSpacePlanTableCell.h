@interface PSUICarrierSpacePlanTableCell : PSTableCell

+ (id)checkIcon;
+ (id)spacerIcon;

- (void)setChecked:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)accessoryText;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)primaryText;
- (id)detailText;
- (BOOL)canBeChecked;

@end
