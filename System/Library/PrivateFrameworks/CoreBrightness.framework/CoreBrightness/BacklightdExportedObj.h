@class NSXPCConnection, NSString, BrightnessSystemInternal;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {
    unsigned long long _clientID;
    BOOL _clientIDSet;
}

@property (nonatomic) BrightnessSystemInternal *server;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyClientID;
- (void)clientSetPropertyWithKey:(id)a0 property:(id)a1;
- (void)clientCopyPropertyWithKey:(id)a0 reply:(id /* block */)a1;
- (void)clientSetSYNCPropertyWithKey:(id)a0 property:(id)a1 reply:(id /* block */)a2;
- (void)reconnect;
- (void)registerNotificationForProperties:(id)a0;
- (void)dealloc;

@end
