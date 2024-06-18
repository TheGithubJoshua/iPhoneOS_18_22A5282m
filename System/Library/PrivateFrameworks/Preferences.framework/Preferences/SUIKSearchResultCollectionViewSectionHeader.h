@class UIImageView;

@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *categoryImageView;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)applyLayoutAttributes:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setCategoryImage:(id)a0;

@end
