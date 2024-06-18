@interface FAFamilyNotificationObserver : NSObject {
    BOOL _observing;
    id /* block */ _notificationHandler;
}

+ (id)familyNotificationObserverWithNotificationHandler:(id /* block */)a0;
+ (void)initialize;

- (id)init;
- (void)_startObserving;
- (void)stopObserving;
- (id)_initWithNotificationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_didReceiveNotification;

@end
