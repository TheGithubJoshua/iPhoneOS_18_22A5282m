@class WBCollectionConfiguration, WBTabCollection, NSString;

@interface WBTabGroupSyncAgent : NSObject <WBTabGroupSyncAgentProtocol>

@property (readonly, nonatomic) WBCollectionConfiguration *configuration;
@property (retain, nonatomic) WBTabCollection *tabCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userDidAcceptCloudKitShareWithMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)movePresenceForParticipantToTabWithUUID:(id)a0;
- (void)removeSyncObserver:(id)a0;
- (void)scheduleSyncIfNeeded;
- (id)initWithConfiguration:(id)a0;
- (void)addSyncObserver:(id)a0;
- (id)deviceIdentifier;
- (void).cxx_destruct;
- (void)beginSharingTabGroupWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptShareForURL:(id)a0 invitationTokenData:(id)a1 completionHandler:(id /* block */)a2;

@end
