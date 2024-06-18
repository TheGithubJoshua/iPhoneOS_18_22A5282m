@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult : PHFetchResult {
    NSOrderedSet *_objectIDs;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

+ (id)emptyFetchResultWithPhotoLibrary:(id)a0;

- (id)fetchRequest;
- (id)photoLibrary;
- (id)containerIdentifier;
- (id)changeHandlingKey;
- (id)fetchedObjectIDs;
- (long long)collectionFetchType;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (unsigned long long)possibleChangesForChange:(id)a0 propertiesFetchResult:(id)a1;
- (id)calculateMediaTypeCounts;
- (unsigned long long)hash;
- (id)copyWithOptions:(id)a0;
- (id)fetchedObjects;
- (id)objectIDAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)updateRegistrationForChangeNotificationDeltas;
- (id)description;
- (BOOL)isFullyBackedByObjectIDs;
- (void)prefetchObjectsAtIndexes:(id)a0;
- (id)changeHandlingValueUsingSeedOids:(id)a0 withChange:(id)a1 usingManagedObjectContext:(id)a2;
- (id)initWithObjects:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5;
- (id)fetchUpdatedObjects;
- (id)fetchSortDescriptors;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)fetchedObjectIDsSet;
- (id)initWithOids:(id)a0 photoLibrary:(id)a1 fetchType:(id)a2 fetchPropertySets:(id)a3 identifier:(id)a4 registerIfNeeded:(BOOL)a5 photosCount:(unsigned long long)a6 videosCount:(unsigned long long)a7 audiosCount:(unsigned long long)a8;

@end
