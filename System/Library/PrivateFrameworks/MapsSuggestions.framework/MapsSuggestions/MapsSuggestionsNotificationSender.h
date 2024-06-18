@interface MapsSuggestionsNotificationSender : NSObject {
    struct unique_ptr<MSg::NotificationSender, std::default_delete<MSg::NotificationSender>> { struct __compressed_pair<MSg::NotificationSender *, std::default_delete<MSg::NotificationSender>> { struct NotificationSender *__value_; } __ptr_; } _sender;
}

- (void)notify;
- (id)initWithDarwinNotification:(const char *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyWithPayloadString:(id)a0;
- (void)notifyWithState:(unsigned long long)a0;

@end
