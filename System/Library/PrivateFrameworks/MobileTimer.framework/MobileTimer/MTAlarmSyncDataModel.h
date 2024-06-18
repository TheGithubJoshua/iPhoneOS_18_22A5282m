@class NSObject, NSString, MTMetrics, MTAlarmStorage, MTSyncServiceManager;
@protocol OS_dispatch_queue, NAScheduler;

@interface MTAlarmSyncDataModel : NSObject <MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate>

@property (retain, nonatomic) MTSyncServiceManager *syncServiceManager;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTMetrics *syncMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)defaultBlock;

- (void)_performAction:(id)a0;
- (id)gatherDiagnostics;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)printDiagnostics;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (id)sourceIdentifier;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (id)initWithAlarmStorage:(id)a0 syncMetrics:(id)a1;
- (void)_setupSyncManagerWithBlock:(id /* block */)a0;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (id)initWithAlarmStorage:(id)a0 syncMetrics:(id)a1 syncServiceManagerBlock:(id /* block */)a2 serializer:(id)a3 serialQueue:(id)a4;
- (void)_performSnooze:(id)a0;
- (void)resetDataStore;
- (void).cxx_destruct;
- (id)dataFileName;
- (void)stopSyncServices;
- (BOOL)isFromOtherDevice;
- (void)applyChange:(id)a0;
- (void)startSyncServices;
- (void)_performDismiss:(id)a0;

@end
