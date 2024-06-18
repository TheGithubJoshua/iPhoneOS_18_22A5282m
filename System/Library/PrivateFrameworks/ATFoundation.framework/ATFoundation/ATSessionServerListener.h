@class NSString, NSXPCListener, NSMutableDictionary;

@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer> {
    NSXPCListener *_listener;
    NSMutableDictionary *_sessionProxiesBySessionID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSessionServer;

- (id)init;
- (void)fetchSessionsWithTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)stop;
- (void)fetchActiveSessionCountForSessionTypeIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)start;
- (void)_dumpDebugInformation;
- (void)cancelSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeSession:(id)a0;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)addSession:(id)a0;

@end
