@class NSString, NSMutableDictionary, NSArray, NSObject;
@protocol CALNCalendarIconIdentifierProvider, CALNTriggeredEventNotificationDataStorage, OS_dispatch_queue, CALNTriggeredEventNotificationBodyDescriptionProvider, CalDateProvider, CALNTriggeredEventNotificationTransitionProvider, CALNTriggeredEventNotificationMapItemURLProvider, CALNTriggeredEventNotificationDataSource, CALNSourceEventRepresentationProvider, CALNTriggeredEventNotificationTriggerHelper, CALNNotificationManager, CALNTravelAdvisoryTimelinessAuthority, CALNTimeToLeaveRefreshStorage, CALNSnoozeUpdateTimer, CALNURLHandler;

@interface CALNTriggeredEventNotificationSource : NSObject <CALNTriggeredEventNotificationDataSourceDelegate, CALNSnoozeUpdateTimerDelegate, CALNNotificationSource>

@property (class, readonly, nonatomic) NSString *mapItemURLUserInfoKey;
@property (class, readonly, nonatomic) NSString *conferenceURLUserInfoKey;
@property (class, readonly, nonatomic) NSString *mailToURLUserInfoKey;

@property (readonly, nonatomic) id<CALNTriggeredEventNotificationDataSource> dataSource;
@property (readonly, weak, nonatomic) id<CALNNotificationManager> notificationManager;
@property (readonly, nonatomic) id<CALNCalendarIconIdentifierProvider> iconIdentifierProvider;
@property (readonly, nonatomic) id<CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider;
@property (readonly, nonatomic) id<CALNTriggeredEventNotificationTriggerHelper> triggerHelper;
@property (readonly, nonatomic) id<CALNTriggeredEventNotificationTransitionProvider> transitionProvider;
@property (readonly, nonatomic) id<CALNTriggeredEventNotificationBodyDescriptionProvider> bodyDescriptionProvider;
@property (readonly, nonatomic) id<CALNTravelAdvisoryTimelinessAuthority> travelAdvisoryTimelinessAuthority;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly, nonatomic) id<CALNTriggeredEventNotificationDataStorage> notificationDataStorage;
@property (readonly, nonatomic) id<CALNTimeToLeaveRefreshStorage> timeToLeaveRefreshStorage;
@property (readonly, nonatomic) id<CALNSnoozeUpdateTimer> snoozeUpdateTimer;
@property (readonly, nonatomic) NSMutableDictionary *eventURLToObjectIDMap;
@property (readonly, nonatomic) id<CALNURLHandler> urlHandler;
@property (readonly, nonatomic) id<CALNTriggeredEventNotificationMapItemURLProvider> mapItemURLProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSArray *categories;

+ (id)_mapItemURLForNotification:(id)a0;
+ (id)snoozeActionIdentifier;
+ (id)directionsActionIdentifier;
+ (id)conferenceCallActionIdentifier;
+ (id)mailOrganizerActionIdentifier;
+ (id)_conferenceURLForNotification:(id)a0;
+ (id)_mergeDataFromUnprotectedStore:(id)a0 withDataInProtectedStore:(id)a1;
+ (id)_mailtoURLForNotification:(id)a0;

- (void)didReceiveResponse:(id)a0;
- (BOOL)_shouldUpdateStoredNotificationDataGivenTransition:(unsigned long long)a0;
- (void)_handleMailOrganizerActionWithResponse:(id)a0;
- (BOOL)_shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)a0 eventID:(id)a1;
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)a0;
- (void)refreshNotifications:(id)a0;
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)a0;
- (BOOL)_itemWithEventID:(id)a0 affectedByChangesToObjects:(id)a1;
- (BOOL)_shouldRemoveNotificationMetaData:(id)a0 eventID:(id)a1;
- (void)_clearTravelAdvisoryHypotheses;
- (void)_refreshNotificationMetaData:(id)a0 eventID:(id)a1;
- (unsigned long long)_calnTravelAdvisoryTimelinessPeriodFromEKTravelAvisoryTimelinessPeriod:(unsigned long long)a0;
- (id)_notificationDataForSourceNotificationInfo:(id)a0 existingNotificationData:(id)a1 transition:(unsigned long long)a2 now:(id)a3;
- (void)_triggeredWithSourceClientIdentifier:(id)a0 triggerData:(id)a1;
- (id)_updatedLastFireTimeOfAlertOffsetFromTravelTimeGivenIsOffsetFromTravelTime:(BOOL)a0;
- (void)_refreshTimeToLeaveRefreshTimerWithRefreshDate:(id)a0 eventID:(id)a1;
- (BOOL)_mayCeaseRouteMonitoringForExistingNotificationData:(id)a0;
- (id)contentForNotificationWithSourceClientIdentifier:(id)a0;
- (BOOL)_sourceClientIdentifier:(id)a0 matchesEventForSourceClientIdentifier:(id)a1;
- (void)_setNotificationResponseData:(id)a0 onNotificationContent:(id)a1;
- (void)_removeStoredNotificationDataForEventWithEventID:(id)a0;
- (void)_updateSnoozeOptionsForEvents:(id)a0;
- (void)_addNotificationDataForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 existingNotificationData:(id)a2 transition:(unsigned long long)a3 now:(id)a4;
- (void)snoozeTimerFiredForEvents:(id)a0;
- (void)_refreshTimeToLeaveRefreshTimersWithObjectIDs:(id)a0;
- (unsigned long long)_travelAdvisoryTimelinessPeriodForHypothesis:(id)a0;
- (id)_notificationResponseDataForSourceNotificationInfo:(id)a0;
- (BOOL)sourceClientIdentifier:(id)a0 matchesEventForSourceClientIdentifier:(id)a1;
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)a0 hypothesis:(id)a1 allowsLocationAlerts:(BOOL)a2;
- (BOOL)_isNotificationMetaDataExpired:(id)a0 eventID:(id)a1;
- (void)_resetStoredNotificationDataTimeToLeaveDisplayStateForSourceClientIdentifier:(id)a0;
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)a0 notificationInfo:(id)a1 existingNotificationData:(id)a2 hypothesis:(id)a3 shouldClearHypothesis:(BOOL)a4 isOffsetFromTravelTimeStart:(BOOL)a5 isForContentCreation:(BOOL)a6;
- (void)_addEventURL:(id)a0 mappingToEventObjectID:(id)a1;
- (void)_refreshNotification:(id)a0;
- (id)_launchURLForResponse:(id)a0;
- (id)initWithDataSource:(id)a0 notificationManager:(id)a1 iconIdentifierProvider:(id)a2 sourceEventRepresentationProvider:(id)a3 triggerHelper:(id)a4 transitionProvider:(id)a5 bodyDescriptionProvider:(id)a6 travelAdvisoryTimelinessAuthority:(id)a7 dateProvider:(id)a8 notificationDataStorage:(id)a9 urlHandler:(id)a10 mapItemURLProvider:(id)a11 timeToLeaveRefreshStorage:(id)a12 snoozeUpdateTimer:(id)a13;
- (id)_contentForNotificationWithSourceClientIdentifier:(id)a0;
- (id)_eventRepresentationDictionaryWithSourceNotificationInfo:(id)a0 hypothesisMessage:(id)a1;
- (void)_handleConferenceCallActionWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)_updatedNotificationDataResettingTimeToLeaveDisplayState:(id)a0;
- (void)_travelAdvisoryAuthorizationChanged:(BOOL)a0;
- (id)contentForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 isProtectedDataAvailable:(BOOL)a2;
- (id)_notificationResponseDataForRecord:(id)a0;
- (void)updateSnoozeOptionsForPostedNotifications;
- (void)_commonHandleResponse:(id)a0;
- (void)_travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)a0;
- (void)_handleDirectionsActionWithResponse:(id)a0;
- (id)_resolvedSourceClientIdentifierForNewSourceClientIdentifier:(id)a0 oldSourceClientIdentifier:(id)a1;
- (id)_existingNotificationDataMatchingEventForSourceClientIdentifier:(id)a0;
- (void)_refreshNotifications:(id)a0;
- (void)willPostNotification:(id)a0;
- (void)_notificationAddedWithSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 trigger:(unsigned long long)a2;
- (void)_updateNotification:(id)a0 shouldClearHypothesis:(BOOL)a1;
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)a0 shouldClearHypothesis:(BOOL)a1 isForContentCreation:(BOOL)a2;
- (void)_addRecord:(id)a0 sourceNotificationInfo:(id)a1 existingNotificationData:(id)a2 trigger:(unsigned long long)a3 transition:(unsigned long long)a4 now:(id)a5;
- (void)_didReceiveResponse:(id)a0;
- (void)_updateStoredNotificationDataForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 existingNotificationData:(id)a2 transition:(unsigned long long)a3 now:(id)a4;
- (BOOL)_shouldRemoveStoredNotificationDataGivenShouldWithdrawNotification:(BOOL)a0 hasExistingTravelInformation:(BOOL)a1 mayCeaseRouteMonitoring:(BOOL)a2;
- (void)dataSource:(id)a0 triggeredWithSourceClientIdentifier:(id)a1 triggerData:(id)a2;
- (id)_contentForNotificationWithSourceClientIdentifier:(id)a0 shouldClearHypothesis:(BOOL)a1;
- (BOOL)_notificationWithSourceClientIdentifier:(id)a0 affectedByChangesToObjects:(id)a1;
- (void)_addNotificationData:(id)a0 forSourceClientIdentifier:(id)a1;
- (void)dataSource:(id)a0 travelAdvisoryAuthorizationChanged:(BOOL)a1;
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)a0 existingRecords:(id)a1;
- (void)dataSource:(id)a0 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)a1;
- (void)_refreshNotificationRecordsWithObjectIDs:(id)a0;
- (id)_updatedSourceNotificationInfoForContentCreation:(id)a0;
- (BOOL)_shouldCeaseRouteMonitoringEventForSourceClientIdentifier:(id)a0;
- (BOOL)migrateToStorage:(id)a0;
- (void)_refreshNotificationMetaDataWithObjectIDs:(id)a0;
- (void)_clearTravelAdvisoryFromNotificationMetaDataForSourceClientIdentifier:(id)a0;

@end
