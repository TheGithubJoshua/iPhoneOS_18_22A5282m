@class NSString, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface GEODaemon : NSObject <GEOPListStateCapturing> {
    NSMutableDictionary *_servers;
    NSMutableArray *_serversToStart;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_sigUsr1Src;
    NSObject<OS_xpc_object> *_listener;
    unsigned long long _stateCaptureHandle;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly, nonatomic) NSMutableSet *peers;
@property (readonly, nonatomic) BOOL shouldExitOnShutdown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_shutdown:(BOOL)a0;
- (void)shutdown;
- (void)_localeChanged:(id)a0;
- (void)addServerClass:(Class)a0;
- (void)addServer:(id)a0;
- (id)initPrimaryDaemon;
- (void)shutdown:(BOOL)a0;
- (void)start;
- (id)initWithPort:(const char *)a0 createXPCListenerBlock:(id /* block */)a1;
- (void)_handleNewConnection:(id)a0;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)peerDidDisconnect:(id)a0;
- (void)peerDidConnect:(id)a0;
- (id)startServerClassIfNecessary:(Class)a0;
- (void)dealloc;
- (id)_createPeerForConnection:(id)a0;

@end
