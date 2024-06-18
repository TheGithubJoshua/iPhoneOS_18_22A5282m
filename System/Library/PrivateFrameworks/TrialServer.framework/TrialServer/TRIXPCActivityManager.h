@class TRIServerContext, TRITaskQueue, NSObject;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) TRIServerContext *context;
@property (retain, nonatomic) TRITaskQueue *taskQueue;

- (void)_registerRetryFailuresActivity;
- (void)_scheduleFetchTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)a0 label:(id)a1;
- (void)registerActivities;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_setDelaySeconds:(long long)a0 forXPCActivity:(id)a1 withLabel:(id)a2 replacementCriteria:(id)a3;
- (void)postponeCellularActivity;
- (void)registerSetupAssistantFetchActivity;
- (void).cxx_destruct;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_registerClientTriggeredActivities;
- (void)_setJitterForXPCActivity:(id)a0 withLabel:(id)a1 replacementCriteria:(id)a2;
- (void)_registerHotfixTargetingActivity;
- (void)_registerPostUpgradeActivity;
- (id)initWithDispatchQueue:(id)a0;
- (void)_registerCellularActivityWithDelay:(double)a0;
- (void)_registerFetchExperimentsActivity;
- (void)_registerMaintenanceWorkActivity;

@end
