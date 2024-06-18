@interface FitnessCoachingServices.SleepObserver : NSObject <FISleepDataProviderDelegate> {
    void /* unknown type, empty encoding */ dateProvider;
    void /* unknown type, empty encoding */ duetObserver;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ state;
}

- (id)currentCalendar;
- (void)sleepDataProviderUserDayDidUpdate;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (id)currentDate;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
