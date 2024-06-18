@class NSArray, NSString, PHFetchOptions, PHPhotoLibrary;

@interface PHRecentContentSyndicationCollectionsResult : PHFetchResult {
    PHFetchOptions *_fetchOptions;
    PHPhotoLibrary *_photoLibrary;
    long long _maxNumberOfStacks;
    long long _maxNumberOfAssetsPerStack;
}

@property (readonly) NSArray *objects;
@property (readonly) NSString *identifier;

+ (id)pointerComparableIdentifiersFromIdentifiers:(id)a0;

- (id)fetchRequest;
- (id)photoLibrary;
- (id)containerIdentifier;
- (id)changeHandlingKey;
- (long long)collectionFetchType;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (unsigned long long)hash;
- (id)copyWithOptions:(id)a0;
- (id)fetchedObjects;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)description;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)fetchSortDescriptors;
- (BOOL)_hasReachedGroupCapacity;
- (id)_transientCollectionForAssetOID:(id)a0;
- (id)_transientCollectionForIdentifier:(id)a0;
- (id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)a0 currentIdentifiers:(id)a1 inFetchResultBeforeChanges:(id)a2;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchOptions:(id)a2 maxNumberOfStacks:(long long)a3 maxNumberOfAssetsPerStack:(long long)a4 fetchType:(id)a5 fetchPropertySets:(id)a6 identifier:(id)a7 registerIfNeeded:(BOOL)a8;

@end
