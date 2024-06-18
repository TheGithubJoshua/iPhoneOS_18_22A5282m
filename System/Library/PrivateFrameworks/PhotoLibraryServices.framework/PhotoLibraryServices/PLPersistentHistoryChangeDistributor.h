@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString, PLCoreDataChangeMerger, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerCountLock;
    unsigned long long _observerCount;
    NSString *_observerCountLastTokenDescription;
}

- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (void)_advanceTokenToCurrent;
- (id)initWithPersistentStoreCoordinator:(id)a0 bundle:(id)a1 changeMerger:(id)a2;
- (void)startObservingRemoteNotifications;
- (void)_inq_setLastToken:(id)a0;
- (void)distributeNewTransactionsSinceLastToken;
- (id)fetchTransactionsSinceLastToken;
- (void)_inq_startObservingRemoteNotifications;
- (void)forceUserInterfaceReload;
- (void)invalidate;
- (void).cxx_destruct;
- (void)beginObservingChanges;
- (void)stopObservingRemoteNotifications;
- (void)endObservingChanges;
- (void)dealloc;
- (id)localEventFromTransactions:(id)a0;
- (void)distributeTransactions:(id)a0 withXPCTransaction:(id)a1;
- (id)makeManagedObjectContext;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;

@end
