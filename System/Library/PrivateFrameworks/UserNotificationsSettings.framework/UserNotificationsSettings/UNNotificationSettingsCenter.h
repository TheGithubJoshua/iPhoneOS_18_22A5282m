@class NSString;
@protocol UNNotificationSettingsCenterDelegate;

@interface UNNotificationSettingsCenter : NSObject <UNUserNotificationSettingsServiceConnectionObserver>

@property (weak, nonatomic) id<UNNotificationSettingsCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentNotificationSettingsCenter;

- (id)init;
- (void)setNotificationSystemSettings:(id)a0;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (id)notificationSystemSettings;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSourcesWithIdentifiers:(id)a1;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_init;
- (void)settingsServiceConnection:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)resetScheduledDeliverySetting;
- (void).cxx_destruct;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (void)dealloc;
- (id)notificationSourceWithIdentifier:(id)a0;
- (id)allNotificationSources;

@end
