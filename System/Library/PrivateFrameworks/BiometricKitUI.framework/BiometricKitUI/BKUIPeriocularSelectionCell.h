@class UILabel, UIImageView;

@interface BKUIPeriocularSelectionCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *iconView;

- (id)_titleFont;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_descriptionFont;
- (double)BKUIPeriocularSelectionCellTopBottomPadding;

@end
