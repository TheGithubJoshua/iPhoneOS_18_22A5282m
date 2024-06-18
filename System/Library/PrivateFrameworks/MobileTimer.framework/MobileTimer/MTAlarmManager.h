@class MTXPCConnectionProvider, MTMetrics, MTAlarmCache, NSNotificationCenter, MTAlarmManagerExportedObject;

@interface MTAlarmManager : NSObject

@property (retain, nonatomic) MTAlarmManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTAlarmCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;

+ (void)warmUp;
+ (id)_sortedAlarms:(id)a0 date:(id)a1 includeBedtimeNotification:(BOOL)a2;
+ (id)assistantSyncNotificationName;
+ (id)_filterSleepAlarmOverrides:(id)a0 date:(id)a1;
+ (id)_filteredAlarms:(id)a0 afterDate:(id)a1 maxCount:(unsigned long long)a2 filter:(id /* block */)a3;

- (id)alarms;
- (id)updateAlarm:(id)a0;
- (id)sleepAlarm;
- (id)removeAlarm:(id)a0;
- (id)sleepAlarms;
- (id)addAlarm:(id)a0;
- (id)init;
- (id)alarmAtIndex:(unsigned long long)a0;
- (unsigned long long)indexForAlarm:(id)a0;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)nextAlarmInHoursThreshold:(long long)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (id)snoozeAlarmWithIdentifier:(id)a0;
- (id)alarmWithIDString:(id)a0 includeSleep:(BOOL)a1;
- (void)checkIn;
- (id)nextExpectedRefreshDate;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)alarmWithIDString:(id)a0;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextAlarmSync;
- (id)alarmsSync;
- (void)_getCachedAlarmsWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)nextWidgetAlarmInThreshold;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1;
- (id)resetSleepAlarmSnoozeState;
- (id)initWithMetrics:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)alarmCount;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextFutureAlarmDate;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (id)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1;
- (id)sleepAlarmSync;
- (id)_sortedNextAlarmsAfterDate:(id)a0 includeSleepAlarm:(BOOL)a1 includeBedtimeNotification:(BOOL)a2 doSynchronous:(BOOL)a3;
- (id)updateSleepAlarms;
- (void)reconnect;
- (id)sleepAlarmsSync;
- (id)nextAlarmsInRangeSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2;
- (unsigned long long)firingAlarmCount;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1 includeBedtimeNotification:(BOOL)a2;
- (id)nextAlarm;
- (id)_alarmsIncludingSleepAlarm:(BOOL)a0 doSynchronous:(BOOL)a1;
- (id)_alarmWithIDStringAsync:(id)a0;
- (void)dealloc;
- (id)alarmsSyncIncludingSleepAlarm:(BOOL)a0;
- (id)_nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)nextAlarmsForDateSync:(id)a0 maxCount:(unsigned long long)a1;
- (id)nextSleepAlarm;
- (unsigned long long)alarmCountIncludingSleepAlarm:(BOOL)a0;
- (id)_nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3 doSynchronous:(BOOL)a4;
- (id)nextAlarmsForDate:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;
- (id)nextAlarmsInRange:(id)a0 maxCount:(unsigned long long)a1 includeSleepAlarm:(BOOL)a2 includeBedtimeNotification:(BOOL)a3;

@end
