@class NSXPCListenerEndpoint, NSString, NSXPCListener, CUMessageSession, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate> {
    NSMutableSet *_xpcConnections;
    NSXPCListenerEndpoint *_xpcEndpoint;
    NSXPCListener *_xpcListener;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ registerRequestHandler;
@property (copy, nonatomic) id /* block */ deregisterRequestHandler;
@property (copy, nonatomic) id /* block */ sendRequestHandler;
@property (retain, nonatomic) CUMessageSession *templateSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)activate;
- (void)_connectionInvalidated:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
