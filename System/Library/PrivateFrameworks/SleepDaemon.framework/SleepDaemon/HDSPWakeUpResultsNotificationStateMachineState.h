@class NSString, HDSPWakeUpResultsNotificationStateMachine;
@protocol HDSPWakeUpResultsNotificationStateMachineInfoProvider;

@interface HDSPWakeUpResultsNotificationStateMachineState : HKSPPersistentStateMachineState <HDSPWakeUpResultsNotificationStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPWakeUpResultsNotificationStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic, getter=isNotificationEnabled) BOOL notificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidComplete;
- (void)retryAttemptEventDue;
- (void)didPostResultsNotification;
- (void)queryDidFailWithError:(id)a0;
- (void)stateDidExpireWithContext:(id)a0;
- (void)wakeUpDidOccur;
- (id)nextStateWithContext:(id *)a0;

@end
