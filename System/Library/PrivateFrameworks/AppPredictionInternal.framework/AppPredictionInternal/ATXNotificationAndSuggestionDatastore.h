@class NSString, ATXNotificationAndSuggestionDatabase, BPSPublisher;
@protocol BMBookmark;

@interface ATXNotificationAndSuggestionDatastore : NSObject <ATXNotificationResolutionSourceProtocol, ATXNotificationQuantityProviderProtocol> {
    ATXNotificationAndSuggestionDatabase *_db;
    id<BMBookmark> _bookmark;
    BPSPublisher *_notificationEventPublisher;
    BPSPublisher *_suggestionPublisher;
    BPSPublisher *_suggestionInteractionEventPublisher;
    BPSPublisher *_notificationGroupEventPublisher;
    BPSPublisher *_notificationDeliveryEventPublisher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pruneDatabaseWithXPCActivity:(id)a0;
- (id)_notificationGroupEventPublisher;
- (id)init;
- (id)engagementStatusOfActiveAndProminentNotificationsSinceTimestamp:(double)a0;
- (id)_notificationDeliveryEventPublisher;
- (void)updateDatabaseForEvent:(id)a0;
- (id)messageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)allNotificationsBetweenStartTimestamp:(id)a0 endTimestamp:(id)a1 limit:(unsigned long long)a2;
- (double)receiveTimeStampOfFirstNotification;
- (void)pruneSuggestionsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (id)vacuumDatabase;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4 notificationGroupEventPublisher:(id)a5;
- (id)resolutionsForNotifications:(id)a0;
- (id)engagementStatusOfActiveAndProminentNotificationsWithUrgency:(long long)a0 sinceTimestamp:(double)a1;
- (void)notificationAndSuggestionDatastorePerfMetricsLogging;
- (id)numProminentActiveNotificationsPerThreadId;
- (id)telemetryDataForNotificationsFromTimestamp:(double)a0 endTimestamp:(double)a1;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1;
- (id)getTopOfNonProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (void)updateDatabaseForNotificationEvent:(id)a0;
- (id)pruneNotificationsBeforeTimestamp:(double)a0;
- (id)notificationsReceivedPerBundleIdSinceDate:(id)a0;
- (id)getTopOfProminentStackNotificationsWithLimit:(unsigned long long)a0;
- (id)mostRecentActiveNotifications;
- (id)_timeBasedMergePublisher:(id)a0 withOtherPublishers:(id)a1;
- (BOOL)hasUrgencyTuningSuggestionBeenShownForBundleId:(id)a0 sinceTimestamp:(double)a1;
- (void)pruneNotificationsBasedOnHardLimitsWithXPCActivity:(id)a0;
- (id)_serializeBookmark:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0;
- (id)numProminentActiveNotificationsPerBundleId;
- (id)_suggestionInteractionEventPublisher;
- (id)suggestionEventTypeShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)allNotificationsFromBundleId:(id)a0 sinceTimestamp:(double)a1;
- (id)timeSensitiveNonmessageNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)metricsForSuggestionsSinceCompletionTimestamp:(double)a0;
- (id)_notificationEventPublisher;
- (id)initWithNotificationAndSuggestionDatabase:(id)a0 bookmark:(id)a1 notificationEventPublisher:(id)a2 suggestionPublisher:(id)a3 suggestionInteractionEventPublisher:(id)a4;
- (BOOL)hasSuggestionBeenShownForEntityId:(id)a0 suggestionType:(long long)a1 scope:(long long)a2 sinceTimestamp:(double)a3;
- (id)getSmartPauseFeaturesForBundleIds:(id)a0 sinceTimestamp:(double)a1;
- (id)deleteAllData;
- (id)_fetchBookmarkFromDb;
- (void)analyze;
- (id)pruneSuggestionsBeforeTimestamp:(double)a0;
- (void)updateDatabase;
- (id)feedbackHistoriesForKeys:(id)a0;
- (id)appSortedByNumOfNotificationsSinceTimestamp:(double)a0;
- (id)currentActiveSuggestions;
- (id)totalNotificationsPerAppFromStartTime:(double)a0 toEndTime:(double)a1;
- (id)mergedInputEventStream;
- (id)_suggestionPublisher;
- (id)engagementStatusOfActiveAndProminentAndMessageNotificationsSinceTimestamp:(double)a0;

@end
