@class UILabel;

@interface HKEmergencyCardSOSHeaderCell : UITableViewCell

@property (retain, nonatomic) UILabel *headerLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setupSubviews;
- (void)_updateTextColor;

@end
