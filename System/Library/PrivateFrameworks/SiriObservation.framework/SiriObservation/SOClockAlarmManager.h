@class MTAlarmManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockAlarmManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTAlarmManager *_mtAlarmManager;
}

+ (void)warmUp;

- (id)alarms;
- (id)updateAlarm:(id)a0;
- (id)removeAlarm:(id)a0;
- (id)addAlarm:(id)a0;
- (id)init;
- (id)alarmsIncludingSleepAlarm:(BOOL)a0;
- (void)checkIn;
- (id)dismissAlarmWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeHandlerForEvent:(long long)a0;
- (id)_registeredObservations;
- (id)initWithInstanceContext:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;

@end
