@class NSString, NSXPCListener, NSXPCConnection;
@protocol ANAccountNotifierDelegate;

@interface ANAccountNotifier : NSObject <NSXPCListenerDelegate, ANClientCallbackProtocol> {
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_bulletinResponseListener;
    NSString *_callbackMachService;
}

@property (weak, nonatomic) id<ANAccountNotifierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_daemonConnectionWasInvalidated;
- (void)removeNotificationsWithEventIdentifier:(id)a0;
- (id)init;
- (void)notificationWasCleared:(id)a0;
- (void)_daemonConnectionWasInterrupted;
- (id)_createDaemonConnection;
- (void)notificationWasDismissed:(id)a0;
- (void)addNotification:(id)a0;
- (void)_disconnectFromDaemon;
- (id)initWithCallbackMachService:(id)a0;
- (void).cxx_destruct;
- (void)notificationWasActivated:(id)a0;
- (id)_daemonConnection;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)_stopNotificationCallbackListener;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)_startNotificationCallbackListenerWithMachServiceName:(id)a0;

@end
