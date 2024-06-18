@class NSXPCConnection;

@interface CARSessionRequestClient : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelRequests;
- (void)prepareForRemovingWiFiUUID:(id)a0 completion:(id /* block */)a1;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)a0;
- (void)startSessionWithHost:(id)a0 completion:(id /* block */)a1;
- (void)stoppedSessionForHostIdentifier:(id)a0;

@end
