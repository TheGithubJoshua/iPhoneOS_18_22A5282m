@class NSObject, NSMapTable, NSMutableSet;
@protocol OS_dispatch_queue;

@interface EFXPCAlarmScheduler : NSObject {
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ test_schedulerObserver;

+ (id)log;

- (void)removeAlarm:(id)a0;
- (void)addAlarm:(id)a0;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)unscheduleEventWithName:(id)a0;
- (id)_init;
- (id)initForTesting;
- (id)ef_publicDescription;
- (void)_queue_scheduleEvent:(id)a0;
- (void)_queue_handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)_queue_unscheduleEventWithName:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)test_fireEvent:(id)a0;
- (id)initGlobalInstance;
- (void)_queue_handleXPCEvent:(id)a0;
- (void)scheduleEvent:(id)a0;

@end
