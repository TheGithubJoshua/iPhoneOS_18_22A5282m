@class PLTimer, NSDate, PLMonotonicTimer, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSDictionary, PLEntry, PLXPCListenerOperatorComposition, PLNSNotificationOperatorComposition;

@interface PLSpringBoardAgent : PLAgent

@property (readonly) PLNSNotificationOperatorComposition *notificationSBScreenTimeTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBLockTrackingChanged;
@property (readonly) PLCFNotificationOperatorComposition *notificationSBBlankTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBWallpaperTrackingChanged;
@property (readonly) PLNSNotificationOperatorComposition *notificationSBAutoLockTimerFiredNotification;
@property (retain) PLTimer *dailyWallpaperPoll;
@property BOOL autoLockIsNil;
@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *receivedPushNotification;
@property (readonly) PLXPCListenerOperatorComposition *userNotificationRequestEvent;
@property (readonly) PLXPCListenerOperatorComposition *userNotificationTriggerEvent;
@property (readonly) PLXPCListenerOperatorComposition *bulletinBoardNotificationPublishEvent;
@property (retain) PLMonotonicTimer *autolockEnergyPeriodicTimer;
@property (retain) NSDate *lastEligibleAutolockEnergyComputationDate;
@property (retain) NSDictionary *screenNumberToName;
@property BOOL deviceIsCharging;
@property (retain) PLEntryNotificationOperatorComposition *deviceChargingStateNotification;
@property (retain) PLEntry *lastSBEntry;
@property (retain, nonatomic) PLEntry *lastReceivedPushEntry;

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionLock;
+ (id)entryAggregateDefinitionBulletins;
+ (id)entryAggregateDefinitionNotifications;
+ (id)entryEventForwardDefinitionBlank;
+ (id)entryEventForwardDefinitionScreen;
+ (id)entryEventForwardDefinitionWallpaper;
+ (id)entryEventPointAutoLock;
+ (id)entryEventPointBulletins;
+ (id)entryEventPointLocalRemoteNotifications;

- (void)initOperatorDependancies;
- (id)init;
- (double)currentMediaTime;
- (void)log;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopAutolockEnergyPeriodicTimer;
- (void)addAccountingEvent:(id)a0;
- (id)addCountsAndDurationsFor:(id)a0 toEntry:(id)a1;
- (void)closeLastOpenEventsWithStopDate:(id)a0;
- (void)computeAutolockEnergyWithNow:(id)a0;
- (id)fetchSBWallpaperForType:(int)a0;
- (void)handleChargingStateChange:(id)a0;
- (void)logBulletin:(id)a0;
- (void)logMailNotification:(id)a0;
- (void)logNotification:(id)a0;
- (void)resetAutoLockIsNil;
- (id)screenLock:(id)a0;
- (void)setUpScreenNumberDictionary;
- (void)settingsChangedNotification:(id)a0;
- (void)startAutolockEnergyPeriodicTimer;

@end
