@class ATXNotificationAndSuggestionDatastore, ATXNotificationManagementMAConstants;

@interface ATXUrgencyTuningManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
    ATXNotificationManagementMAConstants *_notificationManagementMAConstants;
}

- (id)init;
- (id)activeSuggestions;
- (void).cxx_destruct;
- (id)urgencyTuningSuggestion:(id)a0 uuid:(id)a1 engagementStatus:(id)a2;
- (id)initWithDataStore:(id)a0;

@end
