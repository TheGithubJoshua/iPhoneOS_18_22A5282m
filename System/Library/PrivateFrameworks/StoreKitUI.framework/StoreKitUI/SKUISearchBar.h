@interface SKUISearchBar : UISearchBar

@property (nonatomic) double intrinsicWidth;

- (void)setShowsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (id)init;
- (void)setShowsCancelButton:(BOOL)a0;
- (BOOL)showsCancelButton;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
