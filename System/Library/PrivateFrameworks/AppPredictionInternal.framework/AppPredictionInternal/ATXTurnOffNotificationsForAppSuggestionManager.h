@class ATXNotificationAndSuggestionDatastore;

@interface ATXTurnOffNotificationsForAppSuggestionManager : NSObject {
    ATXNotificationAndSuggestionDatastore *_dataStore;
}

- (id)init;
- (id)activeSuggestions;
- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;

@end
