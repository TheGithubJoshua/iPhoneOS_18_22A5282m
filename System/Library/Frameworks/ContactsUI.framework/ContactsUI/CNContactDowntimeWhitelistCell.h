@interface CNContactDowntimeWhitelistCell : CNContactCell

+ (BOOL)shouldIndentWhileEditing;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
