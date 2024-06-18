@class HKSPSleepScheduleModel, NSString, HDSPSleepLockScreenGreetingState, HDSPSleepLockScreenBedtimeState, NSDate, HDSPSleepLockScreenWindDownState, HDSPSleepLockScreenOffState;
@protocol NAScheduler, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate;

@interface HDSPSleepLockScreenStateMachine : HKSPPersistentStateMachine <HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepLockScreenStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepLockScreenStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepLockScreenOffState *offState;
@property (readonly, nonatomic) HDSPSleepLockScreenWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepLockScreenBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepLockScreenGreetingState *greetingState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL isLockScreenActive;

- (unsigned long long)loggingCategory;
- (void)environmentDidBecomeReady;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void)sleepModeDidChange:(long long)a0 reason:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dismissAlertForGoodMorning;
- (id)allStates;
- (void)presentAlertForGoodMorning;
- (void)sleepLockScreenStateDidChange:(long long)a0 previousState:(long long)a1;

@end
