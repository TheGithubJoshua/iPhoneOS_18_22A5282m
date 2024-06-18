@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct __compressed_pair<MSg::NotificationReceiver *, std::default_delete<MSg::NotificationReceiver>> { struct NotificationReceiver *__value_; } __ptr_; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (id)init;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addIgnoredClientProcess:(id)a0;
- (id)initWithName:(id)a0;

@end
