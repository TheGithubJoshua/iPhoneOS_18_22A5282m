@class NSArray, NSOrderedSet, PHFetchOptions, NSString;

@interface PHUnauthorizedFetchResult : PHFetchResult

@property (readonly, copy) id /* block */ fetchBlock;
@property (readonly, copy) PHFetchOptions *options;
@property (readonly) NSArray *objects;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSString *identifier;

- (id)fetchRequest;
- (id)photoLibrary;
- (id)containerIdentifier;
- (id)changeHandlingKey;
- (id)fetchedObjectIDs;
- (long long)collectionFetchType;
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
- (id)fetchSortDescriptors;
- (id)fetchResultWithChangeHandlingValue:(id)a0;
- (id)initWithOptions:(id)a0 status:(long long)a1 fetchBlock:(id /* block */)a2;

@end
