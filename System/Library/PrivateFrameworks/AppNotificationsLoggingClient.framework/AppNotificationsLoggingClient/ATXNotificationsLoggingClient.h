@class ATXNotificationsAggregateLogger, NSXPCConnection, _PASSimpleCoalescingTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol> {
    NSXPCConnection *_xpcConnection;
    ATXNotificationsAggregateLogger *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_activeSuggestionsRequests;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

+ (id)sharedInstance;

- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (id)init;
- (void)logRealTimeTuningCountFrom:(unsigned long long)a0;
- (void)quietingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)logSuggestionEvent:(long long)a0 suggestionType:(long long)a1 suggestionIdentifier:(id)a2 timestamp:(id)a3;
- (void)promotingSuggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1 timestamp:(id)a2;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_processActiveSuggestionsRequests;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1;
- (void)suggestionForNotification:(id)a0 reply:(id /* block */)a1;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)logNotificationDeliveryUI:(unsigned long long)a0 notificationUUIDs:(id)a1;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2;

@end
