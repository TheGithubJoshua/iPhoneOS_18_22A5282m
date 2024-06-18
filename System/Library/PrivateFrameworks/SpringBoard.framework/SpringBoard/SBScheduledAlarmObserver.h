@class MTAlarmManager;

@interface SBScheduledAlarmObserver : NSObject {
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)_nextAlarmChanged:(id)a0;
- (void).cxx_destruct;
- (void)_updateAlarmStatusBarItem;

@end
