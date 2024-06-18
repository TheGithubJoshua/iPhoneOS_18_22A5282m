@interface PageTitleAndAddressTableViewCell : CompletionListTableViewCell

+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateFont;
- (void)_updateNumberOfLines;

@end
