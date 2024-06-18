@class NSString, NSMutableOrderedSet, NSNumber, NSObject;
@protocol PLIndexMappingCache;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin> {
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
}

@property (copy, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSNumber *needsReorderingNumber;
@property (nonatomic) BOOL isRegisteredForChanges;
@property (nonatomic) short albumListType;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSMutableOrderedSet *albums;
@property (readonly, nonatomic) BOOL hasAtLeastOneAlbum;
@property (readonly, nonatomic) BOOL canEditAlbums;
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

+ (id)importListInPhotoLibrary:(id)a0;
+ (id)allStreamedAlbumsListInPhotoLibrary:(id)a0;
+ (id)_typeDescriptionForAlbumListType:(short)a0;
+ (void)initialize;
+ (id)albumListInManagedObjectContext:(id)a0;
+ (BOOL)_albumOrderMatchesFrom:(id)a0 inDestination:(id)a1;
+ (id)scenesAlbumListInManagedObjectContext:(id)a0;
+ (BOOL)albumKindHasFixedOrder:(int)a0;
+ (id)scenesAlbumListInPhotoLibrary:(id)a0;
+ (void)persistAlbumListUUIDs:(id)a0 type:(short)a1 pathManager:(id)a2 allowsOverwrite:(BOOL)a3;
+ (BOOL)isValidPathForPersistence:(id)a0;
+ (id)_validAlbumsFromSource:(id)a0 destination:(id)a1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)albumListInPhotoLibrary:(id)a0;
+ (id)facesAlbumListInPhotoLibrary:(id)a0;
+ (void)pushChangesFromAlbumContainer:(id)a0 toAlbumContainer:(id)a1;
+ (BOOL)isValidTypeForPersistence:(short)a0;
+ (id)placesAlbumListInManagedObjectContext:(id)a0;
+ (unsigned long long)priorityForAlbumKind:(int)a0;
+ (id)_singletonListWithType:(short)a0 library:(id)a1;
+ (id)eventListInPhotoLibrary:(id)a0;
+ (id)importListInManagedObjectContext:(id)a0;
+ (void)addSingletonObjectsToContext:(id)a0;
+ (id)facesAlbumListInManagedObjectContext:(id)a0;
+ (id)eventListInManagedObjectContext:(id)a0;
+ (id)allStreamedAlbumsListInManagedObjectContext:(id)a0;
+ (id)placesAlbumListInPhotoLibrary:(id)a0;
+ (BOOL)restoreAlbumListFromPersistedDataAtPath:(id)a0 library:(id)a1;
+ (id)_albumListWithType:(short)a0 inManagedObjectContext:(id)a1;

- (void)unregisterForChanges;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)canEditContainers;
- (BOOL)needsReordering;
- (id)containersRelationshipName;
- (void)enumerateDerivedAlbumLists:(id /* block */)a0;
- (id)payloadID;
- (id)containers;
- (void)registerDerivedAlbumList:(id)a0;
- (void)setNeedsReordering;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)unregisterAllDerivedAlbums;
- (void)awakeFromFetch;
- (void)updateAlbumsOrderIfNeeded;
- (void)awakeFromInsert;
- (BOOL)albumHasFixedOrder:(id)a0;
- (void)willTurnIntoFault;
- (void)willSave;
- (void)didSave;
- (id)payloadForChangedKeys:(id)a0;
- (void)registerForChanges;
- (void)enumerateDerivedIndexMappers:(id /* block */)a0;
- (BOOL)hasDerivedIndexMappers;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)_albumsCountFetchRequest;
- (void)dealloc;
- (void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)a0;

@end
