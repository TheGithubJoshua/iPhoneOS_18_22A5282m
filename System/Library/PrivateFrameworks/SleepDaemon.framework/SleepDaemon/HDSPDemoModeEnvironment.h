@class NSString;

@interface HDSPDemoModeEnvironment : HDSPEnvironment <HDSPNotificationObserver, HDSPSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;

+ (id /* block */)_sleepModeManagerProvider;

- (void)environmentDidBecomeReady;
- (id)init;
- (BOOL)isDemoEnvironment;
- (id)demoScheduleModel;
- (void)resetDemoMode;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (id)demoSleepSchedule;
- (id)demoSleepSettings;
- (void)setInitialSchedule;
- (id)demoEventRecord;

@end
