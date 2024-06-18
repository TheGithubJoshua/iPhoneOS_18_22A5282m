@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (double)badgePadding;
+ (id)reuseIdentifierForClassAndType:(long long)a0;
+ (id)badgeNumberLabelTextColor;
+ (id)unreadBubbleImage;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)resetLocale;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)_shouldUseRoundStyle;
- (void)badgeWithInteger:(long long)a0;

@end
