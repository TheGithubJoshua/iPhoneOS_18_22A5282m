@class NSOrderedSet, NSMutableDictionary, FCMTWriterLock;

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

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
- (BOOL)moveShortcutWithIdentifier:(id)a0 toIndex:(unsigned long long)a1;
- (void)loadLocalCachesFromStore;
- (BOOL)containsShortcut:(id)a0;
- (void).cxx_destruct;
- (id)recordsForRestoringZoneName:(id)a0;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)a0;
- (void)addShortcut:(id)a0;
- (void)removeShortcutWithIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (void)handleSyncWithChangedRecords:(id)a0 deletedRecordNames:(id)a1;

@end
