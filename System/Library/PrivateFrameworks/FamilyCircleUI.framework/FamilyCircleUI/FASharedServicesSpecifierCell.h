@class NSLayoutConstraint;

@interface FASharedServicesSpecifierCell : PSTableCell {
    NSLayoutConstraint *_widthConstraint;
}

+ (long long)cellStyle;

- (id)blankIcon;
- (id)getLazyIcon;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
