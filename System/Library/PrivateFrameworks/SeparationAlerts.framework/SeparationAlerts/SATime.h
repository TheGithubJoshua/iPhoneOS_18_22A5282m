@class NSMutableSet, NSDate;
@protocol SATimeEventRequestProtocol;

@interface SATime : NSObject <SATimeServiceProtocol>

@property (retain, nonatomic) NSMutableSet *ongoingAlarms;
@property (nonatomic) void *alarmQueue;
@property (weak, nonatomic) id<SATimeEventRequestProtocol> externalTimer;
@property (nonatomic) BOOL isReplay;
@property (readonly, nonatomic) NSDate *now;

- (void)alarmFired:(id)a0;
- (void)addAlarm:(id)a0;
- (void)advanceTimeWithEvent:(id)a0;
- (void)ingestTAEvent:(id)a0;
- (id)earliestAlarm;
- (void)cancelAlarmWithUUID:(id)a0;
- (void)popAlarm;
- (id)initWithExternalTimer:(id)a0 isReplay:(BOOL)a1;
- (void).cxx_destruct;
- (unsigned long long)alarmCount;
- (id)setupAlarmFireAt:(id)a0 forClient:(id)a1;
- (void)fireAlarmsIfReady;
- (void)dealloc;
- (id)getCurrentTime;
- (id)getEarliestAlarmDate;

@end
