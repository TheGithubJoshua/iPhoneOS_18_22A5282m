@class UILabel, NSArray;

@interface CertUIKeyValueCell : UITableViewCell

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setup;
- (void)setValue:(id)a0 forKey:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupConstraints;

@end
