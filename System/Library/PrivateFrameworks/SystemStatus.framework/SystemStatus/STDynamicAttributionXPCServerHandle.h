@class NSString, NSMutableSet, NSXPCConnection;

@interface STDynamicAttributionXPCServerHandle : NSObject <STDynamicAttributionXPCClientProtocol, STDynamicActivityAttributionServerHandle> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSXPCConnection *_lock_connection;
    id /* block */ _lock_connectionProvider;
    NSMutableSet *_lock_clients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (id)init;
- (void)setAttributionLocalizableKey:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)setLocalizableAttributionKey:(id)a0 andApplication:(id)a1 forClient:(id)a2;
- (id)initWithXPCConnectionProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setAttributionWebsiteString:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)currentAttributionsDidChange:(id)a0;
- (void)subscribeToUpdates:(id)a0;
- (void)setAttributionStringWithFormat:(id)a0 maskingClientAuditToken:(struct { unsigned int x0[8]; })a1 forClient:(id)a2;
- (void)unsubscribeFromUpdates:(id)a0;

@end
