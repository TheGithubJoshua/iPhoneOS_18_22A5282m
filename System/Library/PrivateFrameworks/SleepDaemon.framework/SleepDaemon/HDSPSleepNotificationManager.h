@class NSArray, NSString, HDSPEnvironment;
@protocol HDSPSleepEventDelegate;

@interface HDSPSleepNotificationManager : NSObject <HDSPGoodMorningAlertObserver, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepActionObserver, HDSPSleepNotificationPublisher, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) NSArray *notificationPublishers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

- (void)goodMorningWasDismissed;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (id)_sleepScheduleModel;
- (void)sleepEventIsDue:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)bedtimeReminderWasConfirmed;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)_bedtimeNotificationEventAfterDate:(id)a0;
- (BOOL)_bedtimeOrWindDownNotificationsEnabled;
- (void)_tearDownChargingReminder;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (id)initWithEnvironment:(id)a0 notificationPublishers:(id)a1;
- (void)_tearDownMorningNotification;
- (void).cxx_destruct;
- (void)wakeNotificationWasConfirmed;
- (void)tearDownNotifications;
- (void)_tearDownWindDownReminder;
- (void)_tearDownBedtimeReminder;
- (void)_tearDownWakeDetectionNotification;
- (id)_windDownNotificationEventAfterDate:(id)a0;
- (void)dismissAlertForGoodMorning;
- (void)wakeNotificationWasDismissed;
- (void)_rescheduleEvents;
- (void)presentAlertForGoodMorning;
- (void)_bedtimeOrWindDownNotificationEventIsDue:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSchedule:(id)a1;
- (void)bedtimeReminderWasDismissed;

@end
