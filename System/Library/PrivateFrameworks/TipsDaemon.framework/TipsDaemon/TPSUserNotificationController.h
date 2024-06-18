@class UNUserNotificationCenter;

@interface TPSUserNotificationController : TPSLocalNotificationController

@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter;

- (void)removeAllNotifications;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeNotificationWithIdentifier:(id)a0;
- (BOOL)isNotificationSettingValid;
- (void)sendNotificationWithIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 title:(id)a3 text:(id)a4 attachmentURL:(id)a5 extensionPayload:(id)a6;

@end
