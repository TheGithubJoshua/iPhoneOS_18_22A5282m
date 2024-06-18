@class NSString, WiFiP2PXPCConnection;

@interface WiFiP2PTrafficRegistrationReservation : NSObject <WiFiP2PXPCConnectionDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    unsigned long long _enabledCount;
}

@property (readonly, nonatomic) NSString *service;
@property (nonatomic) BOOL showsUIAlertOnError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)remoteObjectInterface;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initForService:(id)a0;
- (void)handleConnectionEstablishedWithProxy:(id)a0;
- (id)trafficRegistrationConfiguration;

@end
