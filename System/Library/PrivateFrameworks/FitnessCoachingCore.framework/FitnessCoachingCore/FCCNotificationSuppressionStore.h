@class FCCDateProvider;

@interface FCCNotificationSuppressionStore : NSObject {
    FCCDateProvider *_dateProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

- (id)init;
- (BOOL)lastNotifiedSuppressionState;
- (id)allRequests;
- (void)removeNotificationSuppressionRequest:(id)a0;
- (void)_updateStoredRequests:(id)a0;
- (id)initWithDateProvider:(id)a0;
- (id)_requestsMap;
- (void).cxx_destruct;
- (BOOL)notificationsSuppressed;
- (void)addNotificationSuppressionRequest:(id)a0;
- (void)setLastNotifiedSuppressionState:(BOOL)a0;
- (id)_userDefaults;

@end
