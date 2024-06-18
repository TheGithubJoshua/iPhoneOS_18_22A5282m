@interface PassbookTableCell : PSTableCell

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)_updateActivityIndicatorForSpecifier:(id)a0;

@end
