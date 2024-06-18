@class TPKTipContentTableViewCell;

@interface SUSSoftwareUpdateComingSoonTipCell : PSTableCell

@property (nonatomic) int state;
@property (retain, nonatomic) TPKTipContentTableViewCell *tipkitCell;

- (void)updateConstraints;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)a0;

@end
