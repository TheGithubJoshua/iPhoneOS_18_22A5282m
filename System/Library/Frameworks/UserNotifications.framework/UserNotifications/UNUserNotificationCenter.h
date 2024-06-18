@class NSString, NSObject;
@protocol OS_dispatch_queue, UNUserNotificationCenterDelegatePrivate, UNUserNotificationCenterDelegate;

@interface UNUserNotificationCenter : NSObject <UNUserNotificationServiceConnectionObserver, UNUserNotificationCenterDelegateConnectionListenerDelegate>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegatePrivate> privateDelegate;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly, nonatomic) BOOL supportsContentExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsContentExtensions;
+ (id)currentNotificationCenter;

- (id)notificationCategories;
- (id)notificationSettingsForTopics;
- (id)notificationSettings;
- (id)init;
- (void)removeAllDeliveredNotifications;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeAllPendingNotificationRequests;
- (id)deliveredNotifications;
- (id)pendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)setNotificationRequests:(id)a0;
- (void)setNotificationCategories:(id)a0;
- (id)clearedInfoForDataProviderMigration;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestAuthorizationWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)didReceiveNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)a0;
- (void)setBadgeCount:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)a0;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)a0;
- (id)notificationTopics;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)a0;
- (id)badgeNumber;
- (void)setNotificationTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)a0;
- (void)didOpenApplicationForResponse:(id)a0;
- (void)addNotificationRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)didChangeSettings:(id)a0;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)a0;
- (void)removeSimilarNotificationRequests:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 queue:(id)a1;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)a0;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)a0;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)addNotificationRequest:(id)a0;

@end
