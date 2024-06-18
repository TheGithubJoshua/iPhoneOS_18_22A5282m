@class NSString, WiFiP2PXPCConnection, UNUserNotificationCenter;

@interface WiFiP2PUIAgent : NSObject <UNUserNotificationCenterDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedObject;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)activate;
- (void)configureNotificationsWithBundleIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)showInfrastructureDisconnectOnRetroModeNotificationForService:(id)a0 completionHandler:(id /* block */)a1;
- (id)exportedInterface;
- (void)removeNotificationsWithIdentifiers:(id)a0;
- (void)addNotificationRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
