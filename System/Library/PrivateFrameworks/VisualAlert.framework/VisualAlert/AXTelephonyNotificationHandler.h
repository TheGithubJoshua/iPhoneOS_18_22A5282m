@interface AXTelephonyNotificationHandler : VISAXNotificationHandler

- (void)_startObserving;
- (void)_handleNotification:(id)a0;
- (void)_stopObserving;
- (id)_notificationTypeDescription;

@end
