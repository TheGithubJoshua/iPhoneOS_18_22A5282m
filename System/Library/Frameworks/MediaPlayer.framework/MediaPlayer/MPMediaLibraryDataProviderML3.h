@class NSString, NSArray, ICUserIdentity, MPMediaLibrary, NSSet, NSOperationQueue, NSObject, ML3MusicLibrary, MPMediaEntityCache;
@protocol OS_dispatch_queue, MPArtworkDataSource, OS_dispatch_source;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate, MPUserIdentityConsuming> {
    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;
    NSObject<OS_dispatch_queue> *_cloudUpdateQueue;
    unsigned long long _backgroundTask;
    unsigned long long _backgroundTaskCount;
    BOOL _hasScheduledEventPosting;
    long long _refreshState;
    NSString *_uniqueIdentifier;
    NSOperationQueue *_setValuesWidthLimitedQueue;
    NSObject<OS_dispatch_queue> *_entitiesAddedOrRemovedNotificationQueue;
    NSObject<OS_dispatch_source> *_entitiesAddedOrRemovedCoalescingTimer;
}

@property (class, copy, nonatomic) NSArray *onDiskProviders;

@property (retain, nonatomic) ML3MusicLibrary *library;
@property (weak, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) long long playbackHistoryPlaylistPersistentID;
@property (readonly, nonatomic) long long photosMemoriesPlaylistPersistentID;
@property (readonly, nonatomic) BOOL isGeniusEnabled;
@property (readonly, nonatomic) NSArray *preferredAudioLanguages;
@property (readonly, nonatomic) NSArray *preferredSubtitleLanguages;
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MPMediaEntityCache *entityCache;
@property (readonly, nonatomic) id<MPArtworkDataSource> artworkDataSource;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly, nonatomic) NSSet *propertiesToCache;
@property (readonly, nonatomic) NSString *syncValidity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) ICUserIdentity *userIdentity;

+ (id)_unadjustedValueForItemDateWithDefaultValue:(id)a0;
+ (id)_unadjustedValueForItemPropertyRatingWithDefaultValue:(id)a0;
+ (id)_unadjustedValueForItemPropertyVolumeAdjustmentWithDefaultValue:(id)a0;
+ (id)_unadjustedValueForItemPropertyVolumeNormalizationWithDefaultValue:(id)a0;
+ (id)_unadjustedValueForItemTimeWithDefaultValue:(id)a0;
+ (id)_unadjustedValueForMPProperty:(id)a0 withDefaultValue:(id)a1;
+ (id)uniqueIdentifierForLibrary:(id)a0;

- (void)setValues:(id)a0 forProperties:(id)a1 forItemPersistentIDs:(id)a2;
- (BOOL)collectionExistsWithName:(id)a0 groupingType:(long long)a1 existentPID:(unsigned long long *)a2;
- (BOOL)collectionExistsContainedWithinSyncIDs:(id)a0 groupingType:(long long)a1 existentPID:(unsigned long long *)a2;
- (void)performReadTransactionWithBlock:(id /* block */)a0;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)a0;
- (BOOL)deleteDatabaseProperty:(id)a0;
- (BOOL)hasMediaOfType:(unsigned long long)a0;
- (id)initWithLibrary:(id)a0;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)collectionExistsWithCloudUniversalLibraryID:(id)a0 groupingType:(long long)a1 existentPID:(unsigned long long *)a2;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)a0 groupingType:(long long)a1;
- (BOOL)writable;
- (void)addToLocalDeviceLibraryGlobalPlaylistWithID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)hasUbiquitousBookmarkableItems;
- (BOOL)collectionExistsWithStoreID:(long long)a0 groupingType:(long long)a1 existentPID:(unsigned long long *)a2;
- (BOOL)collectionExistsWithSagaID:(long long)a0 groupingType:(long long)a1 existentPID:(unsigned long long *)a2;
- (unsigned long long)currentEntityRevision;
- (id)lastModifiedDate;
- (void)performStoreArtistLibraryImport:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addGlobalPlaylistWithID:(id)a0 andAddToCloudLibrary:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)syncGenerationID;
- (void)performStoreItemLibraryImport:(id)a0 withCompletion:(id /* block */)a1;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)a0 entityType:(long long)a1 artworkToken:(id)a2 artworkType:(long long)a3 sourceType:(long long)a4;
- (BOOL)importOriginalArtworkFromImageData:(id)a0 withArtworkToken:(id)a1 artworkType:(long long)a2 sourceType:(long long)a3 mediaType:(unsigned long long)a4;
- (BOOL)performTransactionWithBlock:(id /* block */)a0;
- (BOOL)hasGeniusMixes;
- (void)dealloc;
- (long long)playlistGeneration;
- (id)valueForDatabaseProperty:(id)a0;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)a0;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)a0;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)a0 count:(unsigned long long)a1 groupingType:(long long)a2 existentPID:(unsigned long long *)a3;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)a0 groupingType:(long long)a1;
- (BOOL)collectionExistsWithCloudLibraryID:(id)a0 groupingType:(long long)a1 existentPID:(unsigned long long *)a2;
- (BOOL)setValue:(id)a0 forDatabaseProperty:(id)a1;
- (void)addTracksToMyLibrary:(id)a0;
- (void)_addGlobalPlaylistsToLibraryDatabase:(id)a0 asLibraryOwned:(BOOL)a1 completion:(id /* block */)a2;
- (void)_coalesceEvents;
- (void)addItemWithIdentifier:(long long)a0 toPlaylistWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)a0 cloudTrackFilteringType:(long long)a1 subscriptionFilteringOptions:(long long)a2 additionalFilterPredicates:(id)a3;
- (id)_adjustedItemPropertyVolumeAdjustmentOfEntity:(id)a0 withDefaultValue:(id)a1;
- (void)_libraryEntitiesAddedOrRemoved:(id)a0;
- (void)performBackgroundTaskWithBlock:(id /* block */)a0;
- (id)_adjustedItemDateOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemNonnullDateOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyAssetURLOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyBookletsOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyChapterArtworkTimesOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyChaptersOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyContentRatingOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyEQPresetOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyEpisodeNumberOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyFilePathOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyMovieInfoOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyRatingOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertySeasonNameOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertySeasonNumberOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyVerifiedIntegrityOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemPropertyVolumeNormalizationOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedItemTimeOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedPlaylistPropertySeedItemsOfEntity:(id)a0 withDefaultValue:(id)a1;
- (id)_adjustedPropertyMediaTypeOfEntity:(id)a0 withDefaultValue:(id)a1;
- (BOOL)_dataProviderSupportsEntityChangeTracking;
- (void)_displayValuesDidChange:(id)a0;
- (void)_dynamicPropertiesDidChange:(id)a0;
- (void)_importStoreArtistElements:(id)a0 withReferralObject:(id)a1 withCompletion:(id /* block */)a2;
- (void)_importStoreItemElements:(id)a0 withReferralObject:(id)a1 addTracksToDeviceLibraryOnly:(BOOL)a2 andAddTracksToCloudLibrary:(BOOL)a3 usingCloudAdamID:(long long)a4 withCompletion:(id /* block */)a5;
- (void)_invalidatePersistentKeysForIdentifiers:(long long *)a0 count:(unsigned long long)a1;
- (void)_invisiblePropertiesDidChange:(id)a0;
- (void)_libraryCloudLibraryAvailabilityDidChange:(id)a0;
- (void)_libraryContentsDidChange:(id)a0;
- (void)_libraryPathDidChange:(id)a0;
- (void)_libraryUIDDidChange:(id)a0;
- (void)_loadProperties:(id)a0 ofEntityWithIdentifier:(long long)a1 ML3EntityClass:(Class)a2 completionBlock:(id /* block */)a3;
- (void)_loadValueForAggregateFunction:(id)a0 entityClass:(Class)a1 property:(id)a2 query:(id)a3 completionBlock:(id /* block */)a4;
- (void)_postEvents;
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)a0 count:(unsigned long long)a1 entityClass:(Class)a2;
- (id)_storePlatformRequestContext;
- (void)_syncGenerationDidChange:(id)a0;
- (void)_updateArtworkDataSourceMediaLibraryUniqueIdentifier;
- (void)addItemsWithIdentifiers:(id)a0 toPlaylistWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (void)addPlaylistStoreItemsForLookupItems:(id)a0 withCompletion:(id /* block */)a1;
- (long long)addPlaylistWithValuesForProperties:(id)a0;
- (id)adjustedValueForMPProperty:(id)a0 ofEntity:(id)a1 withDefaultValue:(id)a2;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)a0;
- (id)collectionResultSetForQueryCriteria:(id)a0;
- (BOOL)deleteItemsWithIdentifiers:(long long *)a0 count:(unsigned long long)a1;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)a0 ordered:(BOOL)a1 cancelBlock:(id /* block */)a2 usingBlock:(id /* block */)a3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)a0 maximumRevisionType:(long long)a1 inUsersLibrary:(BOOL)a2 itemBlock:(id /* block */)a3 collectionBlock:(id /* block */)a4;
- (void)enumerateItemIdentifiersForQueryCriteria:(id)a0 ordered:(BOOL)a1 cancelBlock:(id /* block */)a2 usingBlock:(id /* block */)a3;
- (long long)itemPersistentIDForStoreID:(long long)a0;
- (id)itemResultSetForQueryCriteria:(id)a0;
- (void)loadProperties:(id)a0 ofCollectionWithIdentifier:(long long)a1 groupingType:(long long)a2 completionBlock:(id /* block */)a3;
- (void)loadProperties:(id)a0 ofItemWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (void)loadQueryCriteria:(id)a0 countOfCollectionsWithCompletionBlock:(id /* block */)a1;
- (void)loadQueryCriteria:(id)a0 countOfItemsWithCompletionBlock:(id /* block */)a1;
- (void)loadQueryCriteria:(id)a0 hasCollectionsWithCompletionBlock:(id /* block */)a1;
- (void)loadQueryCriteria:(id)a0 hasItemsWithCompletionBlock:(id /* block */)a1;
- (void)loadValueForAggregateFunction:(id)a0 onCollectionsForProperty:(id)a1 queryCriteria:(id)a2 completionBlock:(id /* block */)a3;
- (void)loadValueForAggregateFunction:(id)a0 onItemsForProperty:(id)a1 queryCriteria:(id)a2 completionBlock:(id /* block */)a3;
- (void)moveItemFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 inPlaylistWithIdentifier:(long long)a2 completionBlock:(id /* block */)a3;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)a0 withPath:(id)a1 assetProtectionType:(long long)a2;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)a0 withPath:(id)a1 assetProtectionType:(long long)a2 completionBlock:(id /* block */)a3;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)a0;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)a0;
- (void)removeItemsAtIndexes:(id)a0 inPlaylistWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (BOOL)removeItemsWithIdentifiers:(long long *)a0 count:(unsigned long long)a1;
- (BOOL)removePlaylistWithIdentifier:(long long)a0;
- (void)sdk_addItemWithOpaqueID:(id)a0 withCompletion:(id /* block */)a1;
- (void)sdk_addItemWithOpaqueIdentifier:(id)a0 toPlaylistWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (void)sdk_addItemWithSagaIdentifier:(long long)a0 toPlaylistWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (long long)sdk_addPlaylistWithValuesForProperties:(id)a0;
- (void)setItemsWithIdentifiers:(id)a0 forPlaylistWithIdentifier:(long long)a1 completionBlock:(id /* block */)a2;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)a0 additionalFilterPredicates:(id)a1;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)a0 additionalFilterPredicates:(id)a1;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)a0 additionalFilterPredicates:(id)a1;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)a0 additionalFilterPredicates:(id)a1;
- (void)setValue:(id)a0 forProperty:(id)a1 ofCollectionWithIdentifier:(long long)a2 groupingType:(long long)a3 completionBlock:(id /* block */)a4;
- (void)setValue:(id)a0 forProperty:(id)a1 ofItemWithIdentifier:(long long)a2 completionBlock:(id /* block */)a3;
- (void)setValue:(id)a0 forProperty:(id)a1 ofPlaylistWithIdentifier:(long long)a2 completionBlock:(id /* block */)a3;
- (id)systemFilterPredicatesWithGroupingType:(long long)a0 cloudTrackFilteringType:(long long)a1 subscriptionFilteringOptions:(long long)a2;

@end