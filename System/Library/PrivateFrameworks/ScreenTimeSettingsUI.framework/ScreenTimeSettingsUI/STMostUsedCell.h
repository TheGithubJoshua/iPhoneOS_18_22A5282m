@class UIImageView;

@interface STMostUsedCell : STUsageCell

@property (readonly, nonatomic) UIImageView *allowanceIconView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setValue:(id)a0;
- (void).cxx_destruct;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;

@end