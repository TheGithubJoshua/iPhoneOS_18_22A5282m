@interface _TVUISearchBar : UISearchBar

+ (id)_clearGlyph;
+ (id)_searchGlyph;
+ (id)_tvmlKitBundle;

- (void)setSemanticContentAttribute:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutSubviews;
- (void)_updateRightView;

@end
