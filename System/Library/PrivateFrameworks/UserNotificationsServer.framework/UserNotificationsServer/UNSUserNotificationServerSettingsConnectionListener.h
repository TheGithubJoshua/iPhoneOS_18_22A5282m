@class NSXPCListener, NSString, NSMutableArray, UNSNotificationSettingsService;

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver> {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    UNSNotificationSettingsService *_settingsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentConnection;
- (void)setNotificationSystemSettings:(id)a0;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)settingsService:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (void)resetScheduledDeliverySetting;
- (id)initWithNotificationSettingsService:(id)a0;
- (void)_handleClientConnectionInterrupted:(id)a0;
- (void)settingsService:(id)a0 didUpdateNotificationSourcesForBundleIdentifiers:(id)a1;
- (void).cxx_destruct;
- (void)getAllNotificationSourcesWithCompletionHandler:(id /* block */)a0;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)resume;
- (void)getNotificationSources:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)getNotificationSource:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getNotificationSystemSettingsWithCompletionHandler:(id /* block */)a0;

@end
