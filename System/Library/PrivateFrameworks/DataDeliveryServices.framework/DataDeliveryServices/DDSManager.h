@class NSString, DDSRemoteSyncState, NSMutableSet, NSObject;
@protocol DDSManagingDelegate, DDSAssetObserving, DDSAssetProviding, DDSAssetTracking, OS_dispatch_queue;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging>

@property (readonly, nonatomic) id<DDSAssetTracking> tracker;
@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) DDSRemoteSyncState *remoteSyncState;
@property (retain, nonatomic) NSMutableSet *pendingAssertionsToUpdate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<DDSManagingDelegate> delegate;

- (id)init;
- (void)remoteSyncStateRequestsRetry;
- (void)beginUpdateCycleForced:(BOOL)a0 discretionaryDownload:(BOOL)a1;
- (void)remoteSyncStateRequestsReset;
- (void)handleNewAssertions:(id)a0;
- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)willRetryUpdateCycle;
- (void)didBeginUpdateCatalog;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void).cxx_destruct;
- (void)didCompleteDownloadForAssertions:(id)a0 error:(id)a1;
- (void)didEndUpdateCycleWithError:(id)a0;
- (void)triggerUpdate;
- (void)triggerDump;
- (void)handleRemovedAssertions:(id)a0;
- (id)initWithProvider:(id)a0 tracker:(id)a1;
- (void)remoteSyncStateRequestsUpdate;
- (void)didUpdateCatalogWithError:(id)a0;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (void)removeAssertionWithID:(id)a0;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)deleteV1AssetsIfNecessary;
- (void)didStartUpdateCycle;

@end
