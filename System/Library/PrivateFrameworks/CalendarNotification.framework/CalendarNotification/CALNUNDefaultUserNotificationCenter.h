@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationCategories;
- (id)notificationSettingsForTopics;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (id)notificationSettings;
- (void)removeAllDeliveredNotifications;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeAllPendingNotificationRequests;
- (id)deliveredNotifications;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)setNotificationCategories:(id)a0;
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
