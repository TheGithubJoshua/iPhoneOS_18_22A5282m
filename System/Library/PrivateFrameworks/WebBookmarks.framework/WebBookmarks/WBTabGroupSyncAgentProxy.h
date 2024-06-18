@class NSString, NSXPCConnection, NSHashTable, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface WBTabGroupSyncAgentProxy : NSObject <WBTabGroupSyncAgentSyncObserver, WBSDeallocationSentinelObserver, WBTabGroupSyncAgentProxyProtocol, WBTabGroupManagerObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_syncObserverQueue;
    NSHashTable *_syncObservers;
    NSDate *_firstReconnectionAttemptDate;
    unsigned long long _numberOfReconnectionAttempts;
}

@property (class, readonly, nonatomic) WBTabGroupSyncAgentProxy *sharedProxy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeBackgroundImageInSharedTabGroupWithUUID:(id)a0 byParticipantWithRecordID:(id)a1;
- (id)_remoteObjectProxy;
- (void)didAddTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)userDidAcceptCloudKitShareWithMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)participants:(id)a0 didLeaveSharedTabGroupWithUUID:(id)a1;
- (void)didRemoveTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)movePresenceForParticipantToTabWithUUID:(id)a0;
- (id)init;
- (void)didFetchRecentlyAcceptedSharedTabGroupWithUUID:(id)a0 acceptedShareDate:(id)a1;
- (void)removeSyncObserver:(id)a0;
- (void)shareDidUpdateForTabGroupWithUUID:(id)a0;
- (void)scheduleSyncIfNeeded;
- (void)_setUpConnectionIfNeeded;
- (void)tabGroupManagerDidUpdateSyncableContent:(id)a0;
- (void)addSyncObserver:(id)a0;
- (void)_setUpConnection;
- (void)participants:(id)a0 didJoinSharedTabGroupWithUUID:(id)a1;
- (void).cxx_destruct;
- (void)_setUpSyncObserverIfNeeded;
- (void)sentinelDidDeallocateWithContext:(id)a0;
- (BOOL)_shouldAttemptToReconnect;
- (id /* block */)emptyCompletionHandler;
- (void)didNavigateInTabWithUUID:(id)a0 title:(id)a1 inSharedTabGroupWithUUID:(id)a2 byParticipantWithRecordID:(id)a3;
- (void)didChangeScopedFavoritesInSharedTabGroupWithUUID:(id)a0 byParticipantWithRecordID:(id)a1;
- (void)dealloc;
- (void)activeParticipantsDidUpdateInTabWithUUID:(id)a0;
- (id /* block */)emptyChangeSetCompletionHandler;
- (void)beginSharingTabGroupWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptShareForURL:(id)a0 invitationTokenData:(id)a1 completionHandler:(id /* block */)a2;
- (void)_enumerateSyncObserversUsingBlock:(id /* block */)a0;
- (void)activeParticipantsDidUpdateInTabGroupWithUUID:(id)a0;
- (void)_syncAgentDidLaunch:(id)a0;

@end
