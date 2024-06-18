@class NSString, _DKEvent, _DKPeriod, NSDate;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    _DKPeriod *eligibleForNotification;
    int displayStatusNotifyToken;
    int internalSettingChangedNotificationToken;
    BOOL _enabled;
}

@property (nonatomic) BOOL FirstWakeUINotificationEnabled;
@property (nonatomic) BOOL SoftwareUpdateUINotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)eventStream;
+ (id)prettyPrintDateAsLocalTime:(id)a0;
+ (id)fetchMostRecentPastEventForStream:(id)a0;
+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;

- (BOOL)isInternalBuild;
- (void)showUINotification:(id)a0;
- (void)handleScreenUnlockEvent;
- (BOOL)isUINotificationEnabledForKey:(id)a0;
- (void)stop;
- (void)receiveNotificationEvent:(id)a0;
- (void)registerHandleBacklightEvents;
- (void)recordFirstWakeup:(id)a0;
- (void)setUINotificationEligibility;
- (id)firstWakeupEventWithValue:(BOOL)a0;
- (void)start;
- (void)deactivate;
- (id)convertUTCToLocalTimeString:(id)a0;
- (void).cxx_destruct;
- (void)handleBacklightTurnedOffEvent;
- (void)setInternalSettingsChangedNotficationHandler;
- (void)showFirstWakeupUINotification;
- (void)setupNotificationEligiblityPeriod;
- (id)getNextSWUpdatePrediction;
- (void)showSoftwareUpdateUINotification;
- (void)dealloc;
- (void)unregisterHandleBacklightEvents;
- (BOOL)eligibleForFirstWakeUINotification;
- (void)handleBacklightTurnedOnEvent;
- (BOOL)isFirstBacklightOn;
- (BOOL)didQualifyingScreenLockEndInEligibilityPeriod;

@end
