@class UILabel, _UIFocusFastScrollingIndexBarEntry, UIView;

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell

@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *entry;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundedCornersBackground;

+ (id)cellFont;

- (void)_updateColors;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)_isAnotherIndexTitleCellFocused;
- (void)updateForEntry:(id)a0;
- (double)_maxCellWidth;

@end
