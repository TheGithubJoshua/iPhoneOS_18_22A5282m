@class NSArray, NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate> {
    NSTimer *_delayedShutdownTimer;
    NSTimer *_forceShutdownTimer;
    BOOL *_runLoopStoppedRef;
    NSObject<OS_dispatch_queue> *_aggdStatsQueue;
    NSObject<OS_dispatch_source> *_aggdStatsSource;
}

@property (retain, nonatomic) NSArray *userSwitchTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMain;

- (void)disable;
- (void)willSwitchUser;
- (id)init;
- (void).cxx_destruct;
- (void)addSignalHandler;
- (void)dealloc;
- (void)didFinishAllXPCTransactions;
- (void)_shutdownDaemon;
- (void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)a0;
- (void)_forceShutdownTimerFired:(id)a0;
- (void)_setRunLoopStopped:(BOOL)a0;
- (void)addLanguageChangeHandler;
- (void)addToOperationsQueueDisabledCheckAndGoBlock:(id /* block */)a0 wrappedBlock:(id /* block */)a1;
- (void)shutdownDAD;
- (void)_configureAggdLogging;
- (void)waitForSystemAvailabilityWithCompletionBlock:(id /* block */)a0 completionQueue:(id)a1;

@end
