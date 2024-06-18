@class UILabel, UIDebuggingIvar;

@interface UIDebuggingIvarTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UIDebuggingIvar *ivar;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_prepareConstraints;

@end
