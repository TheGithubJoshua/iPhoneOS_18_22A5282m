@class ATXTurnOffNotificationsForAppSuggestionManager, ATXNotificationAndSuggestionDatastore, ATXNotificationsSuggestion, ATXSendMessagesToDigestManager, ATXNotificationSuggestionBiomeStream, DNDStateService, ATXSendToDigestManager, ATXNotificationSmartPauseManager, ATXUrgencyTuningManager, ATXNotificationManagementMAConstants, ATXChinSuggestionThrottlingManager;

@interface ATXNotificationDeliverySuggestionManager : NSObject {
    ATXNotificationSmartPauseManager *_smartPauseManager;
    ATXUrgencyTuningManager *_urgencyTuningManager;
    ATXSendMessagesToDigestManager *_sendMessagesToDigestManager;
    ATXSendToDigestManager *_sendToDigestManager;
    ATXTurnOffNotificationsForAppSuggestionManager *_turnOffNotificationsForAppManager;
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationSuggestionBiomeStream *_biomeStream;
    ATXNotificationManagementMAConstants *_constants;
    DNDStateService *_dndStateService;
    ATXChinSuggestionThrottlingManager *_throttlingManager;
}

@property (readonly, nonatomic) ATXNotificationsSuggestion *quietingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *promotingSuggester;
@property (readonly, nonatomic) ATXNotificationsSuggestion *rttOutcomeLogger;

- (unsigned long long)currentMode;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (id)init;
- (void)logSuggestionsToBiome:(id)a0;
- (id)initWithDataStore:(id)a0 suggestionBiomeStream:(id)a1;
- (id)filteredSuggestionsBasedOnFeedback:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)getScoreForSuggestion:(id)a0;
- (id)maxOneSuggestionFromSuggestions:(id)a0;
- (id)deduplicatedSuggestions:(id)a0;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (id)currentActiveSuggestions;
- (void)_activeSuggestionsWithReply:(id /* block */)a0;
- (BOOL)shouldShowSuggestion:(id)a0 withFeedback:(id)a1;
- (BOOL)digestHasBeenShownEnoughTimes;

@end
