@interface MapsSuggestionsDarwinNotificationTrigger : MapsSuggestionsBaseTrigger {
    const char *_notificationName;
    int _notificationToken;
}

- (const char *)notificationName;
- (void)didRemoveLastObserver;
- (id)initWithNotificationName:(const char *)a0 triggerName:(id)a1;
- (void)didAddFirstObserver;
- (id)initWithNotificationName:(const char *)a0;
- (void)dealloc;
- (id)initWithName:(id)a0;

@end
