@class PLCloudResourcePrefetchManager, PLCloudResourcePruneManager, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface PLCloudResourceManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PLCloudResourcePrefetchManager *_prefetchManager;
    PLCloudResourcePruneManager *_pruneManager;
    NSDate *_lastOperationDate;
    BOOL _enqueuedOperation;
}

- (id)init;
- (void)handleCPLStatusChange;
- (void)stop;
- (void)handleOptimizeModeChange;
- (double)_minimumIntervalBetweenOperations;
- (void)handleCPLConfigurationChange;
- (void)invalidate;
- (void).cxx_destruct;
- (void)updateCacheDeletePurgeableAmount;
- (void)clearPrefetchState;
- (id)initWithCPLManager:(id)a0 libraryServicesManager:(id)a1;
- (void)_runOnWorkQueueWithTransaction:(id)a0 block:(id /* block */)a1;
- (void)startAutomaticPrefetchAndPruneWithTimeout:(BOOL)a0;
- (id)statusForDebug:(BOOL)a0;

@end
