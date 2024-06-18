@class NSTimer, NSString, NSDate, CADSequenceToken, EKTimedEventStorePurger, NSObject, RTRoutineManager, NSDateFormatter;
@protocol OS_dispatch_queue;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {
    CADSequenceToken *_lastDBSequenceToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_nextFireDate;
    NSDate *_lastCheckpoint;
    BOOL _populating;
    NSDate *_populateStart;
    NSTimer *_syncTimer;
    BOOL _pendingChanges;
    BOOL _needsAlarmTablePopulation;
    NSDateFormatter *_dateFormatter;
    RTRoutineManager *_routineManager;
    NSDate *_tomorrow;
    BOOL _shouldUpdateWithForceForAlarmTable;
    EKTimedEventStorePurger *_timedEventStorePurger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)requestedDarwinNotifications;

- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)_timerFired;
- (id)init;
- (void)_syncTimerFired:(id)a0;
- (void)_simulatedOffsetChanged:(id)a0;
- (void)_syncDidEnd;
- (void)_rescheduleTimer;
- (BOOL)_populateAlarmTable:(id)a0;
- (void)handleDarwinNotification:(id)a0;
- (void)start;
- (void)_protectedDataDidBecomeAvailable;
- (void)_killTimer;
- (void)_updateWithForceForAlarmTable:(BOOL)a0;
- (void)_timeZoneChanged:(id)a0;
- (void)_calendarNotificationSettingChanged;
- (BOOL)_haveAlarmsChanged:(id)a0;
- (void)_globalAlarmPreferencesChanged;
- (id)_alertInfoAlarmIDFromEKAlarm:(id)a0;
- (void)_killSyncTimer;
- (id)_alertInfoAlarmIDFromSideAlarm:(id)a0;
- (void).cxx_destruct;
- (void)_resetSyncTimer;
- (void)_storeAlarms:(id)a0 nextScheduleLimit:(id)a1 eventStore:(id)a2;
- (void)_syncDidStart;
- (id)_eventStore;
- (BOOL)_isAlarmAcknowledgedWithAcknowledgedDate:(id)a0 fireDate:(id)a1;
- (void)_notifyAlarmsFired:(id)a0;
- (void)dealloc;
- (void)_timeDidChangeSignificantly;
- (BOOL)_isDataProtected;
- (void)_populateFinished;
- (void)_installTimerWithFireDate:(id)a0;
- (void)_databaseChanged;
- (id)_dateFormatter;

@end
