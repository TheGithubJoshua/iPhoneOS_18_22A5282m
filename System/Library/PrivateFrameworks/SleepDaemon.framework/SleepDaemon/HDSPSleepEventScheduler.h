@class NSHashTable, NSString, NSDate, HDSPSleepEventList, HKSPThrottler, HDSPEnvironment, HKSPSleepEvent, HKSPObserverSet;
@protocol HDSPEventScheduler;

@interface HDSPSleepEventScheduler : NSObject <HDSPEventScheduleDelegate, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } scheduleLock;
@property (readonly, nonatomic) HDSPSleepEventList *sleepEvents;
@property (readonly, nonatomic) HKSPObserverSet *eventHandlers;
@property (readonly, nonatomic) NSHashTable *eventProviders;
@property (readonly, nonatomic) NSHashTable *pendingEventProviders;
@property (readonly, nonatomic) id<HDSPEventScheduler> scheduler;
@property (readonly, nonatomic) HKSPThrottler *throttler;
@property (retain, nonatomic) HKSPSleepEvent *lastStandardSleepEvent;
@property (retain, nonatomic) NSDate *lastEventTriggerDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)significantTimeChangeDetected:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (void)scheduledEventIsDue;
- (void)environmentWillBecomeReady:(id)a0;
- (void)removeEventHandler:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)addEventProvider:(id)a0;
- (void)rescheduleEvents;
- (void)eventProviderCancelledEvents:(id)a0;
- (void)_lock_rescheduleEvents;
- (void).cxx_destruct;
- (BOOL)_shouldNotifyHandler:(id)a0 forEvent:(id)a1;
- (void)_loadLastStandardSleepEvent;
- (id)diagnosticDescription;
- (void)_schedulePendingEvents;
- (id)_allSleepEvents;
- (void)eventProviderHasUpcomingEvents:(id)a0;
- (BOOL)_lock_shouldScheduleEvents;
- (void)_lock_scheduledEventIsDue;
- (id)initWithEnvironment:(id)a0 schedulerProvider:(id /* block */)a1 throttlerProvider:(id /* block */)a2;
- (void)removeEventProvider:(id)a0;
- (void)addEventHandler:(id)a0;
- (void)_lock_updateLastStandardSleepEvent:(id)a0;

@end
