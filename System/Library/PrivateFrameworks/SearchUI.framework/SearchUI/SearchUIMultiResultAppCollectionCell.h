@class SearchUIHomeScreenAppIconView;

@interface SearchUIMultiResultAppCollectionCell : UICollectionViewCell

@property (retain) SearchUIHomeScreenAppIconView *appIconView;

- (long long)_focusItemDeferralMode;
- (void)updateWithResult:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)_disableRasterizeInAnimations;
- (void)layoutSubviews;

@end
