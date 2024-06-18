@class NSString, NSXPCListener, ATXStableContactRepresentationDatastore;

@interface ATXModeEntityScorerServer : NSObject <ATXModeEntityScorerInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ATXStableContactRepresentationDatastore *_stableContactRepresentationDataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 modeConfigurationType:(long long)a4 reply:(id /* block */)a5;
- (id)init;
- (id)rankedEntitiesForDenyListForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;
- (id)dataFromFileHandle:(id)a0;
- (id)scoredNotificationEntityForAppFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)emptyModeEntityScore;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2 modeConfigurationType:(long long)a3;
- (void)rankedAppsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2 reply:(id /* block */)a3;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedAppsForDenyListForMode:(unsigned long long)a0;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (BOOL)_shouldRankByScoreInAscendingOrderForModeConfigurationType:(long long)a0;
- (id)rankedAppsForMode:(unsigned long long)a0;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedWidgetsForMode:(unsigned long long)a0;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)rankedContactsForMode:(unsigned long long)a0;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)rankedNotificationsForMode:(unsigned long long)a0;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (void)scoreNotificationModeEntity:(id)a0 modeEntityScores:(id)a1;
- (BOOL)saveScoredEntitiesToDisk:(id)a0 mode:(id)a1 modeEntityTypeIdentifier:(id)a2 modeConfigurationType:(long long)a3;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1;
- (id)scoredNotificationEntityForContactFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0;
- (void)scoreEntitiesForDenyList:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;

@end
