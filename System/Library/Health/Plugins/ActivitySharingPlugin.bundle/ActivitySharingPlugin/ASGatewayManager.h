@class NSString, ASFriendListManager, ASCloudKitManager, STConversation, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ASGatewayManager : NSObject <ASCloudKitManagerChangesObserver, ASActivitySharingManagerReadyObserver> {
    ASFriendListManager *_friendListManager;
    ASCloudKitManager *_cloudKitManager;
    STConversation *_screenTimeConversation;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _currentlyPairedWatchMeetsMinimumVersion;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL hasReachedMaximumNumberOfFriends;
@property (readonly, nonatomic) BOOL isReadyToProcessChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)activitySharingManagerReady:(id)a0;
- (BOOL)isInviteVersionCompatible:(unsigned int)a0;
- (void)_queue_notifyObservers;
- (void)cloudKitManager:(id)a0 didUpdateAccountStatus:(long long)a1;
- (void).cxx_destruct;
- (BOOL)_shouldFilterWhitelistContactDestinations:(id)a0;
- (unsigned int)inviteCompatibilityVersion;
- (void)updateState;
- (BOOL)_shouldFilterBlacklistContactDestinations:(id)a0;
- (void)gatewayStatusWithCompletion:(id /* block */)a0;
- (BOOL)shouldFilterIncomingMessageFromContact:(id)a0;
- (void)addObserver:(id)a0;

@end
