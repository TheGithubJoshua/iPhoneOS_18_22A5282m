@class MTAlarmManager, NAFuture;

@interface HDSPMobileTimerBridge : NSObject

@property (readonly, nonatomic) MTAlarmManager *alarmManager;
@property (readonly, nonatomic) NAFuture *alarmServerReady;

+ (id)sleepScheduleModelFromSleepAlarm:(id)a0;
+ (BOOL)sleepAlarm:(id)a0 matchesSleepScheduleModel:(id)a1;

- (id)init;
- (void)_alarmServerReady;
- (void)resetSleepAlarmSnoozeState;
- (void).cxx_destruct;
- (void)updateSleepAlarms;
- (void)_checkAlarmServer;
- (id)sleepAlarmsFuture;
- (id)sleepAlarmsFutureIgnoringCache:(BOOL)a0;
- (id)initWithAlarmManager:(id)a0;

@end
