@class UIView;

@interface ICQUITipHostCell : PSTableCell

@property (retain, nonatomic) UIView *tipView;

+ (long long)cellStyle;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupContentViewToHostTip;

@end
