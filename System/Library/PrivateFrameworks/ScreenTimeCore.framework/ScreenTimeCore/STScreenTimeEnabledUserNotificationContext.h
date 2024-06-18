@interface STScreenTimeEnabledUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)notificationBundleIdentifier;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
