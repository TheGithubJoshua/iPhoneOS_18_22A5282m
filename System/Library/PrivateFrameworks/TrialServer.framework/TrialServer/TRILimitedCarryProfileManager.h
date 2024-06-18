@class NSString, NSDictionary, _PASSimpleCoalescingTimer, TRIServerContext, NSObject;
@protocol TRITaskQueuing, OS_dispatch_queue, OS_os_transaction;

@interface TRILimitedCarryProfileManager : NSObject <MCProfileConnectionObserver> {
    id<TRITaskQueuing> _taskQueue;
    TRIServerContext *_context;
    NSObject<OS_dispatch_queue> *_profileProcessingQueue;
    _PASSimpleCoalescingTimer *_checkForUpdates;
    NSObject<OS_os_transaction> *_txn;
}

@property (retain, nonatomic) NSDictionary *lcExperiments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processLaunchEvent;
- (BOOL)_setStoredLimitedCarryExperimentsWithError:(id *)a0;
- (id)_getStoredLimitedCarryExperimentsWithError:(id *)a0;
- (void).cxx_destruct;
- (void)_gatherProfileUpdatesAndScheduleRelatedTasks;
- (id)initWithTaskQueue:(id)a0 context:(id)a1;
- (void)removeProfileForExperiment:(id)a0;
- (struct { unsigned char x0; })_enqueueTask:(id)a0;
- (id)_limitedCarryExperiments;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;

@end
