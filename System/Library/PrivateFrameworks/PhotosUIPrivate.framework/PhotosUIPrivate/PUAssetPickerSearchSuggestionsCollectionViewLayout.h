@protocol SearchSuggestionsCollectionViewLayoutUpdatesDelegate;

@interface PUAssetPickerSearchSuggestionsCollectionViewLayout : UICollectionViewCompositionalLayout

@property (weak, nonatomic) id<SearchSuggestionsCollectionViewLayoutUpdatesDelegate> layoutUpdatesDelegate;

- (void).cxx_destruct;
- (void)invalidateLayout;

@end
