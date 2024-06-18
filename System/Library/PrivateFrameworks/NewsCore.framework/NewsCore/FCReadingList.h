@class FCCloudContext, NSMutableDictionary, FCMTWriterLock;

@interface FCReadingList : FCPrivateDataController {
    NSMutableDictionary *_entriesByArticleID;
    FCCloudContext *_cloudContext;
    FCMTWriterLock *_itemsLock;
}

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

- (BOOL)canHelpRestoreZoneName:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithContext:(id)a0 pushNotificationCenter:(id)a1 storeDirectory:(id)a2;
- (void)removeArticleFromReadingList:(id)a0;
- (id)dateArticleWasAdded:(id)a0;
- (id)allNonConsumedArticleIDsIntersectingSet:(id)a0;
- (BOOL)isArticleOnReadingList:(id)a0;
- (unsigned long long)countOfAllArticlesSavedOutsideOfNewsSince:(id)a0;
- (id)allNonConsumedArticleIDs;
- (void)addArticleToReadingList:(id)a0 eventInitiationLevel:(long long)a1 origin:(unsigned long long)a2;
- (void)loadLocalCachesFromStore;
- (id)allSortedArticleIDsInReadingList;
- (void).cxx_destruct;
- (void)addArticleToReadingList:(id)a0;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (BOOL)shouldHideHeadline:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;

@end
