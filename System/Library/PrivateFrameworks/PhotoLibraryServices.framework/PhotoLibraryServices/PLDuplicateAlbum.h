@class NSSet;

@interface PLDuplicateAlbum : PLManagedAlbum

@property (nonatomic) long long processingVersion;
@property (nonatomic) short duplicateType;
@property (retain, nonatomic) NSSet *metadataMatchingAssets;
@property (retain, nonatomic) NSSet *perceptualMatchingAssets;

+ (id)entityName;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 predicate:(id)a1;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0 type:(short)a1;
+ (id)insertIntoPhotoLibrary:(id)a0;
+ (id)duplicateAlbumsInCurrentManagedObjectContext:(id)a0;

- (BOOL)supportsAssetOrderKeys;
- (void)awakeFromInsert;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)updateAlbumType;
- (void)addAssets:(id)a0 type:(short)a1;
- (id)albumAssetsFetchRequestForDuplicateSort;
- (void)cleanupAlbumForDeletedDuplicateAsset;
- (id)mutablePerceptualMatchingAssets;
- (void)updateDuplicateAssetVisibilityStatePropertyForAsset:(id)a0 duplicateAssetVisibilityState:(short)a1;
- (void)updateDuplicateAssetVisibilityStateWithDuplicateAssets:(id)a0;
- (id)mutableMetadataMatchingAssets;
- (void)sortAssets;
- (BOOL)hasDuplicateAssetVisibilityStateVisibleAssets:(id)a0;
- (void)removeInternalAssets:(id)a0;
- (id)duplicateAssetsFromCollection;

@end
