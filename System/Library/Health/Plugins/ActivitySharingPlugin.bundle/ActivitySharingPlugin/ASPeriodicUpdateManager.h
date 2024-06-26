@class NSString, ASCloudKitManager, ASFriendListManager, NSHashTable, NSObject, ASRelationshipManager;
@protocol OS_dispatch_queue;

@interface ASPeriodicUpdateManager : NSObject <ASCloudKitManagerChangesObserver, ASActivitySharingManagerReadyObserver> {
    ASCloudKitManager *_cloudKitManager;
    ASFriendListManager *_friendListManager;
    ASRelationshipManager *_relationshipManager;
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_providerQueue;
    BOOL _isWatch;
    BOOL _isPushInProgress;
    BOOL _hasQueuedPush;
}

@property (readonly, nonatomic) BOOL hasRegisteredForUpdates;
@property (readonly, nonatomic) BOOL isReadyToProcessChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addProvider:(id)a0;
- (id)init;
- (void)activitySharingManagerReady:(id)a0;
- (void)removeProvider:(id)a0;
- (void)beginPeriodicUpdates;
- (id)initWithIsWatch:(BOOL)a0;
- (void)_queue_performUpdateForActivity:(id)a0 withCompletion:(id /* block */)a1;
- (void)endPeriodicUpdates;
- (void)cloudKitManager:(id)a0 didUpdateAccountStatus:(long long)a1;
- (void).cxx_destruct;
- (void)requestImmediateUpdateWithCompletion:(id /* block */)a0;

@end
