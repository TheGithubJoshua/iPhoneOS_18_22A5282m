@class NSString, MTScheduledList;
@protocol MTTaskScheduler, MTPersistence, MTAlarmScheduleDelegate, NAScheduler, MTNotificationCenter, MTAlarmStorage, MTSchedulingDelegate;

@interface MTAlarmScheduler : NSObject <MTAlarmObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener>

@property (readonly, nonatomic) id<MTAlarmStorage> storage;
@property (readonly, nonatomic) MTScheduledList *scheduledAlarms;
@property (readonly, nonatomic) id<NAScheduler> serializer;
@property (readonly, nonatomic) id<MTNotificationCenter> notificationCenter;
@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) id<MTSchedulingDelegate> schedulingDelegate;
@property (readonly, nonatomic) id<MTTaskScheduler> taskScheduler;
@property (retain, nonatomic) id<MTPersistence> defaults;
@property (weak, nonatomic) id<MTAlarmScheduleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intervalToCheckForAlarmsToFireBeforeDate:(id)a0;

- (id)gatherDiagnostics;
- (BOOL)handlesNotification:(id)a0 ofType:(long long)a1;
- (void)handleNotification:(id)a0 ofType:(long long)a1 completion:(id /* block */)a2;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)printDiagnostics;
- (void)_fireScheduledAlarm:(id)a0 firedDate:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1 scheduler:(id)a2 defaults:(id)a3 schedulingDelegate:(id)a4 taskScheduler:(id)a5 currentDateProvider:(id /* block */)a6;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (id)sourceIdentifier;
- (id)_additionalAlarmsToScheduleForAlarms:(id)a0;
- (void)_scheduleAlarms:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)cleanDeliveredNotifications;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1 scheduler:(id)a2 defaults:(id)a3;
- (id)_nextTriggerDateForScheduling;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)_unscheduleAlarms:(id)a0;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)scheduledListDidChange:(id)a0 withCompletion:(id /* block */)a1;
- (void)_queue_triggerDidFireForAlarmWithCompletionBlock:(id /* block */)a0;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (id)initWithStorage:(id)a0 notificationCenter:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)_queue_unregisterTimer;
- (void)rescheduleAlarmsWithCompletion:(id /* block */)a0;
- (id)nextTriggerDateIncludingBedtimeNotification:(BOOL)a0;
- (BOOL)_shouldPostNotificationForScheduledAlarm:(id)a0;
- (void)unscheduleAlarms:(id)a0;
- (id)nextScheduledAlarmIncludingBedtimeNotification:(BOOL)a0;
- (id)nextTriggerDate;
- (id)_nextScheduledAlertIncludingBedtimeNotification:(BOOL)a0;
- (void).cxx_destruct;
- (void)_queue_fireTriggeredAlarmsWithCompletionBlock:(id /* block */)a0;
- (void)scheduleAlarms:(id)a0;
- (void)_rescheduleAlarmsWithCompletion:(id /* block */)a0;
- (void)_setLastAlarmTriggerDate:(id)a0;
- (id)nextAlarm;
- (void)_queue_updateNextAlarmTimerWithCompletion:(id /* block */)a0;
- (id)nextAlarmIncludingBedtimeNotification:(BOOL)a0;
- (id)_lastAlarmTriggerDate;

@end
