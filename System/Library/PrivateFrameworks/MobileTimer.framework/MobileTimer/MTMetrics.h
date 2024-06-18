@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logSyncFailedWithError:(id)a0;
- (id)init;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logTimerRepeated;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logTimerAdded;
- (void).cxx_destruct;
- (void)logSyncCompleted;
- (void)logTimerDeleted;
- (void)logTimerUpdated;
- (void)logTimerDismissed;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logAlarmDeleted:(BOOL)a0;

@end
