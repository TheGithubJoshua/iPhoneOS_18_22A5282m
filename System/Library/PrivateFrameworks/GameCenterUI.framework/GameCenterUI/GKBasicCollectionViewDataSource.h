@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource <NSCopying>

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) SEL showAllAction;
@property (nonatomic) unsigned long long pageSize;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } preloadedRange;
@property (retain, nonatomic) NSPredicate *filterPredicate;

- (id)init;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)sectionTitle;
- (void)removeItemsAtIndexes:(id)a0;
- (unsigned long long)countOfItems;
- (id)itemsAtIndexes:(id)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)collectionViewDidBecomeInactive:(id)a0;
- (void)configureCollectionView:(id)a0;
- (id)indexPathsForItem:(id)a0;
- (void)insertItems:(id)a0 atIndexes:(id)a1;
- (void)preloadImagesForItems:(id)a0 startingAtIndex:(unsigned long long)a1 loadBlock:(id /* block */)a2;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceItemsAtIndexes:(id)a0 withItems:(id)a1;
- (void)setItemsNoNotify:(id)a0;

@end
