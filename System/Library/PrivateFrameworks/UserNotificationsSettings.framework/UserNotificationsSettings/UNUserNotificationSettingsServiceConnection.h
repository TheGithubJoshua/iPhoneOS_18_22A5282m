@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface UNUserNotificationSettingsServiceConnection : NSObject <UNUserNotificationSettingsClientProtocol> {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (id)init;
- (void)setNotificationSystemSettings:(id)a0;
- (id)_queue_ensureConnection;
- (void)updateNotificationSystemSettings:(id)a0;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)_queue_invalidatedConnection;
- (id)notificationSystemSettings;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queue_removeObserver:(id)a0;
- (void)_queue_interruptedConnection;
- (void)resetScheduledDeliverySetting;
- (void)updateNotificationSourcesWithBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (id)notificationSourcesWithIdentifiers:(id)a0;
- (id)notificationSourceWithIdentifier:(id)a0;
- (void)addObserver:(id)a0;
- (id)allNotificationSources;
- (void)_invalidate;

@end
