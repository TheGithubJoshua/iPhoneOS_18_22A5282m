@class NSArray, NSMutableDictionary, NSOrderedSet, FCMTWriterLock;

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType> {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, nonatomic) NSArray *articleIDs;

+ (id)desiredKeys;
+ (id)commandsToMergeLocalDataToCloud:(id)a0 privateDataDirectory:(id)a1;
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (unsigned long long)localStoreVersion;
+ (id)backingRecordZoneIDs;
+ (id)commandStoreFileName;
+ (id)backingRecordIDs;
+ (long long)commandQueueUrgency;
+ (id)localStoreFilename;
+ (BOOL)requiresHighPriorityFirstSync;
+ (void)populateLocalStoreClassRegistry:(id)a0;

- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)insertArticleID:(id)a0 atIndex:(unsigned long long)a1;
- (void)loadLocalCachesFromStore;
- (id)localStoreMigrator;
- (void)removeArticleID:(id)a0;
- (void)ensureSyncedWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)save;
- (id)dateAddedForArticleID:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;
- (BOOL)containsArticleID:(id)a0;

@end
