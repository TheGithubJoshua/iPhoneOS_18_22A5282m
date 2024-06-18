@class UICollectionView;

@interface SFNestedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UICollectionView *collectionView;

- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void).cxx_destruct;
- (void)_setUpCollectionViewIfNeeded;

@end
