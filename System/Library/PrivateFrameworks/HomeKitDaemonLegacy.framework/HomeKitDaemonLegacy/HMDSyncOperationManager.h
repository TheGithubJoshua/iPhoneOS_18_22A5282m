@class HMDSyncOperationQueue, NSString, NSArray, NSMutableDictionary, HMDSyncOperation, NSObject, NSMutableArray, HMFExponentialBackoffTimer;
@protocol OS_dispatch_queue, OS_os_log, HMDSyncOperationManagerDataSource;

@interface HMDSyncOperationManager : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_cloudVerifyAccountOperations;
    NSMutableArray *_cloudZonePushOperationQueues;
    NSMutableArray *_cloudCancelPauseOperations;
    NSMutableArray *_cloudQueryDatabaseOperations;
    NSMutableArray *_cloudPostFetchOperations;
    NSMutableDictionary *_cloudZonePushOperationQueuesMap;
    NSMutableDictionary *_cloudZoneFetchOperationQueuesMap;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) HMDSyncOperationQueue *cloudPushOperations;
@property (readonly, copy) NSArray *cloudVerifyAccountOperations;
@property (readonly) HMDSyncOperationQueue *cloudFetchOperations;
@property (readonly, copy) NSArray *cloudZonePushOperationQueues;
@property (readonly, copy) NSMutableArray *cloudZoneFetchOperationQueues;
@property (readonly, copy) NSArray *cloudCancelPauseOperations;
@property (readonly, copy) NSArray *cloudQueryDatabaseOperations;
@property (readonly, copy) NSArray *cloudPostFetchOperations;
@property (nonatomic) BOOL pauseQueue;
@property (nonatomic) long long pauseCloudPushLevel;
@property (retain, nonatomic) HMFExponentialBackoffTimer *cloudPushDelayTimer;
@property (nonatomic, getter=wasSyncLoopDialogDisplayed) BOOL syncLoopDialogDisplayed;
@property (retain, nonatomic) HMDSyncOperation *currentOperation;
@property (readonly, weak, nonatomic) id<HMDSyncOperationManagerDataSource> dataSource;
@property (readonly) id /* block */ timerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)pause;
- (void)addOperation:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)kick;
- (void).cxx_destruct;
- (id)dumpState;
- (void)resume;
- (void)resumeCloudPush;
- (void)addCloudVerifyAccountOperation:(id)a0;
- (id)initWithClientQueue:(id)a0 dataSource:(id)a1;
- (id)_dequeueNextOperation;
- (void)_dropWithoutAlreadyScheduledOperation:(id)a0;
- (void)_handleCancelledOperations:(id)a0;
- (void)_handleNextOperation;
- (void)_reportPossibleSyncLoop;
- (void)addCloudCancelPauseOperation:(id)a0;
- (BOOL)addCloudPostFetchOperationIfNonePresent:(id)a0;
- (BOOL)addCloudQueryDatabaseOperationIfNonePresent:(id)a0;
- (BOOL)addCloudZoneFetchOperation:(id)a0 delay:(double)a1;
- (BOOL)addCloudZonePushOperation:(id)a0 delay:(double)a1;
- (void)addOperation:(id)a0 withDelay:(double)a1;
- (void)addOperationRespectingOptions:(id)a0 withDelay:(double)a1;
- (void)cancelOperations;
- (id)cloudZoneFetchOperations;
- (BOOL)dropCloudPostFetchOperationsIfPresent;
- (id)initWithClientQueue:(id)a0 dataSource:(id)a1 timerFactory:(id /* block */)a2;
- (void)killCloudPushAndResume;
- (void)pauseAndWaitForCurrentOperationCompletion:(id /* block */)a0;
- (void)pauseCloudPush;
- (id)popCloudCancelPauseOperation;
- (id)popCloudPostFetchOperation;
- (id)popCloudQueryDatabaseOperation;
- (id)popCloudVerifyAccountOperation;
- (BOOL)popCloudZoneFetchOperationAndMoveQueueToEnd:(id *)a0;
- (id)popCloudZonePushOperationAndMoveQueueToEnd;
- (void)removeCloudZoneFetchOperationQueue:(id)a0;
- (void)removeCloudZonePushOperationQueue:(id)a0;
- (void)resetCloudPushTimer:(id)a0;

@end
