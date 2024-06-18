@class GCDTimer, _TtC8MapsSync23MapsSyncStoreController, NSMutableSet, _TtC8MapsSync13MapsSyncStore, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreControllerDelegate> {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_storeQueue;
    _TtC8MapsSync23MapsSyncStoreController *_storeController;
    _TtC8MapsSync13MapsSyncStore *_store;
    BOOL _waitingForStoreToLoad;
    GCDTimer *_storeLoadTimeoutTimer;
}

+ (id)sharedInstance;
+ (void)migrateFromiCloudKVSIfNeeded;

- (id)init;
- (void)storeControllerWithDataChanged:(id)a0;
- (void)clearBlockedIdentifiers;
- (void)purgeExpiredIdentifiers;
- (BOOL)containsIdentifier:(id)a0;
- (void)storeControllerWithDidLoad:(id)a0;
- (void)_reloadBlockedIdentifiersFromSync;
- (void)unblockIdentifiers:(id)a0;
- (id)_fetchSyncedIdentifiers;
- (void)_resumeIsolationQueueIfNeeded;
- (void).cxx_destruct;
- (id)description;
- (void)storeControllerWithFailedToLoad:(id)a0;
- (void)_purgeExpiredIdentifiersIn:(id)a0;
- (void)_cancelTimeoutTimer;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)blockIdentifier:(id)a0;
- (void)blockIdentifiers:(id)a0;

@end
