@class HDProfile, HDRestorableAlarm, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate;

@interface HKHRAFibBurdenSevenDayAnalysisSchedulerXPCAlarm : NSObject <HDProfileReadyObserver, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm> {
    NSObject<OS_dispatch_queue> *_queue;
    HDRestorableAlarm *_scheduler;
    HDProfile *_profile;
    NSUserDefaults *_defaults;
    id /* block */ _dateGenerator;
}

@property (weak, nonatomic) id<HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate> delegate;

- (id)initWithProfile:(id)a0;
- (void)_stop;
- (void)_queue_alarm:(id)a0 didReceiveDueEvents:(id)a1;
- (void)_beginReceivingAlarmEvents;
- (void)profileDidBecomeReady:(id)a0;
- (void)_queue_scheduleEvent;
- (void).cxx_destruct;
- (void)_unitTest_start;
- (id)initWithScheduler:(id)a0 profile:(id)a1 userDefaults:(id)a2 queue:(id)a3 dateGenerator:(id /* block */)a4 shouldAutomaticallyStart:(BOOL)a5;

@end
