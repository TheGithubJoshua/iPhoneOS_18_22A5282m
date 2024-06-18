@class NSString, NSOrderedSet;

@interface PLManagedFolder : PLGenericAlbum <PLAlbumContainer, PLCloudDeletable, PLFileSystemAlbumMetadataPersistence, PLDeletableManagedObject>

@property (class, readonly, copy) NSString *cloudUUIDKeyForDeletion;

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (nonatomic) BOOL needsFixedOrderKeysComplianceUpdate;
@property (retain, nonatomic) NSOrderedSet *childCollections;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;

+ (id)childKeyForOrdering;
+ (id)entityName;
+ (id)localizedRecoveredTitle;
+ (id)validKindsForPersistence;
+ (id)insertNewFolderWithTitle:(id)a0 kind:(int)a1 intoLibrary:(id)a2;
+ (long long)cloudDeletionTypeForTombstone:(id)a0;

- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)canEditContainers;
- (BOOL)needsReordering;
- (id)containersRelationshipName;
- (id)containers;
- (short)albumListType;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (BOOL)hasAtLeastOneAlbum;
- (void)setNeedsReordering;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)albumHasFixedOrder:(id)a0;
- (id)albums;
- (void)willSave;
- (void)removePersistedFileSystemDataWithPathManager:(id)a0;
- (void)prepareForDeletion;
- (void)didSave;
- (unsigned long long)videosCount;
- (id)payloadForChangedKeys:(id)a0;
- (id)childKeyForOrdering;
- (BOOL)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)a0;
- (unsigned long long)photosCount;
- (BOOL)canPerformDeleteOperation;
- (unsigned long long)approximateCount;
- (id)mutableAssets;
- (unsigned long long)assetsCount;
- (id)assets;
- (BOOL)isEmpty;
- (BOOL)canEditAlbums;
- (id)identifier;
- (unsigned long long)count;
- (void)addChildCollections:(id)a0;
- (void)insertChildCollections:(id)a0 atIndexes:(id)a1;
- (void)moveChildCollectionsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeChildCollections:(id)a0;
- (void)removeChildCollectionsAtIndexes:(id)a0;
- (void)replaceChildCollectionsAtIndexes:(id)a0 withChildCollections:(id)a1;
- (void)_enforceFixedOrderKeyCompliance;
- (void)_enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)a0;
- (void)addChildCollectionsObject:(id)a0;
- (id)descriptionOfChildCollectionOrderValues;
- (void)enforceFixedOrderKeyComplianceWithRelationshipOrderManager:(id)a0;
- (void)insertObject:(id)a0 inChildCollectionsAtIndex:(unsigned long long)a1;
- (void)removeChildCollectionsObject:(id)a0;
- (void)removeObjectFromChildCollectionsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInChildCollectionsAtIndex:(unsigned long long)a0 withObject:(id)a1;

@end
