@class UIColor;

@interface PKTableViewCell : UITableViewCell

@property (copy, nonatomic) UIColor *highlightColor;
@property (copy, nonatomic) UIColor *checkmarkAccessoryColor;
@property (copy, nonatomic) UIColor *customAccessoryColor;
@property (nonatomic) BOOL showsActionSpinner;
@property (nonatomic) double minimumHeight;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_checkmarkImage:(BOOL)a0;
- (id)_disclosureChevronImage:(BOOL)a0;
- (void)pk_applyAppearance:(id)a0;

@end