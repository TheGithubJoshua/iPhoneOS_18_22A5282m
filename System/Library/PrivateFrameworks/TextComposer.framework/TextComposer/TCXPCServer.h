@class NSXPCListener, NSString, TCTextServer, NSObject;
@protocol OS_dispatch_queue;

@interface TCXPCServer : NSObject <NSXPCListenerDelegate> {
    TCTextServer *_server;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)run;
- (id)initWithTextServer:(id)a0;

@end
