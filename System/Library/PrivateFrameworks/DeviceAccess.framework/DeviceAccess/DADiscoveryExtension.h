@class NSXPCConnection, DADiscovery, _EXExtensionIdentity, NSObject;
@protocol OS_dispatch_queue;

@interface DADiscoveryExtension : NSObject <DADiscoveryExtensionXPCProtocolHost> {
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) _EXExtensionIdentity *ekExtension;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) DADiscovery *parent;

- (void)reportEvent:(id)a0;
- (void)activate;
- (void)_invalidated;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)_interrupted;
- (void)_activate;
- (void)_invalidate;

@end
