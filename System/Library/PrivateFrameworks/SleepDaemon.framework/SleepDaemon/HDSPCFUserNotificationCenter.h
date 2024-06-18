@class NSString, NSMutableDictionary, HDSPEnvironment;

@interface HDSPCFUserNotificationCenter : NSObject <HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } notificationLock;
@property (readonly, nonatomic) NSMutableDictionary *notifications;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)initWithEnvironment:(id)a0;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)_publishWakeDetectionNotificationForUserInfo:(id)a0;
- (id)_confirmTextForForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (id)_ignoreTextForForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (void)handleResponse:(unsigned long long)a0 forUserNotification:(id)a1;
- (void).cxx_destruct;
- (void)tearDownNotifications;
- (void)_publishNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 otherButtonTitle:(id)a4 bypassDND:(BOOL)a5 aboveLockScreen:(BOOL)a6 actionHandler:(id /* block */)a7;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;

@end
