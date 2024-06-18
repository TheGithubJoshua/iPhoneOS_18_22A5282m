@class NSXPCConnection;
@protocol RDXPCProtocol;

@interface RDCommClient : NSObject <RDXPCProtocol> {
    NSXPCConnection *connection;
    id<RDXPCProtocol> server;
}

- (void)ping;
- (id)init;
- (void)update:(long long)a0 withCountryCode:(id)a1;
- (void)updatePeer:(id)a0 withEstimate:(id)a1;
- (void)createCacheDirAtPath:(id)a0;
- (void).cxx_destruct;
- (void)clearDataCache;
- (void)clearStatusSharedWithPeers;
- (void)shareStatusWithPeers;
- (void)updatePeer:(id)a0 withCountryCode:(id)a1 priority:(int)a2 andTimestamp:(id)a3;

@end
