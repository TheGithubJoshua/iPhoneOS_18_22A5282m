@class PHFetchResultChangeDetails, NSIndexSet, NSArray, PHChange, PXSectionedDataSourceChangeDetails, NSDictionary;

@interface PXPhotosDataSourceChange : NSObject {
    long long _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    BOOL _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    NSArray *_favoriteChangedIndexPaths;
    BOOL _changesAreNoOp;
}

@property (readonly) BOOL hasIncrementalChanges;
@property (readonly) BOOL changesAreNoOp;
@property (readonly, copy) NSIndexSet *deletedSections;
@property (readonly, copy) NSIndexSet *insertedSections;
@property (readonly, copy) NSIndexSet *changedSections;
@property (readonly, copy) NSArray *deletedIndexPaths;
@property (readonly, copy) NSArray *insertedIndexPaths;
@property (readonly, copy) NSArray *changedIndexPaths;
@property (readonly, copy) NSArray *contentChangedIndexPaths;
@property (readonly, copy) NSArray *favoriteChangedIndexPaths;
@property (readonly, weak) PHChange *originatingPhotoLibraryChange;
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails;
@property (readonly, nonatomic) NSIndexSet *sectionsWithKeyAssetChanges;

- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)a0;
- (id)initWithIncrementalChanges:(id)a0 assetCollectionChangeDetails:(id)a1 sectionsWithKeyAssetChanges:(id)a2 previousCollectionsCount:(long long)a3 assetCollectionToSectionCache:(id)a4 originatingPhotoLibraryChange:(id)a5 fromIdentifier:(long long)a6 toIdentifier:(long long)a7;
- (void)_prepareIncrementalDetails;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFromIdentifier:(long long)a0 toIdentifier:(long long)a1;
- (BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)a0 collectionChangeNotifications:(id)a1;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)a0;
- (void)prepareIfNeeded;
- (BOOL)affectsSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
